/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *napisLogin;
    QLabel *labelPassword;
    QLineEdit *lineEdit;
    QLineEdit *lineEditLogin;
    QLineEdit *lineEditPassword;
    QPushButton *LoginButton;
    QLabel *labelRegistration;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        napisLogin = new QLabel(centralwidget);
        napisLogin->setObjectName(QString::fromUtf8("napisLogin"));
        napisLogin->setGeometry(QRect(220, 140, 91, 61));
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        napisLogin->setFont(font);
        labelPassword = new QLabel(centralwidget);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setGeometry(QRect(170, 190, 131, 71));
        labelPassword->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(330, 150, 131, 31));
        lineEditLogin = new QLineEdit(centralwidget);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));
        lineEditLogin->setGeometry(QRect(330, 150, 181, 41));
        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(330, 200, 181, 41));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        LoginButton = new QPushButton(centralwidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        LoginButton->setGeometry(QRect(360, 260, 121, 41));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(false);
        LoginButton->setFont(font1);
        labelRegistration = new QLabel(centralwidget);
        labelRegistration->setObjectName(QString::fromUtf8("labelRegistration"));
        labelRegistration->setGeometry(QRect(70, 430, 261, 41));
        QFont font2;
        font2.setPointSize(14);
        labelRegistration->setFont(font2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 480, 131, 31));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(false);
        pushButton->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        napisLogin->setText(QCoreApplication::translate("MainWindow", "Login:", nullptr));
        labelPassword->setText(QCoreApplication::translate("MainWindow", "Password:", nullptr));
        LoginButton->setText(QCoreApplication::translate("MainWindow", "Sign in", nullptr));
        labelRegistration->setText(QCoreApplication::translate("MainWindow", "Don't have account? Sign up!!!", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
