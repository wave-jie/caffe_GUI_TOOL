#include "cnn_visiolization.h"
#include "ui_cnn_visiolization.h"
#include<iostream>
#include<QFile>
#include<QTextStream>
#include<QPixmap>
using namespace std;
void CNN_VISIOLIZATION::show_image(QString s){
    QString s1 = ui->comboBox->currentText();
    QString s2 = s1.left(4);
    if(s2=="conv"||s2=="pool"||s2=="norm")
    {
        QString s3 = s1.left(5)+".jpg";
        QPixmap q(s3);

        ui->label->setPixmap(q);
    }
}

CNN_VISIOLIZATION::CNN_VISIOLIZATION(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CNN_VISIOLIZATION)
{
    ui->setupUi(this);
    QFile f1("layer.txt");
    if(!f1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        cout << "Open failed." << endl;
    }
    QTextStream txtInput(&f1);
    txtInput.readLine();
    while(!txtInput.atEnd())
    {
     QString line = txtInput.readLine();

     ui->comboBox->addItem(line);
    }
    connect(ui->comboBox,SIGNAL(currentIndexChanged(QString)),this,SLOT(show_image(QString )));
}

CNN_VISIOLIZATION::~CNN_VISIOLIZATION()
{
    delete ui;
}
