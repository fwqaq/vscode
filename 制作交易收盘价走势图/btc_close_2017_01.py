#对json格式数据进行读取
import json

filename = 'btc_close_2017_urllib.json'
with open(filename) as f:
    btc_data = json.load(f)
for btc_rect in btc_data:
    date = btc_rect['date']
    month = btc_rect['month']
    week = btc_rect['week']
    weekday = btc_rect['weekday']
    close = btc_rect['close']
    print(date,month,week,weekday,close)
