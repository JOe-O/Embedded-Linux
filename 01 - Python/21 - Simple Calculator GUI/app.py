from tkinter import *

def calculate():
    global operation
    if operation.get() == 1:
        Label(window,text=f'The Sum is : {Entry1.get()} + {Entry2.get()} = {float(Entry1.get()) + float(Entry2.get())}').place(x=165,y=98)
    elif operation.get() == 0:
        Label(window,text=f'The Sub is : {Entry1.get()} - {Entry2.get()} = {float(Entry1.get()) - float(Entry2.get())}').place(x=165,y=98)


window = Tk()
window.geometry('400x180+1000+200')

operation = IntVar()

Label(window,text='Enter First Value: ').grid(row=0,padx=50,pady=29)
Label(window,text='Enter Second Value: ').place(x=50,y=62)
Radiobutton(window,text='Add',variable=operation,value=1).place(x=20,y=110)
Radiobutton(window,text='Sub',variable=operation,value=0).place(x=20,y=130)



Entry1 = Entry(window,width=15,font=8)
Entry2 = Entry(window,width=15,font=8)
validateButton = Button(window,text='Calculate',width=18,border=2.5,command=calculate)

Entry1.place(x=165,y=28)
Entry2.place(x=165,y=60)

validateButton.place(x=165,y=130)


window.mainloop()