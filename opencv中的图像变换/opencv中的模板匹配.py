import cv2 as cv
import numpy as np
from matplotlib import pyplot as plt
img = cv.imread('1.jpg',0)
template = cv.imread('1_face.jpg',0)
w,h = template.shape[::-1] #全部图像分量
methods = ['cv.TM_CCOEFF','cv.TM_CCOEFF_NORMED','cv.TM_CCORR','cv.TM_CCORR_NORMED',\
           'cv.TM_SQDIFF','cv.TM_SQDIFF_NORMED']
#六种比较方法
#1、cv.TM_SQDIFF:使用平方差进行匹配，因此最佳结果是0处，值越大匹配越差
#2、cv.TM_SQDIFF_NORMED:使用归一化的平方差，最佳匹配结果也在0处
#3、cv.TM_CCORR：相关性匹配。值越大效果越好
#4、cv.TM_CCORR_NORMED:归一化的相关性匹配方法，值最大处效果最佳
#5、cv.TM_CCOEFF:相关性系数匹配方法，最佳结果在1处
#6、cv.TM_CCOEFF_NORMED:归一化相关性系数匹配方法，正值表示匹配的结果较好，负值效果差。值越大越好
for meth in methods:
    #exec 语句用来执行储存在字符串或文件中的 Python 语句。
    # 例如，我们可以在运行时生成一个包含 Python 代码的字符串，然后使用 exec 语句执行这些语句。
    #eval 语句用来计算存储在字符串中的有效 Python 表达式
    method = eval(meth) #相当于直接使用cv.TM_CCOEFF等代码
    # Apply template Matching
    res = cv.matchTemplate(img,template,method)
    min_val, max_val, min_loc, max_loc = cv.minMaxLoc(res)
# 使用不同的比较方法，对结果的解释不同
# If the method is TM_SQDIFF or TM_SQDIFF_NORMED, take minimum
    if method in [cv.TM_SQDIFF, cv.TM_SQDIFF_NORMED]:
        top_left = min_loc
    else:
        top_left = max_loc
    bottom_right = (top_left[0] + w, top_left[1] + h)
    cv.rectangle(img,top_left, bottom_right, 255, 2)
    plt.subplot(121),plt.imshow(res,cmap = 'gray')
    plt.title('Matching Result'), plt.xticks([]), plt.yticks([])
    plt.subplot(122),plt.imshow(img,cmap = 'gray')
    plt.title('Detected Point'), plt.xticks([]), plt.yticks([])
    plt.suptitle(meth)
    plt.show()
