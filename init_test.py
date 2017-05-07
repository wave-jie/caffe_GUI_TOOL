#coding=utf-8 
#设置python环境,numpy是python的科学计算包
import numpy as np
import matplotlib.pyplot as plt
%matplotlib inline
#设置展示设置
plt.rcParams['figure.figsize'] = (10, 10) #图片大小
plt.rcParams['image.interpolation'] = 'nearest'#像素插入方法
plt.rcParams['image.cmap'] = 'gray' #使用灰度图输出