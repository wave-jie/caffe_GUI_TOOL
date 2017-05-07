#ifndef CNN_VISIOLIZATION_H
#define CNN_VISIOLIZATION_H

#include <QWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QLineEdit>
#include <QLayout>
#include <QLabel>
#include <QComboBox>
#include <QMessageBox>
#include <QDialog>
namespace Ui {
class CNN_VISIOLIZATION;
}

class CNN_VISIOLIZATION : public QWidget
{
    Q_OBJECT
    
public:
    explicit CNN_VISIOLIZATION(QWidget *parent = 0);
    ~CNN_VISIOLIZATION();
    
private:
    Ui::CNN_VISIOLIZATION *ui;
public slots:
    void show_image(QString);
};

#endif // CNN_VISIOLIZATION_H
