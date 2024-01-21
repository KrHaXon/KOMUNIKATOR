/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSplitter *splitter;
    QLabel *napisLogin;
    QLabel *labelPassword;
    QLineEdit *lineEditLogin;
    QLineEdit *lineEditPassword;
    QPushButton *LoginButton;
    QSplitter *splitter_2;
    QLabel *labelRegistration;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName(QString::fromUtf8("secondwindow"));
        secondwindow->resize(800, 600);
        secondwindow->setStyleSheet(QString::fromUtf8("QTextEdit, QListWidget, QListView{\n"
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
        centralwidget = new QWidget(secondwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(220, 150, 341, 161));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(layoutWidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Vertical);
        napisLogin = new QLabel(splitter);
        napisLogin->setObjectName(QString::fromUtf8("napisLogin"));
        QFont font;
        font.setFamilies({QString::fromUtf8("times")});
        font.setPointSize(20);
        font.setBold(true);
        napisLogin->setFont(font);
        splitter->addWidget(napisLogin);
        labelPassword = new QLabel(splitter);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setFont(font);
        splitter->addWidget(labelPassword);

        gridLayout->addWidget(splitter, 0, 0, 2, 1);

        lineEditLogin = new QLineEdit(layoutWidget);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));

        gridLayout->addWidget(lineEditLogin, 0, 1, 1, 1);

        lineEditPassword = new QLineEdit(layoutWidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEditPassword, 1, 1, 1, 1);

        LoginButton = new QPushButton(layoutWidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("times")});
        font1.setPointSize(15);
        font1.setBold(true);
        LoginButton->setFont(font1);

        gridLayout->addWidget(LoginButton, 2, 1, 1, 1);

        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setGeometry(QRect(50, 430, 271, 71));
        splitter_2->setOrientation(Qt::Vertical);
        labelRegistration = new QLabel(splitter_2);
        labelRegistration->setObjectName(QString::fromUtf8("labelRegistration"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("times")});
        font2.setPointSize(14);
        font2.setBold(true);
        labelRegistration->setFont(font2);
        splitter_2->addWidget(labelRegistration);
        pushButton = new QPushButton(splitter_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font2);
        splitter_2->addWidget(pushButton);
        secondwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(secondwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        secondwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(secondwindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        secondwindow->setStatusBar(statusbar);

        retranslateUi(secondwindow);

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QMainWindow *secondwindow)
    {
        secondwindow->setWindowTitle(QCoreApplication::translate("secondwindow", "MainWindow", nullptr));
        napisLogin->setText(QCoreApplication::translate("secondwindow", "Login:", nullptr));
        labelPassword->setText(QCoreApplication::translate("secondwindow", "Password:", nullptr));
        LoginButton->setText(QCoreApplication::translate("secondwindow", "Sign in", nullptr));
        labelRegistration->setText(QCoreApplication::translate("secondwindow", "Don't have account? Sign up!!!", nullptr));
        pushButton->setText(QCoreApplication::translate("secondwindow", "Sign up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
