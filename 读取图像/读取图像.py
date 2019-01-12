from PIL import Image
import matplotlib.pyplot as plt
import numpy as np
import matplotlib.cm as cm

image = Image.open('1.jpg') #读取图像
plt.imshow(image)
plt.show() #需要调用show()方法，不然图像只会在内存中而不显示出来

