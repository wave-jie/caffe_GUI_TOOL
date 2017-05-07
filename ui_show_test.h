/********************************************************************************
** Form generated from reading UI file 'show_test.ui'
**
** Created: Fri May 5 18:25:28 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOW_TEST_H
#define UI_SHOW_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_SHOW_TEST
{
public:
    QDialogButtonBox *buttonBox;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *SHOW_TEST)
    {
        if (SHOW_TEST->objectName().isEmpty())
            SHOW_TEST->setObjectName(QString::fromUtf8("SHOW_TEST"));
        SHOW_TEST->resize(640, 480);
        buttonBox = new QDialogButtonBox(SHOW_TEST);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 440, 621, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        textBrowser = new QTextBrowser(SHOW_TEST);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(340, 60, 256, 192));
        label = new QLabel(SHOW_TEST);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 260, 281, 31));
        label_2 = new QLabel(SHOW_TEST);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 50, 231, 191));
        label_2->setScaledContents(true);
        label_3 = new QLabel(SHOW_TEST);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(130, 20, 55, 17));

        retranslateUi(SHOW_TEST);
        QObject::connect(buttonBox, SIGNAL(accepted()), SHOW_TEST, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SHOW_TEST, SLOT(reject()));

        QMetaObject::connectSlotsByName(SHOW_TEST);
    } // setupUi

    void retranslateUi(QDialog *SHOW_TEST)
    {
        SHOW_TEST->setWindowTitle(QApplication::translate("SHOW_TEST", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QApplication::translate("SHOW_TEST", "Image", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SHOW_TEST: public Ui_SHOW_TEST {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOW_TEST_H
