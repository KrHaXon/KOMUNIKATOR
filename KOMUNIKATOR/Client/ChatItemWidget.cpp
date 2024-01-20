#include "ChatItemWidget.h"
#include "ui_ChatItemWidget.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"
ChatItemWidget::ChatItemWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ChatItemWidget)
{
    ui->setupUi(this);
}

ChatItemWidget::~ChatItemWidget()
{
    delete ui;
}

void ChatItemWidget::setMessage(QString message, QString user, bool isMyMessage)
{
    if(isMyMessage){
        ui->lblMessage->setAlignment(Qt::AlignRight);
    }
    ui->lblMessage->setText(message);
    ui->lblTime->setText(user + " " + QDateTime::currentDateTime().toString("dd.MM.yyyy hh:mm"));
}
