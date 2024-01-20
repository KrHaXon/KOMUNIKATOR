#include "ChatItemWidgetServer.h"
#include "ui_ChatItemWidgetServer.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
#include "ui_ClientChatWidget.h"
#include "ClientChatWidget.h"

ChatItemWidgetServer::ChatItemWidgetServer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChatItemWidgetServer)
{
    ui->setupUi(this);
}

ChatItemWidgetServer::~ChatItemWidgetServer()
{
    delete ui;
}

void ChatItemWidgetServer::setMessage(QString message, QString user, bool isMyMessage)
{
    if(isMyMessage){
        ui->lblMessage->setAlignment(Qt::AlignRight);
    }
    ui->lblMessage->setText(message);
    ui->lblData->setText(user + " " + QDateTime::currentDateTime().toString("dd.MM.yyyy hh:mm"));
}
