'''
Write a Python program to test wheter a passed letter is a vowel or not
'''

def IS_VOWEL(x):
    vowels = ['a','e','i','o','u','A','E','I','O','U']
    if x.isalpha() and len(x) == 1:
        if x.upper() in vowels or x.lower() in vowels:
            print("vowel")
        else:
            print("not a vowel")
    else:
        print("Error: Invalid Input")
    

letter = input("Please Enter a Letter: ")

IS_VOWEL(letter)