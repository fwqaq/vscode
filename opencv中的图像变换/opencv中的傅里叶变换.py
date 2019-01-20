import numpy as np
import cv2 as cv
from matplotlib import pyplot as plt

img = cv.imread('1.jpg',0)
dft = cv.dft(np.float32(img),#首先转换为np.float32格式的
             #flags是标志服，cv.DFT_COMPLEX_OUTPUR对一维数组或者二维数组进行正向变换
             flags = cv.DFT_COMPLEX_OUTPUT)
#=========FFT的正变换==========
dft_shift = np.fft.fftshift(dft)
#构建振幅的公式
magnitude_sepectrum = 20*np.log(cv.magnitude(dft_shift[:,:,0],dft_shift[:,:,1]))

plt.subplot(231)
plt.imshow(img,cmap = 'gray')
plt.xticks([]),plt.yticks([])
plt.subplot(232)
plt.imshow(magnitude_sepectrum,cmap = 'gray')
plt.xticks([]),plt.yticks([])
#===========FFT的逆变换=======
rows,cols = img.shape
crow,ccol = rows//2,cols//2

mask = np.zeros((rows,cols,2),np.uint8) #列表是形状，np.uint8是数据类型，返回一个数组mask
mask[crow-30:crow+30,ccol-30:ccol+30] = 1 

fshift = dft_shift*mask
f_ishift = np.fft.ifftshift(fshift)#将频率直流分量移到中间
img_back = cv.idft(f_ishift) #进行傅里叶逆变换
img_back = cv.magnitude(img_back[:,:,0],img_back[:,:,1]) #计算二维矢量的幅值

plt.subplot(234),plt.imshow(img,cmap= 'gray')
plt.title('Input Image'),plt.xticks([]),plt.yticks([])
plt.subplot(235),plt.imshow(img_back,cmap= 'gray')
plt.title('Magnitude Sepectrum'),plt.xticks([]),plt.yticks([])
plt.show()



