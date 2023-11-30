from tkinter import *
import math

def Factorial():
    Factorial = int(Entry1.get())
    Label(window,text=f'Factorial = {math.factorial(Factorial)}',font=50).place(x=130,y=70)


window = Tk()

window.geometry('300x150+1000+200')

Label(window,text='Enter a Number: ').grid(row=0,padx=25,pady=29)


Entry1 = Entry(window,width=20,border=1)
calculateButton = Button(window,text='Calculate',width=15,command=Factorial,border=2.5)

Entry1.place(x=130,y=31)
calculateButton.place(x=131,y=105)


window.mainloop()