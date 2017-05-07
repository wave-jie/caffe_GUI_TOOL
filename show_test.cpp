#include "show_test.h"
#include "ui_show_test.h"
#include<QString>
#include<QProcess>
#include<QPixmap>
#include<QFile>
#include<QString>
#include<QTextStream>
#include<iostream>
using namespace std;
SHOW_TEST::SHOW_TEST(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SHOW_TEST)
{
    ui->setupUi(this);
}

SHOW_TEST::~SHOW_TEST()
{
    delete ui;
}
void SHOW_TEST::show_msg(QProcess* qp){
    QString str = qp->readAllStandardError();
    ui->textBrowser->append(str);
}
void SHOW_TEST::show_result(QProcess* qp,QString s){
   // QString str = qp->readAllStandardOutput();
    QString str = qp->readLine();
    QPixmap q(s);
    q.scaled(ui->label_2->width(),ui->label_2->height(),Qt::IgnoreAspectRatio);
    ui->label_2->setPixmap(q);
    ui->label->setText(str);



    QFile f("layer.txt");
    if(!f.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        cout << "Open failed." << endl;
    }
    QTextStream txtOutput(&f);
    QString s0 = qp->readAllStandardOutput();
    txtOutput << s0 << endl;

    f.close();

}
