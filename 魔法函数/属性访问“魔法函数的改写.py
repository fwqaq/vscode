class Rectangle:
    def __init__(self,width = 0,height = 0):
        self.width = width
        self.height = height


    def __setattr__(self,name,value): #赋值操作触发
        if name == 'square':
            self.width = value
            self.height = value
        else:
            super().__setattr__(name,value) #此步骤防止操作无线递归死循环
            
    def getArea(self):
        return self.width*self.height
    

    
