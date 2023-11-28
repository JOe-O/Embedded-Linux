'''
Write a Python program to count the number of lines in a text file
'''
import os


#getting the path to the favorite websites .txt file
txt_path = os.path.dirname(os.path.realpath(__file__)) + "\\file.txt"

counter = 0

with open(txt_path) as f:

    content = f.readlines()

    for line in content:
        counter += 1
        
print(f'Number of Lines in txt file: {counter}')


