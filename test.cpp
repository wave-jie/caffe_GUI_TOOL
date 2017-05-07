#include "test.h"
#include "ui_test.h"
#include<QFileDialog>
#include<QFile>
#include<QString>
#include<QMessageBox>
#include<QTextStream>
#include<iostream>
#include<QProcess>
using namespace std;
TEST::TEST(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TEST)
{
    ui->setupUi(this);
}

TEST::~TEST()
{
    delete ui;
}


void TEST::on_modelfile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Model Files( *.caffemodel *.caffemodel.h5)"));
  // QString fileName=QFileDialog::getOpenFileName(this,"图片","","打开图片(*jpg*png*ico)");//打开文件对话框，上一篇讲过。
   //QPixmap qp(fileName);//使用QPixmap打开图片
 //  qp.width() = ui->label->width();
 //  qp.height() = ui->label->height();
 //  ui->label->resize(qp.width(),qp.height());//让label大小契合图片实际大小
   ui->modelfile_lineEdit->setText(fileName);

}

void TEST::on_modeldeploy_clicked()
{
     QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Model Deploy( *.prototxt)"));
     ui->model_lineEdit_2->setText(fileName);
}

void TEST::on_image_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Image Files( *.jpg *.bmp)"));
    ui->image_lineEdit_3->setText(fileName);
}

void TEST::on_meanfile_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Mean Files( *.npy)"));
  //  ui->image_lineEdit_3->setText(fileName);
    QString str = fileName.right(3);
   /* if(str!="npy")
    {
      QMessageBox::information(NULL, "Title", "please load model.prototxt", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    else
    {*/
    ui->meanfile_lineEdit_4->setText(fileName);
}

void TEST::init_test(){
    QFile f("test.py");
    if(!f.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        cout << "Open failed." << endl;
    }
    QTextStream txtOutput(&f);
    QString s0("#encoding:utf-8");
    QString s1("import sys ");
    QString s2("import caffe");
    QString s3("import os");
    QString s4("import numpy as np");
    QString s5("import matplotlib.pyplot as plt");
    QString s6("caffe.set_device(0)");
    txtOutput << s0 << endl;
    txtOutput << s1 << endl;
    txtOutput << s2 << endl;
    txtOutput << s3 << endl;
    txtOutput << s4 << endl;
    txtOutput << s5 << endl;
    txtOutput << s6 << endl;
}
void TEST::appendfile(QString s)
{
    QFile f("test.py");
    if(!f.open(QIODevice::Append | QIODevice::Text))
    {
        cout << "Open failed." << endl;
    }
    QTextStream txtOutput(&f);
     txtOutput << s << endl;
}
void TEST::finish_test(){
    QFile f("test.py");
    if(!f.open(QIODevice::Append | QIODevice::Text))
    {
        cout << "Open failed." << endl;
    }
    QTextStream txtOutput(&f);
    // txtOutput << s << endl;
    QFile f1("test.txt");
    if(!f1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        cout << "Open failed." << endl;
    }

    QTextStream txtInput(&f1);
    QString lineStr;
    while(!txtInput.atEnd())
    {
        lineStr = txtInput.readLine();
        txtOutput << lineStr << endl;
    }
    QString s1="for layer_name, blob in net.blobs.items():";
    QString s2="      print layer_name+ '\t' + str(blob.data.shape)";
      txtOutput << s1 << endl;
       txtOutput << s2 << endl;
    f1.close();
    f.close();
}
void TEST::upload(){
    init_test();
    if(ui->modelfile_lineEdit->text()=="")
    {
         QMessageBox::information(NULL, "Title", "请添加已经训练好的模型文件", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    else
    {
    QString s = ui->modelfile_lineEdit->text();
    QString str = "caffe_caffemodel='"+s+"'";
    appendfile(str);
    }
    if(ui->model_lineEdit_2->text()=="")
    {
         QMessageBox::information(NULL, "Title", "请添加模型描述文件", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    else
    {
    QString s = ui->model_lineEdit_2->text();
    QString str = "caffe_model='"+s+"'";
    appendfile(str);
    }
    if(ui->image_lineEdit_3->text()=="")
    {
         QMessageBox::information(NULL, "Title", "请添加测试图片", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    else
    {
    QString s =ui->image_lineEdit_3->text();
    QString str = "image='"+s+"'";
    appendfile(str);
    }
    if(ui->meanfile_lineEdit_4->text()=="")
    {
         QMessageBox::information(NULL, "Title", "请添加中值文件", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    else
    {
        QString s =ui->meanfile_lineEdit_4->text();
        QString str = "meanfile='"+s+"'";
        appendfile(str);
    }
    if(ui->gpu->isChecked())
    {
        QString s ="caffe.set_mode_gpu() ";
        appendfile(s);
    }
    else if(ui->cpu->isChecked())
    {
        QString s ="caffe.set_mode_cpu() ";
        appendfile(s);
    }
    else
    {
     QMessageBox::information(NULL, "Title", "请选择测试模式", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    }
    finish_test();
}

void TEST::on_load_clicked()
{
    upload();
    ui->teststart->setEnabled(true);
}

void TEST::on_close_clicked()
{
    this->close();
}
void TEST::show_msg(){
    st.show_msg(myprocess);
}
void TEST::show_result(){
    st.show_result(myprocess,ui->image_lineEdit_3->text());
}
void TEST::on_teststart_clicked()
{
    QString cmd = "python test.py";
    myprocess = new QProcess;
    connect(myprocess,SIGNAL(readyReadStandardError()),this,SLOT(show_msg()));
    connect(myprocess,SIGNAL(readyReadStandardOutput()),this,SLOT(show_result()));
    st.show();
    myprocess->start(cmd,QProcess::ReadWrite);
}

void TEST::on_pushButton_clicked()
{
//   QProcess* cnn=new QProcess;
   QProcess::execute("cp -f  test.py ./cnn_vis.py");
   QFile f("cnn_vis.py");
   if(!f.open(QIODevice::Append | QIODevice::Text))
   {
       cout << "Open failed." << endl;
   }
   QTextStream txtOutput(&f);
   // txtOutput << s << endl;
   QFile f1("cnn_vis.txt");
   if(!f1.open(QIODevice::ReadOnly | QIODevice::Text))
   {
       cout << "Open failed." << endl;
   }

   QTextStream txtInput(&f1);
   QString lineStr;
   while(!txtInput.atEnd())
   {
       lineStr = txtInput.readLine();
       txtOutput << lineStr << endl;
   }

   f1.close();
   f.close();
    QProcess::execute("python cnn_vis.py");
    cv.show();
}
