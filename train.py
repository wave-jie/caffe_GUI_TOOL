#encoding:utf-8
import sys 
import caffe
import os
caffe.set_device(0)
caffe.set_mode_gpu()
solver = caffe.SGDSolver('/home/laotie/桌面/caffe/mycaffe/examples/mnist/lenet_solver.prototxt')
solver.solve()
