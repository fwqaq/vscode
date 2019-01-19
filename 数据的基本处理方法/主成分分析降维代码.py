import pandas as pd

inputfile = 'F:/python数据分析代码/第四章/principal_component.xls'#打开文件名称
outfile = 'F:/python数据分析代码/第四章/dimention_reducted.xls'#输出文件的名称

data = pd.read_excel(inputfile,header = None) #数据的读取

from sklearn.decomposition import PCA #导入PCA算法的模块

pca = PCA()
pca.fit(data)
pca.components_ #返回模型的各个特征向量
pca.explained_variance_ratio_ #范湖各个成分各自的方差百分比
print(pca.components_)
print(pca.explained_variance_ratio_)
 
