/********************************************************************************
** Form generated from reading UI file 'test.ui'
**
** Created: Sat May 6 16:34:05 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_H
#define UI_TEST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TEST
{
public:
    QPushButton *modelfile;
    QLineEdit *modelfile_lineEdit;
    QLineEdit *model_lineEdit_2;
    QLineEdit *image_lineEdit_3;
    QLineEdit *meanfile_lineEdit_4;
    QPushButton *modeldeploy;
    QPushButton *image;
    QPushButton *meanfile;
    QFrame *line;
    QRadioButton *gpu;
    QRadioButton *cpu;
    QPushButton *load;
    QPushButton *teststart;
    QPushButton *close;
    QPushButton *pushButton;

    void setupUi(QWidget *TEST)
    {
        if (TEST->objectName().isEmpty())
            TEST->setObjectName(QString::fromUtf8("TEST"));
        TEST->resize(640, 480);
        modelfile = new QPushButton(TEST);
        modelfile->setObjectName(QString::fromUtf8("modelfile"));
        modelfile->setGeometry(QRect(230, 30, 85, 27));
        modelfile_lineEdit = new QLineEdit(TEST);
        modelfile_lineEdit->setObjectName(QString::fromUtf8("modelfile_lineEdit"));
        modelfile_lineEdit->setEnabled(false);
        modelfile_lineEdit->setGeometry(QRect(350, 30, 251, 27));
        model_lineEdit_2 = new QLineEdit(TEST);
        model_lineEdit_2->setObjectName(QString::fromUtf8("model_lineEdit_2"));
        model_lineEdit_2->setEnabled(false);
        model_lineEdit_2->setGeometry(QRect(350, 90, 251, 27));
        image_lineEdit_3 = new QLineEdit(TEST);
        image_lineEdit_3->setObjectName(QString::fromUtf8("image_lineEdit_3"));
        image_lineEdit_3->setEnabled(false);
        image_lineEdit_3->setGeometry(QRect(350, 150, 251, 27));
        meanfile_lineEdit_4 = new QLineEdit(TEST);
        meanfile_lineEdit_4->setObjectName(QString::fromUtf8("meanfile_lineEdit_4"));
        meanfile_lineEdit_4->setEnabled(false);
        meanfile_lineEdit_4->setGeometry(QRect(350, 210, 251, 27));
        modeldeploy = new QPushButton(TEST);
        modeldeploy->setObjectName(QString::fromUtf8("modeldeploy"));
        modeldeploy->setGeometry(QRect(230, 90, 85, 27));
        image = new QPushButton(TEST);
        image->setObjectName(QString::fromUtf8("image"));
        image->setGeometry(QRect(230, 150, 85, 27));
        meanfile = new QPushButton(TEST);
        meanfile->setObjectName(QString::fromUtf8("meanfile"));
        meanfile->setGeometry(QRect(230, 210, 85, 27));
        line = new QFrame(TEST);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(153, 10, 20, 451));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        gpu = new QRadioButton(TEST);
        gpu->setObjectName(QString::fromUtf8("gpu"));
        gpu->setGeometry(QRect(240, 270, 98, 22));
        gpu->setChecked(true);
        cpu = new QRadioButton(TEST);
        cpu->setObjectName(QString::fromUtf8("cpu"));
        cpu->setGeometry(QRect(400, 270, 98, 22));
        cpu->setChecked(false);
        load = new QPushButton(TEST);
        load->setObjectName(QString::fromUtf8("load"));
        load->setGeometry(QRect(240, 340, 85, 27));
        teststart = new QPushButton(TEST);
        teststart->setObjectName(QString::fromUtf8("teststart"));
        teststart->setEnabled(false);
        teststart->setGeometry(QRect(370, 340, 85, 27));
        close = new QPushButton(TEST);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(490, 340, 85, 27));
        pushButton = new QPushButton(TEST);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 400, 85, 27));

        retranslateUi(TEST);

        QMetaObject::connectSlotsByName(TEST);
    } // setupUi

    void retranslateUi(QWidget *TEST)
    {
        TEST->setWindowTitle(QApplication::translate("TEST", "Form", 0, QApplication::UnicodeUTF8));
        modelfile->setText(QApplication::translate("TEST", " \346\250\241\345\236\213\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        modeldeploy->setText(QApplication::translate("TEST", "\346\250\241\345\236\213\346\217\217\350\277\260\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        image->setText(QApplication::translate("TEST", "\346\265\213\350\257\225\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8));
        meanfile->setText(QApplication::translate("TEST", "\345\235\207\345\200\274\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        gpu->setText(QApplication::translate("TEST", "gpu_mode", 0, QApplication::UnicodeUTF8));
        cpu->setText(QApplication::translate("TEST", "cpu_mode", 0, QApplication::UnicodeUTF8));
        load->setText(QApplication::translate("TEST", "load", 0, QApplication::UnicodeUTF8));
        teststart->setText(QApplication::translate("TEST", "\345\274\200\345\247\213\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("TEST", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("TEST", "CNN\345\217\257\350\247\206\345\214\226", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TEST: public Ui_TEST {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_H
