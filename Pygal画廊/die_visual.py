'''创建一个骰子形成直方图'''
from die import Die
import pygal #创建直方图的第三方包

die = Die()

results = []
for roll_num in range(1000): #随机生成1000次随机数据
    result = die.roll()
    results.append(result)#将结果添加到results

frequencies = [] #存储每个点数的个数
for num in range(1,die.num_sides+1):
    frequency = results.count(num)
    frequencies.append(frequency)  #统计每个点数的个数

hist  = pygal.Bar() #对结果进行可视化处理
hist.title = 'mei ge shu zi de ge shu'
hist.x_labels = ['1','2','3','4','5','6']
hist.x_title = 'Result'
hist.y_title = 'Frenquency of result'

hist.add('D6',frequencies)
hist.render_to_file('die_visual.svg')
