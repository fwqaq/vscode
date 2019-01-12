from PIL import Image
import matplotlib.pyplot as plt
import numpy as np
import matplotlib.cm as cm

image = Image.open('1.jpg').convert("1") #读取图像并且进行灰度转化
plt.imshow(image)
plt.show() #需要调用show()方法，不然图像只会在内存中而不显示出来
f = np.fft.fft2(img)
fshift = np.fft.fftshift(f)

#使用convert（）方法来实现图像的灰度转化，PIL中把汗九种不同的模式，1为二值图像，非黑即白
#每个像素用8个bit表示，0表示黑，255表示白
