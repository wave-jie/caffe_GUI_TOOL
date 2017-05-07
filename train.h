#ifndef TRAIN_H
#define TRAIN_H
#include<QProcess>
#include <QDialog>
#include<QString>
#include"show.h"
namespace Ui {
class TRAIN;
}

class TRAIN : public QDialog
{
    Q_OBJECT
    
public:
    explicit TRAIN(QWidget *parent = 0);
    ~TRAIN();

signals:

    void GetUdpLogMsg(QString msg);//不需要实现
private slots:
    void on_model_toggled(bool checked);
    void show_msg();
    void on_model_clicked();

    void on_pushButton_2_clicked();
public slots:
    void writefile();
public:
    Ui::TRAIN *ui;
    QProcess *myprocess ;
public:
       SHOW  train_show;

};

#endif // TRAIN_H
