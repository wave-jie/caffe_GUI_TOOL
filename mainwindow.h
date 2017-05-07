#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"caffenet.h"
#include <QMainWindow>
#include<QString>
#include"train.h"
#include"test.h"
#include"cnn_visiolization.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_train_btn_clicked();


    void on_pushButton_clicked();

public slots:
    void showwindow();
private:
    Ui::MainWindow *ui;
    TEST test_cnn;
    CAFFENET caffenet_cnn;
    TRAIN train_model;

};

#endif // MAINWINDOW_H
