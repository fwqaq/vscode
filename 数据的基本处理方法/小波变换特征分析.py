
inputfile = 'F:/python数据分析代码/第四章/leleccum.mat'

from scipy.io import loadmat
mat = loadmat(inputfile)
signal = mat['leleccum'][0]

import pywt
coeffs = pywt.wavedec(signal,'bior3.7',level = 5)




