from flask import Flask, request, render_template
from transformers import AutoTokenizer, AutoModelForSeq2SeqLM, AutoModelForSequenceClassification, MarianMTModel, MarianTokenizer
import torch
from textblob import TextBlob  # For auto-correction

