#转化图像的格式处理
from PIL import Image
import matplotlib.pyplot as plt
import numpy as np

image = Image.open('1.jpg') #打开图片
image.save('1.png')   #运用save（）进行格式转化，并且保存
image = Image.open('1.png')   #打开转换后的图片
plt.imshow(image)     
plt.show()
 
