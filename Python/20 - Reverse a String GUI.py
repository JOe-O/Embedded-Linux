from tkinter import *

def Reverse():
    Reversed_Label = Entry1.get()[::-1]
    Label(window,text=Reversed_Label,font=50).place(x=130,y=70)


window = Tk()

window.geometry('400x150+1000+200')

Label(window,text='Enter a word: ',font=50).grid(row=0,padx=25,pady=29)


Entry1 = Entry(window,width=27,font=20,border=3)
reverseButton = Button(window,text='Reverse',width=33,command=Reverse,border=2.5)

Entry1.place(x=130,y=28)
reverseButton.place(x=131,y=105)


window.mainloop()