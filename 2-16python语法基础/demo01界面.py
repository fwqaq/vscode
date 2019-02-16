import tkinter as tk
app = tk.Tk()
app.title('FIshcdemo')#设置标题

theLabel = tk.Label(app,text = '我的第二个窗口程序')#标题设置，并给app
theLabel.pack()#自动调节组件的尺寸
app.mainloop()#主视见循环
