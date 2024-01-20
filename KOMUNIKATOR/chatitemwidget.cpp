#include "chatitemwidget.h"
#include "ui_chatitemwidget.h"
#include "ui_mainwindow.h"
#include "mainwindow.h"

ClientItemWidget::chatitemwidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::chatitemwidget)
{
    ui->setupUi(this);
}

ClientItemWidget::~chatitemwidget()
{
    delete ui;
}

void chatitemwidget::setMessage(QString message, QString user, bool isMyMessage)
{
    if(isMyMessage){
        ui->lblMessage->setAlignment(Qt::AlignRight);
    }
    ui->lblMessage->setText(message);
    ui->lblTime->setText(user + " " + QDateTime::currentDateTime().toString("dd.MM.yyyy hh:mm"));
}
