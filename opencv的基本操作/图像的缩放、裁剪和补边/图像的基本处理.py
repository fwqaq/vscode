import cv2 as cv

#读取一张原始图片
img = cv.imread('1.jpg')
#缩放成200X200的方形图形
img_200X200 = cv.resize(img,(200,200))

#resize()不制动缩放后的大小，通过fx和fy指定缩放比例，0.5则长宽都为原来的一般
#等效于img_100X100 = cv.resize(img,(100,100))。注意指定大小的个十是（宽度，高度）
#插值方法默认是cv2.INTER_LINEAR，智力指定为最近邻插值
img_100X100 = cv.resize(img_200X200,(0,0),fx = 0.5,fy = 0.5,\
                        interpolation = cv.INTER_NEAREST)
#在上涨图片的基础上，上下各贴50像素的黑边，生成300X300的图像
img_200X100 = cv.copyMakeBorder(img_100X100,50,50,0,0,cv.BORDER_CONSTANT,\
                                value = (0,0,0))#50,50,0,0是上下左右的像素值
                                                #value(r,g,b)是贴边的颜色。
#对照片中局部剪裁,对局部进行裁剪生成新的图片
patch_img = img[220:550,-180:-50]

cv.imwrite('patch_img.jpg',patch_img)
cv.imwrite('img_200X200.jpg',img_200X200)
cv.imwrite('img_100X100.jpg',img_100X100)
cv.imwrite('200X100.jpg',img_200X100)
cv.waitKey(0)

