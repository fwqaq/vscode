class rongqi:
    def __init__(self,*args):
        #初始化将数据用列表进行存储
        self.values = [x for x in args]

        #设置一个字典，来存储访问的次数
        self.count = {}.fromkeys(range(len(self.values)),0)

    def __len__(self):
        #饭回初始化中列表的长度
        return len(self.values)

    def __getitem__(self,key):
        #对访问的次数进行+1
        self.count[key] += 1
        return self.values[key]
