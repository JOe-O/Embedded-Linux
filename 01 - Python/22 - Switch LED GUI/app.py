from tkinter import *

def Onbutton():
    canvas.create_oval(66,43,130,102,fill='red')
    Label(window,text='Led is ON').place(x=72,y=225)
def Offbutton():
    canvas.create_oval(66,43,130,102,fill='white')
    Label(window,text='Led is OFF').place(x=72,y=225)


window = Tk()
window.geometry('200x300+1000+200')


ON = Button(window,text='Led ON ',height=1,command=Onbutton)
OFF = Button(window,text='Led OFF',height=1,command=Offbutton)

canvas = Canvas(window,width=200,height=200)

canvas.create_oval(66,43,130,102,fill='white')



OFF.pack(side='bottom')
ON.pack(side='bottom')

canvas.pack(pady=50)

window.mainloop()