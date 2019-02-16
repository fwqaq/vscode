from tkinter import*

root = Tk()

text = Text(root,width=300,height=300)
text.pack()

photo = PhotoImage(file = 'abc.gif')

def show():
    print('??')
    text.image_create(END,image=photo)

b1 = Button(text,text='点',command = show)
text.window_create(INSERT,window = b1)

mainloop()
