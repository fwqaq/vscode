from tkinter import *

def callback():
    var.set('你没有')

root = Tk()

frame1 = Frame(root)
frame2 = Frame(root)

var = StringVar()
var.set('你所下载的需要18')

photo = PhotoImage(file = "abc.gif")
theLabel = Label(frame1,
                 textvariable = var,
                 justify = LEFT,
                 image = photo,
                 compound = CENTER,
                 font=('华康少女字体',20),
                 fg='white')

theButton = Button(frame2,text = '我已经满18',command = callback)

theLabel.pack()
theButton.pack()

frame2.pack()
frame1.pack()
mainloop()
