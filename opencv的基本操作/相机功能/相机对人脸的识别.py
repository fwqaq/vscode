import time
import cv2 as cv
import os
import sys
#导入模块

#interval = 1#捕获图像的间隔，单位：秒
num_frames = 1000 #捕获图像的总帧数。
out_fps = 24 #输出文件的帧率
color = (0,255,0) #识别出人脸后要画出的边框的颜色。RGB格式
num = 0#统计人脸的数量

#VideoCapture(0)表示默认打开相机
cap = cv.VideoCapture(0) #0是计算机自带的，可以外接其他摄像头：参数变为1

#获取捕获的分辨率
size = (int(cap.get(cv.CAP_PROP_FRAME_WIDTH)),\
        int(cap.get(cv.CAP_PROP_FRAME_HEIGHT)))
print('分辨率=',size)
#运用cv2中的CAP_PROP_FRAME_WIDTH,CAP_PROP_FRAME_HEIGHT来获取并且强制转换

#设置要保存视频的编码，分辨率和帧率
video = cv.VideoWriter('img/save.avi',cv.VideoWriter_fourcc('M','p','4','2'),\
                       out_fps,size)
#高速opencv使用人脸识别分类器
classfier = cv.CascadeClassifier('C:\Program Files\Python36\Lib\site-packages\cv2\data/haarcascade_frontalface_alt2.xml')

print(video)
#参数（保存的文件名，保存视频的编码，size视频的分辨率，帧out_fps率）

#对于一些低画质的摄像头，前面的帧可能不稳定，略过。
for i in range(42):
    cap.read() #忽略掉开始的帧

while cap.isOpened():
    _, frame = cap.read()#返回两个参数，第一个是True和False表示是否读到了
        #第二个参数是截取到的一帧的图片
    if _:
        grey = cv.cvtColor(frame,cv.COLOR_BGR2GRAY)
        faceRects = classfier.detectMultiScale(grey,scaleFactor = 1.2,minNeighbors = 3,minSize = (32,32))
        if len(faceRects)>0:
            for faceRect in faceRects:
                x,y,w,h = faceRect
                cv.rectangle(frame,(x-10,y-10),(x+w+10,y+h+10),color,2)
            i+=1
            cv.imshow('frame',frame)
            video.write(frame)
        if cv.waitKey(1)&0xFF==ord('q'):
            break
print(i)   
video.release() #释放保存的视频占用的空间   
cap.release() #释放掉相机
cv.destroyAllWindows()
'''
frame_path = 'img'#存放视频截图的文件夹路劲
#第二个输入参数是设定每个多少帧取一帧
frame_interval = 1

if not os.path.exists(frame_path):
    os.mkdir(frame_path)
#初始化一个VideoCapture对象
cap = cv.VideoCapture()
filepath = 'img/save.avi'

cap.open(filepath)#VideoCapture::open函数可以从文件获取视频,并且对视频记性操作

#获取视频帧数
n_frames = int(cap.get(cv.CAP_PROP_FRAME_COUNT))
print(n_frames)

for i in range(2):
    cap.read()

#读取后面的帧数据
for i in range(2,n_frames): 
    ret,frame = cap.read()
    if i % frame_interval == 0:
        imagepath = frame_path+'/video_test' + str(i)+'.jpg' #保存一帧的名称
        print('导出 {}！'.format(imagepath))
        cv.imwrite(imagepath,frame)

cap.release()
'''

















    
