'''
Write a Python program to get the command-line arguments 
'''
import sys

nameArg = str(sys.argv[1])
ageArg = int(sys.argv[2])

print(f'My Name Is {nameArg}\nAnd My Age Is {ageArg}')

