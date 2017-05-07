/********************************************************************************
** Form generated from reading UI file 'mnist.ui'
**
** Created: Wed May 3 15:22:45 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MNIST_H
#define UI_MNIST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MNIST
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QFrame *line;
    QPushButton *test;
    QPushButton *modelfile;
    QLineEdit *lineEdit;
    QPushButton *model_detail;
    QFrame *line_2;
    QLineEdit *lineEdit_2;
    QFrame *line_3;
    QPushButton *train_data;
    QPushButton *test_data;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QFrame *line_4;
    QLabel *train_model;
    QRadioButton *cpu_mode;
    QRadioButton *gpu_mode;
    QPushButton *meanfile;
    QLineEdit *lineEdit_5;
    QLabel *label_2;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *MNIST)
    {
        if (MNIST->objectName().isEmpty())
            MNIST->setObjectName(QString::fromUtf8("MNIST"));
        MNIST->resize(773, 492);
        label = new QLabel(MNIST);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 10, 131, 41));
        pushButton = new QPushButton(MNIST);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 400, 101, 41));
        line = new QFrame(MNIST);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(193, 20, 20, 451));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        test = new QPushButton(MNIST);
        test->setObjectName(QString::fromUtf8("test"));
        test->setGeometry(QRect(20, 340, 101, 41));
        modelfile = new QPushButton(MNIST);
        modelfile->setObjectName(QString::fromUtf8("modelfile"));
        modelfile->setGeometry(QRect(240, 80, 101, 31));
        lineEdit = new QLineEdit(MNIST);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(370, 80, 321, 31));
        model_detail = new QPushButton(MNIST);
        model_detail->setObjectName(QString::fromUtf8("model_detail"));
        model_detail->setGeometry(QRect(240, 160, 101, 31));
        line_2 = new QFrame(MNIST);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(210, 130, 511, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        lineEdit_2 = new QLineEdit(MNIST);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(370, 160, 321, 31));
        line_3 = new QFrame(MNIST);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(210, 200, 511, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        train_data = new QPushButton(MNIST);
        train_data->setObjectName(QString::fromUtf8("train_data"));
        train_data->setEnabled(false);
        train_data->setGeometry(QRect(240, 250, 101, 31));
        test_data = new QPushButton(MNIST);
        test_data->setObjectName(QString::fromUtf8("test_data"));
        test_data->setGeometry(QRect(240, 300, 101, 31));
        lineEdit_3 = new QLineEdit(MNIST);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(false);
        lineEdit_3->setGeometry(QRect(380, 250, 311, 31));
        lineEdit_4 = new QLineEdit(MNIST);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(380, 300, 311, 31));
        line_4 = new QFrame(MNIST);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(210, 390, 501, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        train_model = new QLabel(MNIST);
        train_model->setObjectName(QString::fromUtf8("train_model"));
        train_model->setGeometry(QRect(270, 410, 81, 31));
        cpu_mode = new QRadioButton(MNIST);
        cpu_mode->setObjectName(QString::fromUtf8("cpu_mode"));
        cpu_mode->setGeometry(QRect(390, 420, 98, 22));
        gpu_mode = new QRadioButton(MNIST);
        gpu_mode->setObjectName(QString::fromUtf8("gpu_mode"));
        gpu_mode->setGeometry(QRect(530, 420, 98, 22));
        meanfile = new QPushButton(MNIST);
        meanfile->setObjectName(QString::fromUtf8("meanfile"));
        meanfile->setGeometry(QRect(240, 350, 101, 31));
        lineEdit_5 = new QLineEdit(MNIST);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(380, 350, 311, 27));
        label_2 = new QLabel(MNIST);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 30, 41, 21));
        label_2->setFrameShape(QFrame::NoFrame);
        textBrowser = new QTextBrowser(MNIST);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 60, 161, 251));

        retranslateUi(MNIST);

        QMetaObject::connectSlotsByName(MNIST);
    } // setupUi

    void retranslateUi(QWidget *MNIST)
    {
        MNIST->setWindowTitle(QApplication::translate("MNIST", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MNIST", "\350\277\231\351\207\214\346\230\257\346\265\213\350\257\225\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MNIST", "\350\277\224\345\233\236\344\270\273\347\225\214\351\235\242", 0, QApplication::UnicodeUTF8));
        test->setText(QApplication::translate("MNIST", "\345\274\200\345\247\213\346\265\213\350\257\225", 0, QApplication::UnicodeUTF8));
        modelfile->setText(QApplication::translate("MNIST", "\351\200\211\346\213\251\346\250\241\345\236\213\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        model_detail->setText(QApplication::translate("MNIST", "\351\200\211\346\213\251\346\250\241\345\236\213\346\217\217\350\277\260\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        train_data->setText(QApplication::translate("MNIST", "\350\256\255\347\273\203\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        test_data->setText(QApplication::translate("MNIST", "\346\265\213\350\257\225\345\233\276\347\211\207", 0, QApplication::UnicodeUTF8));
        train_model->setText(QApplication::translate("MNIST", "\351\200\211\346\213\251\350\256\255\347\273\203\346\250\241\345\274\217", 0, QApplication::UnicodeUTF8));
        cpu_mode->setText(QApplication::translate("MNIST", "cpu_mode", 0, QApplication::UnicodeUTF8));
        gpu_mode->setText(QApplication::translate("MNIST", "gpu_mode", 0, QApplication::UnicodeUTF8));
        meanfile->setText(QApplication::translate("MNIST", "\344\270\255\345\200\274\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MNIST", "\346\263\250\346\204\217:", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("MNIST", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">  \346\230\257\345\220\246\351\200\211\347\224\250\344\270\255\345\200\274\346\226\207\344\273\266\345\272\224\350\257\245\344\270\216\344\275\240\347\232\204\346\250\241\345\236\213\346\226\207\344\273\266\347\233\270\347\254\246,\345\246\202\346\236\234\344\270\215\351\200\211\347\224\250\346\250\241\345\236\213\346\226\207\344\273\266,\345\210\231\344\270\215\345\277\205\351\200\211\346\213\251\344\270\255\345\200\274\346\226\207\344\273\266!!</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margi"
                        "n-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:11pt;\">  \345\217\246\345\244\226\345\275\223\345\211\215\347\211\210\346\234\254\345\217\252\346\224\257\346\214\201\346\265\213\350\257\225bmp\345\222\214jpg\345\233\276\347\211\207,\345\233\240png\350\247\243\347\240\201\351\227\256\351\242\230,\346\232\202\344\270\215\346\224\257\346\214\201png\345\233\276\345\203\217.</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MNIST: public Ui_MNIST {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MNIST_H
