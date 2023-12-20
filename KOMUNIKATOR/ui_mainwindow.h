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
    QLabel *Login;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Registrationbutton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLabel *Name;
    QLabel *DateOfBirth;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(831, 598);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Login = new QLabel(centralwidget);
        Login->setObjectName(QString::fromUtf8("Login"));
        Login->setGeometry(QRect(230, 280, 51, 31));
        Login->setMinimumSize(QSize(20, 30));
        QFont font;
        font.setPointSize(15);
        Login->setFont(font);
        Login->setLineWidth(6);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 230, 61, 31));
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 340, 81, 31));
        label_2->setFont(font);
        Registrationbutton = new QPushButton(centralwidget);
        Registrationbutton->setObjectName(QString::fromUtf8("Registrationbutton"));
        Registrationbutton->setGeometry(QRect(300, 410, 221, 24));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(290, 100, 241, 41));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 160, 241, 41));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(290, 220, 241, 41));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(290, 280, 241, 41));
        lineEdit_5 = new QLineEdit(centralwidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(290, 340, 241, 41));
        Name = new QLabel(centralwidget);
        Name->setObjectName(QString::fromUtf8("Name"));
        Name->setGeometry(QRect(220, 100, 61, 41));
        Name->setFont(font);
        DateOfBirth = new QLabel(centralwidget);
        DateOfBirth->setObjectName(QString::fromUtf8("DateOfBirth"));
        DateOfBirth->setGeometry(QRect(180, 160, 131, 41));
        DateOfBirth->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 831, 21));
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
        Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        Registrationbutton->setText(QCoreApplication::translate("MainWindow", "Registration", nullptr));
        Name->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        DateOfBirth->setText(QCoreApplication::translate("MainWindow", "DateOfBirth", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
