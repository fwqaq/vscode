#用PIL中的crop()方法从中裁剪指定区域
from PIL import Image
import matplotlib.pyplot as plt
import numpy as np
image = Image.open("1.jpg")
box=(500,500,2500,2500)#指定的区域
region = image.crop(box)#运用crop进行裁剪
data = np.array(region)
plt.imshow(data)
plt.show()
