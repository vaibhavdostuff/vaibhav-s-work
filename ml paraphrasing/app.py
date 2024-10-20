from flask import Flask, request, render_template
from transformers import AutoTokenizer, AutoModelForSeq2SeqLM, AutoModelForSequenceClassification, MarianMTModel, MarianTokenizer
import torch
from textblob import TextBlob  # For auto-correction

app = Flask(__name__)

# Load the paraphrasing model and tokenizer
paraphrase_model_name = "t5-large"
paraphrase_tokenizer = AutoTokenizer.from_pretrained(paraphrase_model_name)
paraphrase_model = AutoModelForSeq2SeqLM.from_pretrained(paraphrase_model_name)

# Load the similarity classification model and tokenizer
similarity_model_name = "bert-base-cased-finetuned-mrpc"
similarity_tokenizer = AutoTokenizer.from_pretrained(similarity_model_name)
similarity_model = AutoModelForSequenceClassification.from_pretrained(similarity_model_name)
similarity_classes = ["not paraphrase", "is paraphrase"]

# Load translation models and tokenizers
translation_models = {
    "en": MarianMTModel.from_pretrained("Helsinki-NLP/opus-mt-en-ROMANCE"),
    "fr": MarianMTModel.from_pretrained("Helsinki-NLP/opus-mt-fr-en"),
    "es": MarianMTModel.from_pretrained("Helsinki-NLP/opus-mt-es-en"),
    "hi": MarianMTModel.from_pretrained("Helsinki-NLP/opus-mt-hi-en"),
}

translation_tokenizers = {
    "en": MarianTokenizer.from_pretrained("Helsinki-NLP/opus-mt-en-ROMANCE"),
    "fr": MarianTokenizer.from_pretrained("Helsinki-NLP/opus-mt-fr-en"),
    "es": MarianTokenizer.from_pretrained("Helsinki-NLP/opus-mt-es-en"),
    "hi": MarianTokenizer.from_pretrained("Helsinki-NLP/opus-mt-hi-en"),
}

def paraphrase_sentence(input_sentence, max_length=60, num_beams=7):
    input_text = f"paraphrase: {input_sentence} </s>"
    input_ids = paraphrase_tokenizer.encode(input_text, return_tensors="pt", max_length=128, truncation=True)

    with torch.no_grad():
        outputs = paraphrase_model.generate(
            input_ids,
            max_length=max_length,
            num_beams=num_beams,
            num_return_sequences=2,
            early_stopping=True,
            temperature=1.2  # Lower temperature for more controlled outputs
        )
    
    paraphrased_sentences = [paraphrase_tokenizer.decode(output, skip_special_tokens=True) for output in outputs]

    # Auto-correct and filter out non-English sentences
    corrected_sentences = [str(TextBlob(sentence).correct()) for sentence in paraphrased_sentences if sentence]

    return corrected_sentences[:2]

def classify_similarity(sentence1, sentence2):
    paraphrase = similarity_tokenizer(sentence1, sentence2, return_tensors="pt")
    paraphrase_classification_logits = similarity_model(**paraphrase).logits
    paraphrase_results = torch.softmax(paraphrase_classification_logits, dim=1).tolist()[0]
    results = {similarity_classes[i]: int(round(paraphrase_results[i] * 100)) for i in range(len(similarity_classes))}
    return results

def translate_text(text, source_lang, target_lang):
    if source_lang == target_lang:
        return text
    
    tokenizer = translation_tokenizers.get(target_lang)
    model = translation_models.get(target_lang)
    if tokenizer and model:
        inputs = tokenizer(text, return_tensors="pt", padding=True, truncation=True)
        with torch.no_grad():
            translated_tokens = model.generate(**inputs)
        translated_text = tokenizer.decode(translated_tokens[0], skip_special_tokens=True)
        return translated_text
    return text


@app.route('/')
def home():
    return render_template('index.html')

@app.route('/paraphrase', methods=['POST'])
def paraphrase():
    input_sentence = request.form.get('sentence', '').strip()
    language = request.form.get('language', 'en')

    if not input_sentence:
        return render_template('result.html', original="", paraphrased=["Please enter a sentence."], similarities=[])
    
    try:
        # Get paraphrased sentences
        paraphrased_sentences = paraphrase_sentence(input_sentence)

        # Calculate similarity for each paraphrased sentence
        similarities = []
        for paraphrased in paraphrased_sentences:
            similarity_result = classify_similarity(input_sentence, paraphrased)
            similarity_percentage = similarity_result["is paraphrase"]
            similarities.append(f"{similarity_percentage}%")

        # Translate if needed
        if language != "en":
            paraphrased_sentences = [translate_text(sentence, "en", language) for sentence in paraphrased_sentences]
            input_sentence = translate_text(input_sentence, "en", language)

    except Exception as e:
        paraphrased_sentences = [f"Error occurred: {str(e)}"]
        similarities = []

    return render_template('result.html', original=input_sentence, paraphrased=paraphrased_sentences, similarities=similarities)

if __name__ == '__main__':
    app.run(debug=True)

