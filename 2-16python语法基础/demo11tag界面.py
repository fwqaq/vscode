from tkinter import*
import webbrowser #导入打开网页的包

root = Tk()

text = Text(root,width = 30,height = 5)
text.pack()

text.insert(INSERT,'I love Fishc.com!')#添加文本

text.tag_add('link','1.7','1.16')#设置tag的范围
text.tag_config('link',foreground='blue',underline=True)


def show_hand_cur(event):
    text.config(cursor='arrow')

def show_x(event):
    text.config(cursor='xterm')

def click(event):
    webbrowser.open('http://www.fishc.com')

text.tag_bind('link','<Enter>',show_hand_cur)#点击位置
text.tag_bind('link','<Leave>',show_x)#离开后
text.tag_bind('link','<Button-1>',click)

#text.tag_config('tag1',background="yellow",foreground = 'red')#设置参数

mainloop()
#当有新的tag时会相互覆盖，新的会覆盖旧的tag，并且tag还支持时间操作
