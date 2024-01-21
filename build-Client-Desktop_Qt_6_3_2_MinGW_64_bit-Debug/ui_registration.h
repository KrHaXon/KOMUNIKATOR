/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QLabel *label;
    QPushButton *pushButton_2;
    QSplitter *splitter_3;
    QLabel *label_7;
    QPushButton *pushButton;
    QSplitter *splitter;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QSplitter *splitter_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;

    void setupUi(QWidget *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->resize(800, 600);
        Registration->setStyleSheet(QString::fromUtf8("QTextEdit, QListWidget, QListView{\n"
"border-width: 2px;\n"
"     border-style: outset;\n"
"     border-color: #b87c23;\n"
"}\n"
"QLabel, QPushButton, QLineEdit{\n"
" font-family: times, Times New Roman, times-roman, georgia, serif;\n"
"    color: white;\n"
"    margin: 0;\n"
"    padding: 0px 0px 0px 0px;\n"
"    letter-spacing: 0px;\n"
"    font-weight: bold;\n"
"}\n"
"QWidget{\n"
"    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 #525a61, stop:1 #6a747d);\n"
"}\n"
"QPushButton{\n"
"border-width: 2px;\n"
"     border-style: outset;\n"
"     border-color: #61f2b7;\n"
"     background-color: #2fc286;\n"
"}\n"
"\n"
"\n"
"QGroupBox, QLineEdit, QMenuBar{\n"
"    border-width: 2px;\n"
"    border-style: outset;\n"
"    border-color: #b87c23;\n"
"    font-family: times, Times New Roman, times-roman, georgia, serif;\n"
"    color: black;\n"
"    margin: 0;\n"
"    padding: 0px 0px 0px 0px;\n"
"    letter-spacing: 0px;\n"
"    font-weight: bold;\n"
"\n"
"}\n"
"QGroupBox::title{\n"
"   "
                        "  font-family: times, Times New Roman, times-roman, georgia, serif;\n"
"    color: white;\n"
"    margin: 0;\n"
"    padding: 0px 0px 0px 0px;\n"
"    letter-spacing: 0px;\n"
"    font-weight: bold;\n"
"    subcontrol-origin: margin;\n"
"    bottom: 5px;\n"
"}\n"
"\n"
"QSplitter::handle{\n"
"background:transparent;\n"
"}\n"
"QSplitter::handle:hover{\n"
"cursor: default;\n"
"}"));
        label = new QLabel(Registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 120, 181, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("times")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);
        pushButton_2 = new QPushButton(Registration);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 330, 161, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("times")});
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton_2->setFont(font1);
        splitter_3 = new QSplitter(Registration);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setGeometry(QRect(80, 460, 254, 71));
        splitter_3->setOrientation(Qt::Vertical);
        label_7 = new QLabel(splitter_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);
        splitter_3->addWidget(label_7);
        pushButton = new QPushButton(splitter_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font1);
        splitter_3->addWidget(pushButton);
        splitter = new QSplitter(Registration);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(210, 180, 131, 151));
        QFont font2;
        font2.setPointSize(12);
        splitter->setFont(font2);
        splitter->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("times")});
        font3.setPointSize(12);
        font3.setBold(true);
        label_2->setFont(font3);
        splitter->addWidget(label_2);
        label_3 = new QLabel(splitter);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);
        splitter->addWidget(label_3);
        label_4 = new QLabel(splitter);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font3);
        splitter->addWidget(label_4);
        label_5 = new QLabel(splitter);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font3);
        splitter->addWidget(label_5);
        label_6 = new QLabel(splitter);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);
        splitter->addWidget(label_6);
        splitter_2 = new QSplitter(Registration);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(350, 190, 201, 116));
        splitter_2->setOrientation(Qt::Vertical);
        lineEdit_2 = new QLineEdit(splitter_2);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        splitter_2->addWidget(lineEdit_2);
        lineEdit = new QLineEdit(splitter_2);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        splitter_2->addWidget(lineEdit);
        lineEdit_3 = new QLineEdit(splitter_2);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        splitter_2->addWidget(lineEdit_3);
        lineEdit_4 = new QLineEdit(splitter_2);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        splitter_2->addWidget(lineEdit_4);
        lineEdit_5 = new QLineEdit(splitter_2);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setEchoMode(QLineEdit::Password);
        splitter_2->addWidget(lineEdit_5);

        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QWidget *Registration)
    {
        Registration->setWindowTitle(QCoreApplication::translate("Registration", "Form", nullptr));
        label->setText(QCoreApplication::translate("Registration", "Sign up here!", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Registration", "Sign up", nullptr));
        label_7->setText(QCoreApplication::translate("Registration", "Do you have account? Sign in!", nullptr));
        pushButton->setText(QCoreApplication::translate("Registration", "Sign in", nullptr));
        label_2->setText(QCoreApplication::translate("Registration", "name:", nullptr));
        label_3->setText(QCoreApplication::translate("Registration", "DateOfBirth:", nullptr));
        label_4->setText(QCoreApplication::translate("Registration", "Email:", nullptr));
        label_5->setText(QCoreApplication::translate("Registration", "Login:", nullptr));
        label_6->setText(QCoreApplication::translate("Registration", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
