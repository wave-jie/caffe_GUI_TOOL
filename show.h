#ifndef SHOW_H
#define SHOW_H

#include <QWidget>
#include<QProcess>
#include<QCloseEvent>
namespace Ui {
class SHOW;
}

class SHOW : public QWidget
{
    Q_OBJECT
    
public:
    explicit SHOW(QWidget *parent = 0);
    ~SHOW();
    
public:
    Ui::SHOW *ui;
public slots:
    void show_information(QProcess* qp);
public :
    QProcess* passProcess = new QProcess;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
protected:
    void closeEvent(QCloseEvent *event);
};

#endif // SHOW_H
