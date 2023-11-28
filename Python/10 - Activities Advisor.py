import requests
import json
import keyboard


url = "https://www.boredapi.com/api/activity"

#Function that gets called whenever a shortcut is pressed
def trigger():
    response = requests.get(url)
    jsonResponse = response.json()
    print("---------------------------------")
    print('Activity: ' + jsonResponse['activity'])
    print('Type: ' + jsonResponse['type'])
    print("---------------------------------")
    


#Function to listen for the shortcut in the background
def shortcutListner():
    print("Press Enter to Generate activity...")
    shortcut = "Enter"

    keyboard.add_hotkey(shortcut, trigger)

    keyboard.wait()

shortcutListner()