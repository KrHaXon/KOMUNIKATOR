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
    QAction *actionChange_Picture;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *ipText;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *picture;
    QTextEdit *ourName;
    QSplitter *splitter_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *lstMessages;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *inMessage;
    QPushButton *btnSend;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QListWidget *listWidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(997, 589);
        MainWindow->setStyleSheet(QString::fromUtf8("QTextEdit, QListWidget, QListView{\n"
"	 border-width: 2px;\n"
"     border-style: outset;\n"
"     border-color: #b87c23;\n"
"}\n"
"QLabel, QPushButton, QLineEdit{\n"
"	color: white;\n"
"	margin: 0;\n"
"	padding: 0px 0px 0px 0px;\n"
"	letter-spacing: 0px;\n"
"	font-weight: bold;\n"
"	border-width: 2px;\n"
"    border-radius: 8px;\n"
"    color: #616161;\n"
"    font-weight: bold;\n"
"}\n"
"QMainWindow{\n"
"backgroundcolor: #ececec;\n"
"}\n"
"QPushButton{\n"
"	 border-width: 2px;\n"
"     border-style: outset;\n"
"     border-color: #61f2b7;\n"
"	 background-color: #daeddd;\n"
"}\n"
"\n"
"QPushButton::hover{\n"
"	border-color: #51e0a6;\n"
"	background-color: #aed4b4;\n"
"	color: 	#4f4f4f;\n"
"}\n"
"\n"
"QGroupBox, QLineEdit, QMenuBar{\n"
"	border-width: 2px;\n"
"	border-radius: 5px;\n"
"    border-style: outset;\n"
"    border-color: #b87c23;\n"
"	color: black;\n"
"	margin: 0;\n"
"	padding: 0px 0px 0px 0px;\n"
"	letter-spacing: 0px;\n"
"	font-weight: bold;\n"
"\n"
"}\n"
"QGroupBox::title{\n"
"	color: #616161;\n"
""
                        "	margin: 0;\n"
"	padding: 0px 0px 0px 0px;\n"
"	letter-spacing: 0px;\n"
"	font-weight: bold;\n"
"	subcontrol-origin: margin;\n"
"	bottom: 5px;\n"
"}\n"
"\n"
"QSplitter::handle{\n"
"background:transparent;\n"
"}\n"
"QSplitter::handle:hover{\n"
"cursor: default;\n"
"}\n"
""));
        actionConnect = new QAction(MainWindow);
        actionConnect->setObjectName(QString::fromUtf8("actionConnect"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionChange_Picture = new QAction(MainWindow);
        actionChange_Picture->setObjectName(QString::fromUtf8("actionChange_Picture"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ipText = new QTextEdit(groupBox_2);
        ipText->setObjectName(QString::fromUtf8("ipText"));
        ipText->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(ipText);

        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_3);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        picture = new QLabel(groupBox_3);
        picture->setObjectName(QString::fromUtf8("picture"));

        horizontalLayout_4->addWidget(picture);

        ourName = new QTextEdit(groupBox_3);
        ourName->setObjectName(QString::fromUtf8("ourName"));

        horizontalLayout_4->addWidget(ourName);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 4);

        horizontalLayout_3->addWidget(groupBox_3);

        horizontalLayout_3->setStretch(0, 5);
        horizontalLayout_3->setStretch(1, 9);

        verticalLayout_4->addWidget(groupBox_2);

        splitter_2 = new QSplitter(centralwidget);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        groupBox = new QGroupBox(splitter_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lstMessages = new QListWidget(groupBox);
        lstMessages->setObjectName(QString::fromUtf8("lstMessages"));

        verticalLayout->addWidget(lstMessages);

        splitter_2->addWidget(groupBox);
        layoutWidget = new QWidget(splitter_2);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        inMessage = new QLineEdit(layoutWidget);
        inMessage->setObjectName(QString::fromUtf8("inMessage"));

        horizontalLayout->addWidget(inMessage);

        btnSend = new QPushButton(layoutWidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        horizontalLayout->addWidget(btnSend);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 14);
        horizontalLayout->setStretch(2, 1);
        splitter_2->addWidget(layoutWidget);

        verticalLayout_4->addWidget(splitter_2);

        verticalLayout_4->setStretch(0, 2);
        verticalLayout_4->setStretch(1, 12);

        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_3->addWidget(listWidget);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        horizontalLayout_2->addLayout(verticalLayout_3);

        horizontalLayout_2->setStretch(0, 5);
        horizontalLayout_2->setStretch(1, 1);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 997, 25));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOptions->menuAction());
        menuOptions->addAction(actionConnect);
        menuOptions->addAction(actionChange_Picture);
        menuOptions->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Client", nullptr));
        actionConnect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionChange_Picture->setText(QCoreApplication::translate("MainWindow", "Change Picture", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Enter IP", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "Our Profile", nullptr));
        picture->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Messages", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Message:", nullptr));
        btnSend->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Friends", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Manage Friends", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "Options", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
