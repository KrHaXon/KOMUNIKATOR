/********************************************************************************
** Form generated from reading UI file 'ClientChatWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTCHATWIDGET_H
#define UI_CLIENTCHATWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientChatWidget
{
public:
    QFormLayout *formLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListWidget *lstMessages;
    QWidget *wdgSend;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *InMessage;
    QPushButton *btnSend;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textUser;
    QLabel *label_2;

    void setupUi(QWidget *ClientChatWidget)
    {
        if (ClientChatWidget->objectName().isEmpty())
            ClientChatWidget->setObjectName(QString::fromUtf8("ClientChatWidget"));
        ClientChatWidget->resize(860, 340);
        formLayout = new QFormLayout(ClientChatWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        groupBox = new QGroupBox(ClientChatWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lstMessages = new QListWidget(groupBox);
        lstMessages->setObjectName(QString::fromUtf8("lstMessages"));

        verticalLayout->addWidget(lstMessages);

        wdgSend = new QWidget(groupBox);
        wdgSend->setObjectName(QString::fromUtf8("wdgSend"));
        horizontalLayout = new QHBoxLayout(wdgSend);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(wdgSend);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        InMessage = new QLineEdit(wdgSend);
        InMessage->setObjectName(QString::fromUtf8("InMessage"));

        horizontalLayout->addWidget(InMessage);

        btnSend = new QPushButton(wdgSend);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        horizontalLayout->addWidget(btnSend);


        verticalLayout->addWidget(wdgSend);


        formLayout->setWidget(1, QFormLayout::FieldRole, groupBox);

        groupBox_2 = new QGroupBox(ClientChatWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        textUser = new QTextEdit(groupBox_2);
        textUser->setObjectName(QString::fromUtf8("textUser"));

        verticalLayout_2->addWidget(textUser);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        formLayout->setWidget(1, QFormLayout::LabelRole, groupBox_2);


        retranslateUi(ClientChatWidget);

        QMetaObject::connectSlotsByName(ClientChatWidget);
    } // setupUi

    void retranslateUi(QWidget *ClientChatWidget)
    {
        ClientChatWidget->setWindowTitle(QCoreApplication::translate("ClientChatWidget", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ClientChatWidget", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("ClientChatWidget", "Message:", nullptr));
        btnSend->setText(QCoreApplication::translate("ClientChatWidget", "Send", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ClientChatWidget", "GroupBox", nullptr));
        label_2->setText(QCoreApplication::translate("ClientChatWidget", "Insernt user name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientChatWidget: public Ui_ClientChatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTCHATWIDGET_H
