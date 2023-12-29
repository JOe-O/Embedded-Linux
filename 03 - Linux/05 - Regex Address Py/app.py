import re

address = "22,st salah salem-Giza"

addressReg = re.search("^\d{2,},st\s[a-zA-Z]+\s[a-zA-Z]+-[a-zA-Z]+$", address)


if addressReg:
    print("Address is Valid")
else:
    print("Address is Invalid!")
