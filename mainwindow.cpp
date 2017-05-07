#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow:: showwindow()
{
    this->show();
}



void MainWindow::on_pushButton_2_clicked()
{

}

void MainWindow::on_pushButton_3_clicked()
{
    caffenet_cnn.show();
}

void MainWindow::on_train_btn_clicked()
{
      train_model.show();
}



void MainWindow::on_pushButton_clicked()
{
    test_cnn.show();
}
