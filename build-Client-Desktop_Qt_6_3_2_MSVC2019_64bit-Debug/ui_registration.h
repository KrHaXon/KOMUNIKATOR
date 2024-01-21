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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->resize(800, 600);
        label_2 = new QLabel(Registration);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 150, 61, 31));
        QFont font;
        font.setPointSize(15);
        label_2->setFont(font);
        label_3 = new QLabel(Registration);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(240, 180, 111, 51));
        label_3->setFont(font);
        label_7 = new QLabel(Registration);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(150, 430, 261, 31));
        QFont font1;
        font1.setPointSize(14);
        label_7->setFont(font1);
        label_4 = new QLabel(Registration);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(290, 230, 61, 41));
        label_4->setFont(font);
        label_5 = new QLabel(Registration);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(290, 270, 61, 31));
        label_5->setFont(font);
        label_6 = new QLabel(Registration);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(260, 310, 91, 31));
        label_6->setFont(font);
        pushButton = new QPushButton(Registration);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 473, 91, 31));
        pushButton->setFont(font1);
        label = new QLabel(Registration);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(350, 50, 151, 41));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        label->setFont(font2);
        lineEdit = new QLineEdit(Registration);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(360, 160, 113, 24));
        lineEdit_2 = new QLineEdit(Registration);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(360, 200, 113, 24));
        lineEdit_3 = new QLineEdit(Registration);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(360, 240, 113, 24));
        lineEdit_4 = new QLineEdit(Registration);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(360, 280, 113, 24));
        lineEdit_5 = new QLineEdit(Registration);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(360, 320, 113, 24));
        lineEdit_5->setEchoMode(QLineEdit::Password);
        pushButton_2 = new QPushButton(Registration);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(370, 360, 91, 31));
        pushButton_2->setFont(font1);

        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QWidget *Registration)
    {
        Registration->setWindowTitle(QCoreApplication::translate("Registration", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Registration", "name:", nullptr));
        label_3->setText(QCoreApplication::translate("Registration", "DateOfBirth:", nullptr));
        label_7->setText(QCoreApplication::translate("Registration", "Do you have account? Sign in!", nullptr));
        label_4->setText(QCoreApplication::translate("Registration", "Email:", nullptr));
        label_5->setText(QCoreApplication::translate("Registration", "Login:", nullptr));
        label_6->setText(QCoreApplication::translate("Registration", "Password:", nullptr));
        pushButton->setText(QCoreApplication::translate("Registration", "Sign in", nullptr));
        label->setText(QCoreApplication::translate("Registration", "Sing up here!", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Registration", "Sing up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
