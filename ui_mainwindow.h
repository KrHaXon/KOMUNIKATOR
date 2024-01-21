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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *grpChats;
    QVBoxLayout *verticalLayout;
    QTabWidget *tbChats;
    QGroupBox *grpClients;
    QVBoxLayout *verticalLayout_2;
    QListWidget *lstClients;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QTextEdit, QListWidget, QListView{\n"
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
"QMainWindow{\n"
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
""
                        "     font-family: times, Times New Roman, times-roman, georgia, serif;\n"
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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        grpChats = new QGroupBox(centralwidget);
        grpChats->setObjectName(QString::fromUtf8("grpChats"));
        verticalLayout = new QVBoxLayout(grpChats);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tbChats = new QTabWidget(grpChats);
        tbChats->setObjectName(QString::fromUtf8("tbChats"));

        verticalLayout->addWidget(tbChats);


        horizontalLayout->addWidget(grpChats);

        grpClients = new QGroupBox(centralwidget);
        grpClients->setObjectName(QString::fromUtf8("grpClients"));
        verticalLayout_2 = new QVBoxLayout(grpClients);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lstClients = new QListWidget(grpClients);
        lstClients->setObjectName(QString::fromUtf8("lstClients"));

        verticalLayout_2->addWidget(lstClients);


        horizontalLayout->addWidget(grpClients);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Server", nullptr));
        grpChats->setTitle(QCoreApplication::translate("MainWindow", "Chats", nullptr));
        grpClients->setTitle(QCoreApplication::translate("MainWindow", "Clients", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
