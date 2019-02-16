import urllib.request

response = urllib.request.urlopen('http://placekitten.com/g/500/600') #打开相关链接
cat_img = response.read()  #将读到的内容命名为cat_img

with open('cat_500_600.jpg','wb') as f: #打开一个cat_500_600.jpg文件
    f.write(cat_img) # 将文件
