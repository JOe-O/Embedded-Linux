'''
Write a Python code to generate init function of GPIO for AVR
'''
import os


ls = []

#getting the path to the favorite websites .txt file
txt_path = os.path.dirname(os.path.realpath(__file__)) + "\\init.txt"

for i in range(0,8):
    pinValue = str(input(f'Please enter Bit {i} mode: '))
    if pinValue == 'in':
        ls.append('0')
    elif pinValue == 'out':
        ls.append('1')
    else:
        ls.append('0')
ls.reverse()

print(ls)
bits = ''.join(ls)
print(bits)

initCode = f'\
void Init_PORTA_DIR(void)\n\
{{\n\
    DDRA = 0b{bits};\n\
}}'

print(initCode)

with open(txt_path,'w') as file:
    file.write(initCode)
    print('File Written Successfuly')