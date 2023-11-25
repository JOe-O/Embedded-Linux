'''
Write a python program which accepts the radius of a circle from the user and computes its area
'''
import math

def Area(radius):

    return math.pi * (radius ** 2)

radius = float(input("Please Enter Radius: "))

print(f'Area of circle = {Area(radius)}')