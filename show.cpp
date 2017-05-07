#include "show.h"
#include "ui_show.h"
#include"train.h"
#include<QProcess>
#include<QString>
#include<QMessageBox>
#include<QEvent>
#include<QCloseEvent>
#include<string>
using namespace std;
SHOW::SHOW(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SHOW)
{
    ui->setupUi(this);
}

SHOW::~SHOW()
{
    delete ui;
}
void SHOW::closeEvent(QCloseEvent * event){
    if(passProcess->state()==QProcess::NotRunning)
    {
     event->accept();
    }
    else
    {
        QMessageBox::StandardButton button;
        button = QMessageBox::question(this, tr("退出程序"),
                QString(tr("警告：程序有一个任务正在运行中，是否结束操作退出?")),
                QMessageBox::Yes | QMessageBox::No);

            if (button == QMessageBox::No) {
                event->ignore();  //忽略退出信号，程序继续运行
            }
            else if (button == QMessageBox::Yes) {
                passProcess->close();
                event->accept();  //接受退出信号，程序退出
            }
    }

}
void SHOW::show_information(QProcess* qp){
 //QString str =  TRAIN::qp->readAllStandardError();
// ui->textBrowser->setText(str);
    QString str = qp->readAllStandardError();
 //   ui->textBrowser->setText(str);
   ui->textBrowser->append(str);
    passProcess = qp;
}

void SHOW::on_pushButton_clicked()
{
    passProcess ->close();
    ui->pushButton_2->setEnabled(true);
}

void SHOW::on_pushButton_2_clicked()
{
    this->close();
}
