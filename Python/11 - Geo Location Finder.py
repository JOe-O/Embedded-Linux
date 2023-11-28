import requests
import json


#API url to get the global ip of host machine
Global_IP_URL = "https://api.ipify.org/?format=json"

#Retrieved Global IP from the API
Global_IP_Response = requests.get(Global_IP_URL)

#Extracting the IP from the JSON output 
globalIP = Global_IP_Response.json()['ip']

#Formating a URL With Our Global IP To Get The Location Response
Location_Finder_URL = "https://ipinfo.io/" + str(globalIP) + "/geo"
#Retrieved Location Response
Location_Finder_Response = requests.get(Location_Finder_URL)

#Making the JSON output Easy to Read 
prettyLocation = json.dumps(Location_Finder_Response.json(), indent=4)

print(prettyLocation)

