#ifndef CAFFENET_H
#define CAFFENET_H

#include <QWidget>

namespace Ui {
class CAFFENET;
}

class CAFFENET : public QWidget
{
    Q_OBJECT
    
public:
    explicit CAFFENET(QWidget *parent = 0);
    ~CAFFENET();
    
private slots:
    void on_pushButton_clicked();

private:
    Ui::CAFFENET *ui;
};

#endif // CAFFENET_H
