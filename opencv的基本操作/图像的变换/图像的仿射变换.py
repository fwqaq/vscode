#主要包括缩放，旋转，剪切，平移，以及他们之间的组合
import cv2 as cv
import numpy as np

#==========图像的仿射变换=======
#仿射变换具体到图像中的引用
img = cv.imread('1.jpg')

#沿着横纵轴放大1.6倍，然后平移（-150，-240），最后沿着原图大小截取
#M_crop_elephant是变换矩阵
M_crop_elephant = np.array([[1.6,0,-150],[0,1.6,-240]],dtype = np.float32) 
#在第一个[]中是横轴的参数，第二个是纵轴的参数
img_elephant = cv.warpAffine(img,M_crop_elephant,(400,600))#warpAffine(对图像做仿射变换)
cv.imwrite('img_elephant.jpg',img_elephant)

#将x轴的剪切变换，角度15°
theta = 15*np.pi/180
M_shear = np.array([[1,np.tan(theta),0],[0,1,0]],dtype = np.float32)
img_sheared = cv.warpAffine(img,M_shear,(400,600))
#img是输入图像，M_shear是变换矩阵,(400,600)是输出图像的大小
cv.imwrite('img_sheared.jpg',img_sheared)

#顺时针旋转，角度15
M = np.array([[np.cos(theta),-np.sin(theta),0],\
                     [np.sin(theta),np.cos(theta),0]\
                     ],dtype = np.float32)#变换矩阵
img_transformed = cv.warpAffine(img,M,(400,600))
cv.imwrite('img_transformed.jpg',img_transformed)
