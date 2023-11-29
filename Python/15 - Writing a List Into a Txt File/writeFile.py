'''
Write a Python program to write a "list" to a file
'''
import os


ls = [1,2,3,4,5,6,7,8,9, " hello From The Other Side"]

#getting the path to the favorite websites .txt file
txt_path = os.path.dirname(os.path.realpath(__file__)) + "\\text.txt"

with open(txt_path,'w') as file:
    for i in ls:
        file.write(str(i) + " ")