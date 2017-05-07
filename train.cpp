#include "train.h"
#include "ui_train.h"
#include "mainwindow.h"
#include "ui_mnist.h"
#include "ui_mainwindow.h"
#include"show.h"
#include<QFileDialog>
#include<QProcess>
#include<iostream>
#include<QDialog>
#include<QMessageBox>
#include<QTextStream>
using namespace std;
TRAIN::TRAIN(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TRAIN)
{
    ui->setupUi(this);
}

TRAIN::~TRAIN()
{
    delete ui;
}

void TRAIN::show_msg(){
        train_show.show_information(myprocess);
}

void TRAIN::on_model_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), ".", tr("Model Files( *.prototxt )"));
  // QString fileName=QFileDialog::getOpenFileName(this,"图片","","打开图片(*jpg*png*ico)");//打开文件对话框，上一篇讲过。
   //QPixmap qp(fileName);//使用QPixmap打开图片
 //  qp.width() = ui->label->width();
 //  qp.height() = ui->label->height();
 //  ui->label->resize(qp.width(),qp.height());//让label大小契合图片实际大小
    ui->lineEdit->setText(fileName);//在label里显示图片。

}

void TRAIN::on_model_toggled(bool checked)
{

}
void TRAIN::writefile() {
    QFile f("train.py");
    if(!f.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        cout << "Open failed." << endl;
    }
    QString s(ui->lineEdit->text());
    QTextStream txtOutput(&f);
    QString s0("#encoding:utf-8");
    QString s1("import sys ");
    QString s2("import caffe");
    QString s3("import os");
    QString s4("caffe.set_device(0)");
    QString s5("caffe.set_mode_gpu()");
    QString s6("solver = caffe.SGDSolver('"+s+"')");
    QString s7("solver.solve()");
    txtOutput << s0 << endl;
    txtOutput << s1 << endl;
    txtOutput << s2 << endl;
    txtOutput << s3 << endl;
    txtOutput << s4 << endl;
    txtOutput << s5 << endl;
    txtOutput << s6 << endl;
    txtOutput << s7 << endl;
    f.close();

}


void TRAIN::on_pushButton_2_clicked()
{
        if(ui->lineEdit->text().size()==0)
        {
        QMessageBox::information(NULL, "Title", "please load model.prototxt", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
        }
        else
        {
        writefile();
        QString cmd = "python train.py" ;
        QStringList args;
        args.append("train.py");
        myprocess  = new QProcess;
 //       myprocess->setStandardOutputFile("result.txt");

  //      QProcess::execute("python train.py");
        connect(myprocess,SIGNAL(readyReadStandardError()),this,SLOT(show_msg()));
      //  connect(myprocess, SIGNAL(finished(int, QProcess::ExitStatus)), this, SLOT(onFinished(int, QProcess::ExitStatus)));
   //     myprocess->execute(cmd);

        train_show.show();
        this->hide();
        myprocess->start(cmd,QProcess::ReadWrite);

     //   myprocess->waitForFinished();
   //     QString str = myprocess->readAllStandardOutput();
 //       ui->show->setText(str);
    //   QString str = myprocess->readAllStandardError();
  //     ui->show->setText(str);
  //      myprocess->startDetached("python train.py");
//        myprocess->waitForFinished();
        }
}
