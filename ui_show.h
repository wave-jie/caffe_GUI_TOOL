/********************************************************************************
** Form generated from reading UI file 'show.ui'
**
** Created: Fri May 5 16:24:05 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_H
#define UI_SHOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SHOW
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *SHOW)
    {
        if (SHOW->objectName().isEmpty())
            SHOW->setObjectName(QString::fromUtf8("SHOW"));
        SHOW->resize(600, 474);
        textBrowser = new QTextBrowser(SHOW);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(true);
        textBrowser->setGeometry(QRect(10, 10, 581, 411));
        pushButton = new QPushButton(SHOW);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 430, 85, 27));
        pushButton_2 = new QPushButton(SHOW);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);
        pushButton_2->setGeometry(QRect(300, 430, 85, 27));

        retranslateUi(SHOW);

        QMetaObject::connectSlotsByName(SHOW);
    } // setupUi

    void retranslateUi(QWidget *SHOW)
    {
        SHOW->setWindowTitle(QApplication::translate("SHOW", "Form", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("SHOW", "\345\201\234\346\255\242\350\256\255\347\273\203", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("SHOW", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SHOW: public Ui_SHOW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_H
