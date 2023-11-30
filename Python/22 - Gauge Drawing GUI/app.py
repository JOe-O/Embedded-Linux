from tkinter import *


window = Tk()

window.geometry('500x400+1000+200')

canvas = Canvas(window,width=400,height=300,bg='white')


canvas.create_rectangle(55,55,450,350,outline='black')
# Coordinates for the arc
coord = 55,55,450,350


# Create the arc with extent=150
canvas.create_arc(coord, start=40, extent=100, fill="red")
canvas.create_arc(coord, start=55, extent=85, fill="yellow")
canvas.create_arc(coord, start=75, extent=65, fill="green")


canvas.pack(fill='both',expand=1)


window.mainloop()