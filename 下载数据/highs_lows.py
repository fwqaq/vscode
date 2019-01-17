# -*- coding: UTF-8 -*-
import csv
from datetime import datetime
from matplotlib import pyplot as plt

filename = 'sitka_weather_07-2014.csv'
with open(filename) as f: #创建一个文件对象 f
    reader = csv.reader(f) #调用csv.reader()创建一个相关联的阅读器
    #调用next()函数，调用一次得到文件的第一行，并且加入在列表中，光标进入下一行
    header_row = next(reader)

    #调用enumerate()得到列表中的每个元素以及元素的索引
    for index,column_header in enumerate(header_row):
        print(index,column_header)
    dates = []
    highs = [ ] #创建一个高温空列表
    for row in reader:    #row是返回每一行并且作为一个列表
        current_date = datetime.strptime(row[0],'%Y-%m-%d')
        dates.append(current_date)
        high = int(row[1]) 
        highs.append(high)#在highs中加入每行的第二列数据,并且将字符转换为int
    print(dates)
fig = plt.figure(dpi = 128,figsize = (10,6))   #设置屏幕的大小，以及分辨率dpi
plt.plot(dates,highs,c='red')
plt.title('wen du _ shi jian tu',fontsize = 24)
plt.xlabel('Time',fontsize = 16)
fig.autofmt_xdate()
plt.ylabel('Temperature',fontsize = 16)
plt.tick_params(axis = 'both',which = 'major',labelsize = 16)
plt.show()
