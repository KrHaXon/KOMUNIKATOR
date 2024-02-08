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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_7;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->resize(800, 600);
        Registration->setStyleSheet(QString::fromUtf8("QTextEdit, QListWidget, QListView, QTabWidget{\n"
"	 border-width: 2px;\n"
"     border-style: outset;\n"
"     border-color: #b87c23;\n"
"	 margin: 5px;\n"
"	padding: 0px;\n"
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
""
                        "\n"
"}\n"
"QGroupBox::title{\n"
"	color: #616161;\n"
"	margin: 2;\n"
"	padding: 0px 0px 0px 0px;\n"
"	font-weight: bold;\n"
"	subcontrol-origin: margin;\n"
"	bottom: 5px;\n"
"	font-size:12px;\n"
"}\n"
"\n"
"QSplitter::handle{\n"
"background:transparent;\n"
"}\n"
"QSplitter::handle:hover{\n"
"cursor: default;\n"
"}\n"
"\n"
"\n"
""));
        horizontalLayout_7 = new QHBoxLayout(Registration);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        label = new QLabel(Registration);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamilies({QString::fromUtf8("times")});
        font.setPointSize(20);
        font.setBold(true);
        label->setFont(font);

        verticalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(Registration);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("times")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_2->setFont(font1);

        horizontalLayout->addWidget(label_2);

        lineEdit_2 = new QLineEdit(Registration);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(Registration);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        lineEdit = new QLineEdit(Registration);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(Registration);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        lineEdit_3 = new QLineEdit(Registration);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_3->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(Registration);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        horizontalLayout_4->addWidget(label_5);

        lineEdit_4 = new QLineEdit(Registration);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_4->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(Registration);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font1);

        horizontalLayout_5->addWidget(label_6);

        lineEdit_5 = new QLineEdit(Registration);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_5);


        verticalLayout_2->addLayout(verticalLayout);

        pushButton_2 = new QPushButton(Registration);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("times")});
        font2.setPointSize(14);
        font2.setBold(true);
        pushButton_2->setFont(font2);

        verticalLayout_2->addWidget(pushButton_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_7 = new QLabel(Registration);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        verticalLayout_3->addWidget(label_7);

        pushButton = new QPushButton(Registration);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setFont(font2);

        verticalLayout_3->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_4->addLayout(verticalLayout_3);


        horizontalLayout_7->addLayout(verticalLayout_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QWidget *Registration)
    {
        Registration->setWindowTitle(QCoreApplication::translate("Registration", "Form", nullptr));
        label->setText(QCoreApplication::translate("Registration", "Sign up here!", nullptr));
        label_2->setText(QCoreApplication::translate("Registration", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("Registration", "DateOfBirth:", nullptr));
        label_4->setText(QCoreApplication::translate("Registration", "Email:", nullptr));
        label_5->setText(QCoreApplication::translate("Registration", "Login:", nullptr));
        label_6->setText(QCoreApplication::translate("Registration", "Password:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Registration", "Sign up", nullptr));
        label_7->setText(QCoreApplication::translate("Registration", "Do you have account? Sign in!", nullptr));
        pushButton->setText(QCoreApplication::translate("Registration", "Sign in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
