'''
Python program to parse header file and read all prototypes of function and insert it into excel sheet with unique ID start with IDX0
'''
import pandas as pd
import os
import numpy as np


#getting the path to the favorite websites .txt file
header_path = os.path.dirname(os.path.realpath(__file__)) + "\\DIO_int.txt"

headerFunctions = []
headerIndex = []

ID = 0
Data = {
    "Function Header": headerFunctions,
     "ID": headerIndex
}

with open(header_path) as file:
    content = file.readlines()

for i in content:
    if i.startswith('u8') or i.startswith('void'):
        ID +=1
        headerFunctions.append(i)
        headerIndex.append('IDX0'+ str(ID))

# print(headerFunctions,headerIndex)

df = pd.DataFrame(Data)
pd.set_option('display.max_colwidth', None)
pd.set_option('display.colheader_justify','center' )

print(df)

df.to_excel(os.path.dirname(os.path.realpath(__file__)) + "\\Data_Frame.xlsx",index=False)