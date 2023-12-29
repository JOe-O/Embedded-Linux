import re

email = "sarah.brown@school.eduyy"

phoneNumber = "01006568344"

emailReg = re.search("(^[\w.-]+@[\w.]+\.\w{2,3})$", email)

numberReg = re.search("(^010\d{8})$", phoneNumber)

if emailReg:
    print("Email is valid")
else:
    print("Email is invalid!")

if numberReg:
    print("Phone number is valid")
else:
    print("Phone number is invalid!")
