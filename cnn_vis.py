#encoding:utf-8
import sys 
import caffe
import os
import numpy as np
import matplotlib.pyplot as plt
caffe.set_device(0)
caffe_caffemodel='/home/laotie/桌面/caffe/mycaffe/examples/cifar10/cifar10.caffemodel.h5'
caffe_model='/home/laotie/桌面/caffe/mycaffe/examples/cifar10/cifar10.prototxt'
image='/home/laotie/桌面/caffe/mycaffe/examples/cifar10/6_640.jpg'
meanfile='/home/laotie/桌面/caffe/mycaffe/examples/cifar10/mean.npy'
caffe.set_mode_gpu() 
net = caffe.Net(caffe_model,caffe_caffemodel,caffe.TEST)
transformer = caffe.io.Transformer({'data': net.blobs['data'].data.shape})
transformer.set_transpose('data', (2,0,1))
transformer.set_mean('data', np.load(meanfile).mean(1).mean(1)) 
transformer.set_raw_scale('data', 255)
transformer.set_channel_swap('data', (2,1,0)) 
net.blobs['data'].data[...] = transformer.preprocess('data', caffe.io.load_image(image))
out = net.forward()
print("Predicted class is #{}.".format(out['prob'][0].argmax()))
for layer_name, blob in net.blobs.items():
      print layer_name+ '	' + str(blob.data.shape)
def show_data(data, padsize=1, padval=0):
    # data归一化
    data -= data.min()
    data /= data.max()    
    # 根据data中图片数量data.shape[0]，计算最后输出时每行每列图片数n
    n = int(np.ceil(np.sqrt(data.shape[0])))
    # padding = ((图片个数维度的padding),(图片高的padding), (图片宽的padding), ....)
    padding = ((0, n ** 2 - data.shape[0]), (0, padsize), (0, padsize)) + ((0, 0),) * (data.ndim - 3)
    data = np.pad(data, padding, mode='constant', constant_values=(padval, padval))
    
    # 先将padding后的data分成n*n张图像
    data = data.reshape((n, n) + data.shape[1:]).transpose((0, 2, 1, 3) + tuple(range(4, data.ndim + 1)))
    # 再将（n, W, n, H）变换成(n*w, n*H)
    data = data.reshape((n * data.shape[1], n * data.shape[3]) + data.shape[4:])
    plt.figure()
    plt.imshow(data,cmap='gray')
    plt.axis('off')
for layer_name, blob in net.blobs.items():
    if layer_name[0]=='c' or layer_name[0]=='p' and layer_name!='prob':
        show_data(net.blobs[layer_name].data[0],padval=1)
        sss=layer_name+'.jpg'
        plt.savefig(sss)
