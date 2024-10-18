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