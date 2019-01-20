import  time
import cv2 as cv
import os
import sys
from itertools import cycle

#----opencv串口显示-----
img = cv.imread('img/video_test2.jpg') #读取一张图片
cv.imshow('窗口标题',img) #对图像进行串口显示
cv.waitKey()

#---opencv窗口循环
frame_path = 'img'
#列出img下所有的图像
filenames = os.listdir(frame_path)
#通过itertools.cycle生成一个无限循环的迭代器，每次迭代都输出一张图片
img_iter = cycle([cv.imread(os.sep.join([frame_path,x])) for x in filenames])
key = 0
while key & 0xff!=27:
    cv.imshow('window title',next(img_iter))
    key = cv2.waitKey(500)
