'''
Print the calendar of a given month and year
'''

import calendar

year = int(input("Please Enter a Year: "))

month = int(input("Please Enter a Month: "))

print(calendar.month(year,month))