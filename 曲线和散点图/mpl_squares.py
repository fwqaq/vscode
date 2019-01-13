import matplotlib.pyplot as plt

x_squares = [1,2,3,4,5]
squares = [1,4,9,16,25]
plt.plot(x_squares,squares,linewidth = 5) #向matplotlib传递数据，linewidth设置线条的宽度
plt.title('tuxing',fontsize=6)  #设置图形的标题并且设置字体的大小
plt.xlabel('x_zhou',fontsize = 5)  #设置x轴的名字和字体的大小
plt.ylabel('y_zhou',fontsize = 5)  #设置y轴的名字和字体的大小

plt.tick_params(axis = 'both',labelsize = 14) #函数tick_params()设置刻度的样式
plt.show()
