from tkinter import*

root = Tk()

sb = Scrollbar(root)
sb.pack(side=RIGHT,fill = Y)#添加一个滚动条

#设置Listbox中的yscrollcommand中的属性是Scrollbar中的set方法
lb = Listbox(root,yscrollcommand = sb.set)

for i in range(1000):
    lb.insert(END,i)

lb.pack(side = LEFT,fill = BOTH)

sb.config(command = lb.yview)#用config设置Scrollbar组件中的command选项为yview

mainloop()
