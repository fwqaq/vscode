from tkinter import*

master = Tk()#定义界面
frame = Frame(master)#定义一个面板将界面添加进去
frame.pack(padx = 10,pady = 10)#设置界面的边界


v1 = StringVar()
v2 = StringVar()
v3 = StringVar()#三个字符串表示三个文本框中的内容

def test(content):
    return content.isdigit()


testCMD = master.register(test)#验证函数，值返回true或false


#设置三个文本框和两个Label用grid进行构造
#并且在前两个文本框中需要进行对key的验证，判断是不是只属于数字
e1 = Entry(frame,textvariable = v1,validate = 'key',\
           validatecommand = (testCMD,'%P')).grid(row = 0,column = 0)

Label(frame,text='+').grid(row = 0,column =1)

e2 = Entry(frame,textvariable = v2,validate = 'key',\
           validatecommand = (testCMD,'%P')).grid(row = 0,column = 2)

Label(frame,text='=').grid(row = 0,column = 3)

e3 = Entry(frame,textvariable = v3,state = 'readonly')\
     .grid(row = 0,column = 4)

def calc():
    result = int(v1.get())+int(v2.get())
    v3.set(str(result))
#增加一个按钮并且设置一个命令
Button(frame,text='开始计算',command =calc).grid(row=1,column = 2)

mainloop()
