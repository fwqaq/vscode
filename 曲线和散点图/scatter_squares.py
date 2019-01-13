'''散点图
import matplotlib.pyplot as plt
x_zuobiao = [1,2,3,4,5,6]
y_zuobiao = [1,4,9,16,25,36]
plt.scatter(x_zuobiao,y_zuobiao,s = 200)#箱scatter传递两个列表，前面为x轴，s表示的是散点的尺寸
plt.title("biaoti",fontsize = 10)
plt.xlabel("x_zhou",fontsize = 10)
plt.ylabel("y_zhou",fontsize = 10)

plt.tick_params(axis = "both",which = "major", labelsize = 14) 
plt.show()
'''
import matplotlib.pyplot as plt
x_zuobiao = list(range(1,1001))
'''
设置点的颜色c( )函数和去掉点的轮廓颜色
plt.scatter(x_zuobiao,[x**2 for x in x_zuobiao],s=4,c=(0,0,0.8),edgecolor = 'none')
'''
plt.scatter(x_zuobiao,[x**2 for x in x_zuobiao],\
            c = [x**2 for x in x_zuobiao],cmap = plt.cm.Blues,edgecolor = 'none',s = 10)
plt.title("biaoti",fontsize = 10)
plt.xlabel("x_zhou",fontsize = 10)
plt.ylabel("y_zhou",fontsize = 10)

plt.axis([0,1100,0,1100000])
plt.show()
