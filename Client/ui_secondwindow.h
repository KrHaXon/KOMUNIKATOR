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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *napisLogin;
    QLineEdit *lineEditLogin;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPassword;
    QLineEdit *lineEditPassword;
    QPushButton *LoginButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelRegistration;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName(QString::fromUtf8("secondwindow"));
        secondwindow->resize(800, 600);
        secondwindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(secondwindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        napisLogin = new QLabel(centralwidget);
        napisLogin->setObjectName(QString::fromUtf8("napisLogin"));
        QFont font;
        font.setFamilies({QString::fromUtf8("times")});
        font.setPointSize(20);
        font.setBold(true);
        napisLogin->setFont(font);

        horizontalLayout->addWidget(napisLogin);

        lineEditLogin = new QLineEdit(centralwidget);
        lineEditLogin->setObjectName(QString::fromUtf8("lineEditLogin"));

        horizontalLayout->addWidget(lineEditLogin);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelPassword = new QLabel(centralwidget);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setFont(font);

        horizontalLayout_2->addWidget(labelPassword);

        lineEditPassword = new QLineEdit(centralwidget);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEditPassword);


        verticalLayout->addLayout(horizontalLayout_2);

        LoginButton = new QPushButton(centralwidget);
        LoginButton->setObjectName(QString::fromUtf8("LoginButton"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("times")});
        font1.setPointSize(15);
        font1.setBold(true);
        LoginButton->setFont(font1);

        verticalLayout->addWidget(LoginButton);


        verticalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        labelRegistration = new QLabel(centralwidget);
        labelRegistration->setObjectName(QString::fromUtf8("labelRegistration"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("times")});
        font2.setPointSize(14);
        font2.setBold(true);
        labelRegistration->setFont(font2);

        verticalLayout_2->addWidget(labelRegistration);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font2);

        verticalLayout_2->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(2, 2);

        horizontalLayout_3->addLayout(verticalLayout_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        secondwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(secondwindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
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
