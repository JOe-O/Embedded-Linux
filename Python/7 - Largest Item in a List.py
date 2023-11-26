'''
Find the largest item from a given list using loop
'''

ls = [1,3,5,2,6,3,7,9,23]

maxx = 0
for i in ls:
    if i > maxx:
        maxx = i

print(f'method 1: {maxx}')

##Alternative method 1

print(f'method 2: {max(ls)}')

##Alternative method 2

ls.sort()

print(f'method 3: {ls[-1]}')