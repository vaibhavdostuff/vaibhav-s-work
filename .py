row_size = int(input("Enter the   row size:"))
print_control_x = 1
print_control_y = row_size*2-1
for out in range(1, row_size+1):
    for    inn in range(1, row_size*2+1):
        if inn == print_control_x or inn == print_control_y:
            print("*", end="")
        else:
            print(" ", end="")
    print_control_x += 1
    print_control_y -= 1
    print("\r") 

from flask import Flask, request, jsonify
import requests
from bs4 import BeautifulSoup
import csv
import os

app = Flask(__name__)

# Helper function to scrape IMDb and return results
def search_imdb(query):
    search_url = f"https://www.imdb.com/find?q={query}&s=tt"
    response = requests.get(search_url)
    soup = BeautifulSoup(response.text, 'html.parser')

    results = []
    for result in soup.find_all('td', class_='result_text'):
        link = result.find('a')
        if link:
            title = link.text.strip()
            imdb_id = link['href'].split('/')[2]
            year_text = result.text.strip().split('(')[-1].replace(')', '')
            year = year_text if year_text.isdigit() else 'N/A'
            results.append({
                'title': title,
                'imdbID': imdb_id,
                'year': year
            })
    return results

# Helper function to save results to CSV
def save_to_csv(data):
    file_exists = os.path.isfile('search_results.csv')
    with open('search_results.csv', mode='a', newline='', encoding='utf-8') as file:
        fieldnames = ['Title', 'IMDb ID', 'Year', 'Trivia URL']
        writer = csv.DictWriter(file, fieldnames=fieldnames)
        if not file_exists:
            writer.writeheader()  # Write header only once
        for item in data:
            writer.writerow({
                'Title': item['title'],
                'IMDb ID': item['imdbID'],
                'Year': item['year'],
                'Trivia URL': f"https://www.imdb.com/title/{item['imdbID']}/trivia/"
            })

# Search route
@app.route('/search', methods=['GET'])
def search():
    query = request.args.get('query')
    if not query:
        return jsonify({'error': 'Query parameter is required.'}), 400

    try:
        results = search_imdb(query)
        if results:
            save_to_csv(results)  # Save results to CSV
            return jsonify({'results': results})
        else:
            return jsonify({'error': 'No results found'}), 404
    except Exception as e:
        return jsonify({'error': str(e)}), 500

if __name__ == '__main__':
    app.run(debug=True)
