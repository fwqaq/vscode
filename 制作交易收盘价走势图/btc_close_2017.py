'''from __future__ import (absolute_import,division,print_function,unicode_literals)

try:
    from urllib2 import urlopen #python2下载模块
except ImportError:
    from urllib.request import urlopen#python3下载模块
    #导入下载文件的模块,

import json #导入json模块对JSON格式数据进行处理

json_url = 'https://raw.githubusercontent.com/muxuezi/btc/master/btc_close_2017.json' #下载网址
response = urlopen(json_url)  #调用urlopen（）函数将网址传入，返回一个文件
req = response.read() #对文件进行读取

with open ('btc_close_2017_urllib.json','wb') as f:
    f.write(req) #将文件写入到btc_close_2018_urllib.json中去

file_urllib = json.loads(req)#将文件变成python能处理的文件
print(file_urllib)'''
import requests

json_url = 'https://raw.githubusercontent.com/muxuezi/btc/master/btc_close_2017.json' #下载网址

req = requests.get(json_url)

with open ('btc_close_2017_urllib.json','w') as f:
    f.write(req.text) #将文件写入到btc_close_2018_urllib.json中去
file_requests = req.json()
print(file_requests)
