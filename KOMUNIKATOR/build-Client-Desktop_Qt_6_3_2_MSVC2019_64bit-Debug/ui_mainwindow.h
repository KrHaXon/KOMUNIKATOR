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
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionConnect;
    QAction *actionExit;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *ipText;
    QLabel *label_2;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *userText;
    QLabel *label_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *lstMessages;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inMessage;
    QPushButton *btnSend;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        ipText = new QTextEdit(groupBox_2);
        ipText->setObjectName(QString::fromUtf8("ipText"));

        verticalLayout_2->addWidget(ipText);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        splitter->addWidget(groupBox_2);
        groupBox_3 = new QGroupBox(splitter);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_3 = new QVBoxLayout(groupBox_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        userText = new QTextEdit(groupBox_3);
        userText->setObjectName(QString::fromUtf8("userText"));

        verticalLayout_3->addWidget(userText);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        splitter->addWidget(groupBox_3);

        verticalLayout_4->addWidget(splitter);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lstMessages = new QListWidget(groupBox);
        lstMessages->setObjectName(QString::fromUtf8("lstMessages"));

        verticalLayout->addWidget(lstMessages);


        verticalLayout_4->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        inMessage = new QLineEdit(centralwidget);
        inMessage->setObjectName(QString::fromUtf8("inMessage"));

        horizontalLayout->addWidget(inMessage);

        btnSend = new QPushButton(centralwidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        horizontalLayout->addWidget(btnSend);


        verticalLayout_4->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionConnect);
        menuOptions->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Client", nullptr));
        actionConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Wprowad\305\272 ip np 1.1.1.1", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Wprowad\305\272 nazwe u\305\274ytkownika", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Messages", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Message:", nullptr));
        btnSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
