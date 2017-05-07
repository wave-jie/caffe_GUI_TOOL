#-------------------------------------------------
#
# Project created by QtCreator 2017-04-20T16:31:50
#
#-------------------------------------------------

QT       += core gui

TARGET = caffe_GUI_TOOLS
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp \
    caffenet.cpp \
    train.cpp \
    show.cpp \
    test.cpp \
    show_test.cpp \
    cnn_visiolization.cpp

HEADERS  += mainwindow.h \
    caffenet.h \
    train.h \
    show.h \
    test.h \
    show_test.h \
    cnn_visiolization.h

FORMS    += mainwindow.ui \
    caffenet.ui \
    train.ui \
    show.ui \
    test.ui \
    show_test.ui \
    cnn_visiolization.ui
