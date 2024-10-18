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

