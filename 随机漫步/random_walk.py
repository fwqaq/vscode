from random import choice

class RandomWalk():
    '''一个生成随机漫步数据的类'''

    def __init__(self,num_points = 5000):

        self.num_points = num_points #设置5000个点

        self.x_values = [0]
        self.y_values = [0]  #点都从0开始移动
    def fill_walk(self):

        while len(self.x_values) < self.num_points: #设置条件，如果小于5000个点循环
            x_direction = choice([-1,1])
            x_distance = choice([0,1,2,3,4])
            x_step = x_direction*x_distance #设置x移动方向和距离

            y_direction = choice([-1,1])
            y_distance = choice([0,1,2,3,4])
            y_step = y_direction*y_distance #设置y移动方向和距离

            if x_step ==0 and y_step == 0:
                continue
            next_x = self.x_values[-1] + x_step
            next_y = self.y_values[-1] + y_step #如果不是原地讲设置新的坐标点

            self.x_values.append(next_x)
            self.y_values.append(next_y)  #将新的坐标点加入到列表中
                

            
