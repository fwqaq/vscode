'''对整个一年的最高温和最低温度进行折线图显示，并在两个区域之间进行着色'''
# -*- coding: UTF-8 -*-
import csv
from datetime import datetime
from matplotlib import pyplot as plt

filename = 'sitka_weather_2014.csv'
with open(filename) as f: #创建一个文件对象 f
    reader = csv.reader(f) #调用csv.reader()创建一个相关联的阅读器
    #调用next()函数，调用一次得到文件的第一行，并且加入在列表中，光标进入下一行
    header_row = next(reader)

    #调用enumerate()得到列表中的每个元素以及元素的索引
    for index,column_header in enumerate(header_row):
        print(index,column_header)
    dates = []
    highs = [ ] #创建一个高温空列表
    lows = [ ]
    for row in reader:    #row是返回每一行并且作为一个列表
        current_date = datetime.strptime(row[0],'%Y-%m-%d')
        dates.append(current_date)
        low = int(row[3])
        lows.append(low)
        high = int(row[1]) 
        highs.append(high)#在highs中加入每行的第二列数据,并且将字符转换为int
fig = plt.figure(dpi = 128,figsize = (10,6))   #设置屏幕的大小，以及分辨率dpi
plt.plot(dates,highs,c='red',alpha =0.5 )
plt.plot(dates,lows,c = 'blue',alpha = 0.5) #alpha是设置颜色的透明度
#调用fill_between()函数对折线中间进行着色
plt.fill_between(dates,highs,lows,facecolor = 'yellow',alpha = 0.1) 
plt.title('the picture of max T and min T',fontsize = 24)
plt.xlabel('Time',fontsize = 16)
fig.autofmt_xdate()
plt.ylabel('Temperature',fontsize = 16)
plt.tick_params(axis = 'both',which = 'major',labelsize = 16)
plt.show()
