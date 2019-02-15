import time as t

class MyTimer():
    def __init__(self):
        self.uint = ['年','月','日','小时','分钟','秒']
        self.prompt = '未开始计时'
        self.lasted = []
        self.begin = 0
        self.end = 0
    
    def __str__(self):  #对__str__()魔法函数进行重写
        return self.prompt

    __repr__ = __str__#zai __repr__是和__str__相同

    ##对魔法函数__add__()函数进行重写，放出现加法是就直接触发
    def __add__(self,other): 
        prompt = '总共运行了'
        result = []
        for index in range[6]:
            result.append(self.lasted[index] + other.lasted[index])
            if result[index]:
                prompt += (str(result[index]) + self.uint[index])
        return prompt
    
    #开始计时
    def start(self):
        self.begin = t.localtime() #调用time中的获取时间的函数
        self.prompt = '提示：请先调用stop()停止计时！'
        print('计时开始....')

    #停止计时
    def stop(self):
        if not self.begin:
            print('提示：请先调用start()进行计时！')
        else:     
            self.end = t.localtime()
            self._calc()
            print('计时结束')

    def _calc(self):
        self.lasted = []
        self.prompt = '总共运行了'
        for index in range(6):
            self.lasted.append(self.end[index] - self.begin[index])
            if self.lasted[index]:
                self.prompt += (str(self.lasted[index]) + self.uint[index])
               
      
