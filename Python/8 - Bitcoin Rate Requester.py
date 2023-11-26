'''
Write code to find automatically bitcoin rate
'''
import requests
import json

#API Endpoint
url = "https://api.coindesk.com/v1/bpi/currentprice.json"

#A GET request to the API
response = requests.get(url)

#Convert Response to json
response_json = response.json()
# print(response_json)

#Extracting USD Rate
USD_RATE = json.dumps(response_json["bpi"]["USD"]["rate"],indent=4)
USD_RATE = float(USD_RATE.replace(',','').replace('"',''))
print(float(USD_RATE))

#Format the json output for better visuals
pretty_json = json.dumps(response_json, indent=4)
# print(pretty_json)