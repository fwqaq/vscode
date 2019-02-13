temp = int(input('请输入月的个数：'))
def fblq(i):
    if(i<=2):
        return 1
    else:
        return fblq(i-1)+fblq(i-2)
print(fblq(temp))
