import urllib.request
import urllib.parse                                                                                                                                    

url = 'http://fanyi.youdao.com/translate?smartresult=dict&smartresult=rule&smartresult-sgc&sessionFrom=http://www.youdao.com/'

data = {}
data['type'] = 'AUTO'
data['i'] = 'I love you'
data['doctype'] = 'json'
data['xmlVersion'] = '1.6'
data['keyfrom'] = 'fanyi.web'
data['ue'] = 'UTF-8'
data = urllib.parse.urlencode(data).encode('utf-8')

response = urllib.request.urlopen(url,data)

html = response.read().decode('utf-8')

print(html)
