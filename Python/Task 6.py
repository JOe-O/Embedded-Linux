'''
Write a python code that handle the following login system:

-------------------------
| User Name |  Password |
|-----------------------|
| Ahmed     | 1394      |
| Ali       | 6078      |
| Amr       | 9345      |
-------------------------

If the data entered is correct, the system shall show a welcome message
if not, the system will print incorrect entry

'''

usersDict = {
    "Ahmed": 1394,
    "Ali": 6078,
    "Amr": 9345
}

UserName = input("Please Enter User Name: ")
UserName = UserName.casefold().capitalize()

if UserName in usersDict.keys():
    password = int(input("Please Enter Password: "))

    if password == usersDict[UserName]:
        print(f'Welcome {UserName}!')
    else:
        print("Wrong Password, Please Try again.")

else:
    print("User Not Found")

