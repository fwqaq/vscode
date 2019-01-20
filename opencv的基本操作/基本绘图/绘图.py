import cv2 
import numpy as np #导入Numpy600X400的画布，初始化为白色
canvas = np.zeros((400,600,3),dtype = np.uint8)+255

#画一条纵向的正中央的褐色分界线
cv2.line(canvas,(300,0),(300,399),(0,0,0),10)
#参数画布cancas,两点的位置(300,0)(300,399),颜色是（0,0,0）10是画的横线的宽度

#画一条右半部分画面以150位界限的横向分界线
cv2.line(canvas,(300,149),(599,149),(0,0,0),2)

#左半部分的右下角画红色的圆
cv2.circle(canvas,(200,300),75,(0,0,255),5)
#参数（200,300)是圆画的位置，75是半径的大小，（0,0,255）是颜色，5圆的宽度

#左半部分的左下角画个蓝色的矩形
cv2.rectangle(canvas,(20,240),(100,360),(255,0,0),thickness = 10)
#参数：前两个列表是位置的确定。thickness是矩形的线条宽度

#定义两个三角形，并执行内部绿色填充
triangles = np.array([
    [(200,240),(145,333),(255,333)],
    [(60,180),(20,237),(100,237)]
    ])
cv2.fillPoly(canvas,triangles,(0,255,0))
#参数第一个是画布canvas，第二个是triangles是三角形的三个顶点的列表，第三个是颜色

#画一个黄色的五角星
phi = 4*np.pi/5
rotations = [[[np.cos(i*phi),-np.sin(i*phi)],\
              [i*np.sin(phi),np.cos(i*phi)]] for i in range(1,5)]
pentagram = np.array([[[[0,-1]]+[np.dot(m,(0,-1))\
                                 for m in rotations]]],dtype = np.float)
#将五个顶点作为多边形顶点连线得到五角星
#cv2.polylines(canvas,pentagram,True,(0,255,255),9)

#在右下部分随机生成随机点，颜色随机
np.random.seed(42)
n_pts = 30 #随机点的个数
pts_x = np.random.randint(310,590,n_pts)#生成随机的坐标x值
pts_y = np.random.randint(160,390,n_pts)#生成随机的坐标的y值
pts = zip(pts_x,pts_y)#生成随机点
for pt in pts:
    pt_color = [int(c) for c in np.random.randint(0,255,3)]
    cv2.circle(canvas,pt,3,pt_color,5)


#打印左半部分最上方打印文字
cv2.putText(canvas,'打印的文字just do it',(5,15),cv2.FONT_HERSHEY_SIMPLEX,\
            1,(0,0,0),1)
#参数canvas是画布，“打印上去的文字”，位置，字体，字体的大小，颜色和字体线条的宽度

cv2.imshow('窗口名称',canvas)
