class Turtle:
    def __init__(self,x):
        self.num = x

class Fish:
    def __init__(self,x):
        self.num = x
    def eat(self):
        return self.num

class pool:#不同的类型
    def __init__(self,x,y):
        self.trutle = Turtle(x)
        self.fish = Fish(y)

    def print_in(self):
            print('共有%d鱼和%d乌龟数量'%(self.fish.num,self.trutle.num))
