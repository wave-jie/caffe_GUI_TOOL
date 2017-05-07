#include "caffenet.h"
#include "ui_caffenet.h"

CAFFENET::CAFFENET(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CAFFENET)
{
    ui->setupUi(this);
}

CAFFENET::~CAFFENET()
{
    delete ui;
}

void CAFFENET::on_pushButton_clicked()
{
    this->close();
}
