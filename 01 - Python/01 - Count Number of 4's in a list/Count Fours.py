'''
Write a Python program to count the number 4 in a given list
'''
def countFours(x):
    count = 0
    for i in x:
        if i == 4:
            count+=1
    return count

ls = [1,2,4,2,3,4,4,4,4,4]

print(countFours(ls))