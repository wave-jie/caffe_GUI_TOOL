#ifndef SHOW_TEST_H
#define SHOW_TEST_H

#include <QDialog>
#include<QProcess>
namespace Ui {
class SHOW_TEST;
}

class SHOW_TEST : public QDialog
{
    Q_OBJECT
    
public:
    explicit SHOW_TEST(QWidget *parent = 0);
    ~SHOW_TEST();
public:
    void show_msg(QProcess*);
    void show_result(QProcess*,QString);
private:
    Ui::SHOW_TEST *ui;
};

#endif // SHOW_TEST_H
