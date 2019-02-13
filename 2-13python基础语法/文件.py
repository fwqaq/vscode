f = open('E:\\aa.txt')

boy = []
gril = []
num = 1

for each_line in f:
    if each_line[:6] != '======':
        (role,speaksre) = each_line.split(':',1)
        if(role == '小甲鱼'):
            boy.append(speaksre)
        if(role == '小客服'):
            gril.append(speaksre)
    else:
        file_name_boy = 'boy_'+str(num)+'.txt'
        file_name_gril = 'gril_'+str(num)+'.txt'

        boy_file = open(file_name_boy,'w')
        gril_file = open(file_name_gril,'w')

        
        boy_file.writelines(boy)
        gril_file.writelines(gril)
        

        boy_file.close();
        gril_file.close();
        
        boy=[]
        gril=[]
        num +=1;
f.close();
