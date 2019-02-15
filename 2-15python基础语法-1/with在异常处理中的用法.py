try:
    with open('我是第二个文件.txt','w') as f:
        for each_line in f:
            print(each_line)
except OSError as reason:
    print('出错了：'+str(reason))
