/********************************************************************************
** Form generated from reading UI file 'caffenet.ui'
**
** Created: Fri May 5 16:24:05 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAFFENET_H
#define UI_CAFFENET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CAFFENET
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *CAFFENET)
    {
        if (CAFFENET->objectName().isEmpty())
            CAFFENET->setObjectName(QString::fromUtf8("CAFFENET"));
        CAFFENET->resize(760, 487);
        pushButton = new QPushButton(CAFFENET);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(310, 410, 121, 51));
        label = new QLabel(CAFFENET);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 20, 91, 31));

        retranslateUi(CAFFENET);

        QMetaObject::connectSlotsByName(CAFFENET);
    } // setupUi

    void retranslateUi(QWidget *CAFFENET)
    {
        CAFFENET->setWindowTitle(QApplication::translate("CAFFENET", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("CAFFENET", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CAFFENET", "\350\277\231\346\230\257caffenet", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CAFFENET: public Ui_CAFFENET {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAFFENET_H
