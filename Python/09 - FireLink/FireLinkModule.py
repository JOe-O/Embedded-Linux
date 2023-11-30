from selenium import webdriver
import os


#options to prevent selenium from automatically closing the browser window
options = webdriver.ChromeOptions()
options.add_experimental_option("detach",True)

#getting the path to the favorite websites .txt file
txt_path = os.path.dirname(os.path.realpath(__file__)) + "\Fav_Sites.txt"

f = open(txt_path)
content = f.readlines()

notFound = 0

def webOpen(link):
    for i in content:
        if link in i:
            indexx = content.index(i)
            url = content[indexx].split(' ')[1]
            driver = webdriver.Chrome(options=options)
            driver.get(url)
            notFound = 0
            break
        else:
            notFound = 1
    if notFound == 1:
        print('Website Not Found')

