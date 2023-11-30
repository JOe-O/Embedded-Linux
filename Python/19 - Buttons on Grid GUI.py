from tkinter import *

window = Tk()
# window.geometry('500x500+1000+200')
button1 = Button(window,text='Button 1')
button2 = Button(window,text='Button 2')
button3 = Button(window,text='Button 3')
button4 = Button(window,text='Button 4')


#Displaying the buttons on Grid
button1.grid(row=0,column=1)
button2.grid(row=1,column=0)
button3.grid(row=1,column=2)
button4.grid(row=2,column=1)

window.mainloop()