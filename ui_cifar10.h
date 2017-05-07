/********************************************************************************
** Form generated from reading UI file 'cifar10.ui'
**
** Created: Thu May 4 20:19:55 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIFAR10_H
#define UI_CIFAR10_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CIFAR10
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CIFAR10)
    {
        if (CIFAR10->objectName().isEmpty())
            CIFAR10->setObjectName(QString::fromUtf8("CIFAR10"));
        CIFAR10->resize(400, 300);
        label = new QLabel(CIFAR10);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 60, 71, 31));
        pushButton = new QPushButton(CIFAR10);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 160, 121, 51));
        pushButton_2 = new QPushButton(CIFAR10);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 120, 85, 27));

        retranslateUi(CIFAR10);

        QMetaObject::connectSlotsByName(CIFAR10);
    } // setupUi

    void retranslateUi(QWidget *CIFAR10)
    {
        CIFAR10->setWindowTitle(QApplication::translate("CIFAR10", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CIFAR10", "\350\277\231\346\230\257cifar10", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CIFAR10", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("CIFAR10", "PushButton", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CIFAR10: public Ui_CIFAR10 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIFAR10_H
