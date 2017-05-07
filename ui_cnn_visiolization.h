/********************************************************************************
** Form generated from reading UI file 'cnn_visiolization.ui'
**
** Created: Sat May 6 19:52:08 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CNN_VISIOLIZATION_H
#define UI_CNN_VISIOLIZATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CNN_VISIOLIZATION
{
public:
    QComboBox *comboBox;
    QLabel *label;

    void setupUi(QWidget *CNN_VISIOLIZATION)
    {
        if (CNN_VISIOLIZATION->objectName().isEmpty())
            CNN_VISIOLIZATION->setObjectName(QString::fromUtf8("CNN_VISIOLIZATION"));
        CNN_VISIOLIZATION->resize(898, 630);
        comboBox = new QComboBox(CNN_VISIOLIZATION);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(60, 20, 501, 27));
        label = new QLabel(CNN_VISIOLIZATION);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 800, 600));

        retranslateUi(CNN_VISIOLIZATION);

        QMetaObject::connectSlotsByName(CNN_VISIOLIZATION);
    } // setupUi

    void retranslateUi(QWidget *CNN_VISIOLIZATION)
    {
        CNN_VISIOLIZATION->setWindowTitle(QApplication::translate("CNN_VISIOLIZATION", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("CNN_VISIOLIZATION", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CNN_VISIOLIZATION: public Ui_CNN_VISIOLIZATION {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CNN_VISIOLIZATION_H
