import cv2 as cv
img = cv.imread('1.jpg')

#通过cv2.cvtColor吧图像从bgr转换为HSV
img_hsv = cv.cvtColor(img,cv.COLOR_BGR2HSV)

#在H空间中，绿色比黄色的值高一点，所以给每个像素+15，黄色的树叶就会变绿
turn_green_hsv = img_hsv.copy()
turn_green_hsv[:,:,0] = (turn_green_hsv[:,:,0]+15)%180#[:,:,0]是色调
turn_green_img = cv.cvtColor(turn_green_hsv,cv.COLOR_HSV2BGR)#图像从HSV转换为bgr
cv.imwrite('turn_green.jpg',turn_green_img)

#减小饱和度会让预想损失鲜艳，变得更灰
#hsv[色调，饱和度，明度]
colorless_hsv = img_hsv.copy()
colorless_hsv[:,:,1] = 0.5*colorless_hsv[:,:,1]#hsv[:,:,1是饱和度]
colorless_img = cv.cvtColor(colorless_hsv,cv.COLOR_HSV2BGR)
cv.imwrite('colorless.jpg',colorless_img)

#减小透明度为原来的一般
darker_hsv = img_hsv.copy()
darker_hsv[:,:,2] = 0.5*darker_hsv[:,:,2]#hsv[:,:,2]是明度
darker_img = cv.cvtColor(darker_hsv,cv.COLOR_HSV2BGR)
cv.imwrite('darker.jpg',darker_img)
