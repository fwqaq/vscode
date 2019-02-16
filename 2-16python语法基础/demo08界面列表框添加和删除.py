from tkinter import *
master = Tk()

theLB = Listbox(master)
theLB.pack()

for item in ['鸡蛋','鸭蛋','鹅蛋','鸟蛋']:
    theLB.insert(END,item)

theButton = Button(master,text='删除他',command = lambda:theLB.delete(ACTIVE))
theButton.pack()
mainloop()
