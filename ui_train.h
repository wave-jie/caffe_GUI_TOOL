/********************************************************************************
** Form generated from reading UI file 'train.ui'
**
** Created: Fri May 5 16:24:05 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAIN_H
#define UI_TRAIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_TRAIN
{
public:
    QLabel *label;
    QPushButton *model;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_2;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *TRAIN)
    {
        if (TRAIN->objectName().isEmpty())
            TRAIN->setObjectName(QString::fromUtf8("TRAIN"));
        TRAIN->resize(685, 431);
        label = new QLabel(TRAIN);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 20, 141, 31));
        model = new QPushButton(TRAIN);
        model->setObjectName(QString::fromUtf8("model"));
        model->setGeometry(QRect(40, 120, 121, 51));
        lineEdit = new QLineEdit(TRAIN);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        lineEdit->setGeometry(QRect(200, 120, 451, 51));
        pushButton = new QPushButton(TRAIN);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 320, 85, 27));
        pushButton_2 = new QPushButton(TRAIN);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setGeometry(QRect(340, 320, 85, 27));
        pushButton_2->setCheckable(false);
        label_2 = new QLabel(TRAIN);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 220, 41, 31));
        textBrowser = new QTextBrowser(TRAIN);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(130, 210, 351, 51));

        retranslateUi(TRAIN);
        QObject::connect(pushButton, SIGNAL(clicked()), TRAIN, SLOT(close()));

        QMetaObject::connectSlotsByName(TRAIN);
    } // setupUi

    void retranslateUi(QDialog *TRAIN)
    {
        TRAIN->setWindowTitle(QApplication::translate("TRAIN", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TRAIN", "\350\277\231\351\207\214\346\230\257\350\256\255\347\273\203", 0, QApplication::UnicodeUTF8));
        model->setText(QApplication::translate("TRAIN", " \351\200\211\346\213\251\350\266\205\345\217\202\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("TRAIN", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("TRAIN", "\345\274\200\345\247\213\350\256\255\347\273\203", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TRAIN", "\346\263\250\346\204\217:", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("TRAIN", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">\350\257\267\344\277\235\350\257\201\344\275\240\347\232\204\350\266\205\345\217\202\346\226\207\344\273\266\351\207\214\351\235\242\347\232\204\350\256\255\347\273\203\346\250\241\345\236\213\346\226\207\344\273\266\350\267\257\345\276\204\346\255\243\347\241\256,\345\267\262\347\273\217\350\256\255\347\273\203\346\250\241\345\236\213\346\226\207\344\273\266\351\207\214\351\235\242\347\232\204\346\225\260\346\215\256\346\272\220\350\267\257\345\276\204\346\255\243\347\241\256!!</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TRAIN: public Ui_TRAIN {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAIN_H
