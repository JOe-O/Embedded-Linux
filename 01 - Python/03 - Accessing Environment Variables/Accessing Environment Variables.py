'''
Write a python program to access environment variables
'''
import os

path = os.environ['PATH']

#splitting the paths for better visualization
Splitted_Path = path.split(';')

for i in Splitted_Path:
    print(i)

print(path)