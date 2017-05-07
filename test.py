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
