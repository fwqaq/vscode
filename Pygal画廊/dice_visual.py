'''创建两个相同骰子的随机数据的直方图'''
from die import Die
import pygal #创建直方图的第三方包

die1 = Die()
die2 = Die()

results = []
for roll_num in range(1000): #随机生成1000次随机数据
    result = die1.roll()+die2.roll()
    results.append(result)#将结果添加到results

frequencies = [] #存储每个点数的个数
for num in range(2,2*die1.num_sides+1):
    frequency = results.count(num)
    frequencies.append(frequency)  #统计每个点数的个数

hist  = pygal.Bar() #对结果进行可视化处理
hist.title = '两个骰子的加上之和的直方图'
hist.x_labels = ['2','3','4','5','6','7','8','9','10','11','12']
hist.x_title = 'Result'
hist.y_title = 'Frenquency of result'

hist.add('D6+D6',frequencies)
hist.render_to_file('dice_visual.svg')
