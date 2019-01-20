import cv2 as cv
import numpy as np
from matplotlib import pyplot as plt
img = cv.imread('1.jpg',0) #直接读为灰度图像
#==========进行频率变换==========

f = np.fft.fft2(img)#是对img进行二维信号的fft变换
fshift = np.fft.fftshift(f) #将频率为0的部分（直流分量在输出图像的左上角）移到中心

#构建振幅图的公式
magnitude_sepectrum = 20*np.log(np.abs(fshift))
plt.subplot(231)#sbuplot（1,2,1）便是在本区域里显示一行两列个图像，最后一个1是指的第一个
plt.imshow(img,cmap = 'gray') #cmap是指绘图的样式,gray是灰色显示
plt.title('Imput Image'),plt.xticks([],[]),plt.yticks([])#plt.xticks([])在x轴上对应的值和显示的值
plt.subplot(232),plt.imshow(magnitude_sepectrum ,cmap = 'gray')
plt.title('Magnitude Sepectrum'),plt.xticks([-1,0,1]),plt.yticks([])

#==========进行频域变换==========
rows,cols = img.shape #获取图像的行列像素值
crow,ccol = rows//2,cols//2  
#使用一个60X60的矩形窗口对图像进行掩模操作从而去除低频分量
fshift[crow-30:crow+30,ccol-30:ccol+30] = 0
f_ishift = np.fft.ifftshift(fshift) #进行逆平移操作，将直流分量移到左上角
img_back = np.fft.ifft2(f_ishift) #进行FFT逆变换
img_back = np.abs(img_back)#取绝对值
plt.subplot(234),plt.imshow(img,cmap='gray')
plt.title('Input Image'),plt.xticks([]),plt.yticks([])
plt.subplot(235),plt.imshow(img_back,cmap='gray') 
plt.title('Input after HPF'),plt.xticks([]),plt.yticks([]) #高通滤波器之后的图形
plt.subplot(236),plt.imshow(img_back)
plt.title('Input after JET'),plt.xticks([]),plt.yticks([])
plt.show()

