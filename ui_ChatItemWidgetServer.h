/********************************************************************************
** Form generated from reading UI file 'ChatItemWidgetServer.ui'
**
** Created by: Qt User Interface Compiler version 6.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATITEMWIDGETSERVER_H
#define UI_CHATITEMWIDGETSERVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatItemWidgetServer
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lblMessage;
    QLabel *lblData;

    void setupUi(QWidget *ChatItemWidgetServer)
    {
        if (ChatItemWidgetServer->objectName().isEmpty())
            ChatItemWidgetServer->setObjectName(QString::fromUtf8("ChatItemWidgetServer"));
        ChatItemWidgetServer->resize(385, 131);
        verticalLayout = new QVBoxLayout(ChatItemWidgetServer);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lblMessage = new QLabel(ChatItemWidgetServer);
        lblMessage->setObjectName(QString::fromUtf8("lblMessage"));

        verticalLayout->addWidget(lblMessage);

        lblData = new QLabel(ChatItemWidgetServer);
        lblData->setObjectName(QString::fromUtf8("lblData"));

        verticalLayout->addWidget(lblData, 0, Qt::AlignRight);


        retranslateUi(ChatItemWidgetServer);

        QMetaObject::connectSlotsByName(ChatItemWidgetServer);
    } // setupUi

    void retranslateUi(QWidget *ChatItemWidgetServer)
    {
        ChatItemWidgetServer->setWindowTitle(QCoreApplication::translate("ChatItemWidgetServer", "Form", nullptr));
        lblMessage->setText(QCoreApplication::translate("ChatItemWidgetServer", "Message", nullptr));
        lblData->setText(QCoreApplication::translate("ChatItemWidgetServer", "Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChatItemWidgetServer: public Ui_ChatItemWidgetServer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATITEMWIDGETSERVER_H
