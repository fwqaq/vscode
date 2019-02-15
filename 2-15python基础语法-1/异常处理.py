try:
    f = open('我是一个文件.txt')
    print(f.read())
    f.close()
except OSError as reason:
    print('文件出错了'+str(reason))
