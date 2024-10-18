from flask import Flask, request, render_template
from transformers import T5ForConditionalGeneration, T5Tokenizer

app = Flask(__name__)

# Load the pre-trained T5 model and tokenizer
model_name = "t5-base"
tokenizer = T5Tokenizer.from_pretrained(model_name)
model = T5ForConditionalGeneration.from_pretrained(model_name)

# Function to paraphrase input text using the T5 model
def paraphrase_text(input_text):
    input_text = f"paraphrase: {input_text} </s>"
    inputs = tokenizer.encode(input_text, return_tensors="pt", max_length=512, truncation=True)
    outputs = model.generate(
        inputs,
        max_length=128,
        num_beams=4,
        early_stopping=True,
        num_return_sequences=1
    )
    paraphrased_text = tokenizer.decode(outputs[0], skip_special_tokens=True)
    return paraphrased_text

# Route for the home page with the form
@app.route('/')
def index():
    return render_template('index.html')

# Route to handle the form submission
@app.route('/process', methods=['POST'])
def process():
    input_text = request.form['text']
    paraphrased_text = paraphrase_text(input_text)
    return render_template('index.html', original_text=input_text, paraphrased_text=paraphrased_text)

if __name__ == '__main__':
    app.run(host='0.0.0.0', port=8000, debug=True)
