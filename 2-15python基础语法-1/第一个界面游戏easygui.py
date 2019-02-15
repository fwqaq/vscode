import easygui as g
import sys


while 1:
    g.msgbox("欢迎进入第一个界面小游戏")#显示一个对话框

    msg = '请问你希望学习到什么知识呢？'
    title = '小游戏互动'
    choices = ['谈恋爱','打游戏','游泳','编程']
    choice = g.choicebox(msg,title,choices)
    g.msgbox('您的选择是'+str(choice)+'结果')

    msg = '你希望继续小游戏吗'
    title = '请选择'

    if g.ccbox(msg,title):

        pass
    else:
        sys.exit(0)
