'''
Write a Python program to count the number of words in a text file
'''
import os

#getting the path to the favorite websites .txt file
txt_path = os.path.dirname(os.path.realpath(__file__)) + "\\file.txt"

with open(txt_path) as f:

    content = f.read()

print(f"Number of Words: {len(content.split(' '))}")


