import easygui as g
import sys

if g.ccbox('亲爱的还玩吗？',choices=('还要玩','算了吧')):
    g.msgbox('还是不玩了，快睡觉吧！')

else:
    sys.exit(0)
