temp = int(input('请输入一个数字：'))
def factorail(n):
    if(n==1):
        return 1
    else:
        return n*factorail(n-1)
print(factorail(temp))
