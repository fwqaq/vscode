import matplotlib.pyplot as plt
from random_walk import RandomWalk


rw = RandomWalk()
point_numbers = range(0,rw.num_points)
rw.fill_walk()
plt.scatter(rw.x_values,rw.y_values,s = 10,c=point_numbers,cmap = plt.cm.Blues,edgecolor = 'none')
plt.scatter(0,0,c="green",edgecolor = 'none',s = 30)
plt.scatter(rw.x_values[-1],rw.y_values[-1],c = 'red',edgecolor = 'none') #设置第一个和最后一个点的参数
'''隐藏坐标'''
plt.axes().get_xaxis().set_visible(False)
plt.axes().get_yaxis().set_visible(False)
 #plt.figure(figsize = (10,6))
plt.show()
