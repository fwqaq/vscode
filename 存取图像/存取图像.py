#导入cv模块
import cv2 as cv
#读取一张图片
color_img = cv.imread('1.jpg')
print(color_img.shape)#shape是返回图像的行数列数和色彩通道书

#直接读取单通道灰度图  参数IMREAF_GRAYSCALE就是设置位单通道灰度图
gray_img = cv.imread('1.jpg',cv.IMREAD_GRAYSCALE)
print(gray_img.shape)

#把单通道图片保存后，再读取，仍然是三通道，相当于把单通道值复制到3个通道保存
cv.imwrite('2.jpg',gray_img)
reload_grayscale = cv.imread('2.jpg')
print(reload_grayscale.shape)

#cv2.IMWRITE_JPEG_QUALITY制定jpg的质量，范围0-100，默认是95，越高画质越好，文件越大
cv.imwrite('3.jpg',color_img,(cv.IMWRITE_JPEG_QUALITY,80))

#cv2.IMWRITE_PNG_COMPRESSION制定png的质量，范围是0-9，默认是3，越高文件越小，画质越差
cv.imwrite('4.png',color_img,(cv.IMWRITE_PNG_COMPRESSION,5))

