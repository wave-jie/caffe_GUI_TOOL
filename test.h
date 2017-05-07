#ifndef TEST_H
#define TEST_H

#include <QWidget>
#include<QProcess>
#include<show_test.h>
#include"cnn_visiolization.h"
namespace Ui {
class TEST;
}

class TEST : public QWidget
{
    Q_OBJECT
    
public:
    explicit TEST(QWidget *parent = 0);
    ~TEST();
    
private slots:


    void on_modelfile_clicked();

    void on_modeldeploy_clicked();

    void on_image_clicked();

    void on_meanfile_clicked();
    void on_load_clicked();

    void on_close_clicked();

    void on_teststart_clicked();

    void on_pushButton_clicked();

public:
    void upload();
    void appendfile(QString);
    void init_test();
    void finish_test();
    QProcess *myprocess;
public slots:
    void show_msg();
    void show_result();
private:
    Ui::TEST *ui;
    SHOW_TEST st;
    CNN_VISIOLIZATION cv;
};

#endif // TEST_H
