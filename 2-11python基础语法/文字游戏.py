import random
shuzi = random.randint(1,10)
temp = input("猜数字:")
guess = int(temp)
if guess == shuzi:
    print("恭喜您，猜对了")
else:
    print("猜错了，请重新猜")
while shuzi!=guess:
    temp = input("猜数字")
    guess = int(temp)
    if guess == shuzi:
        print("恭喜您，猜对了")
    else:
        if guess > shuzi:
            print("大了大了~~~")
        else :
            print("小了小了~~~")
        print("猜错了，请您重新输入:")
print("游戏结束")
