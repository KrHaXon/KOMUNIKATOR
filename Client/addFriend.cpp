#include "addFriend.h"
#include "ui_addFriend.h"

addFriend::addFriend(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::addFriend)
{
    QFile file("\Style.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    setStyleSheet(styleSheet);
    ui->setupUi(this);
}

addFriend::~addFriend()
{
    delete ui;
}


void addFriend::on_btnOk_clicked()
{
    QString friendName = ui->textFriend->toPlainText().trimmed();
    emit friendAdded(friendName);
    ui->textFriend->clear();
    this->close();
}


void addFriend::on_btnDeleteFriend_clicked()
{
    QString friendName = ui->textFriend->toPlainText().trimmed();
    emit friendDeleted(friendName);
    ui->textFriend->clear();
    this->close();
}


void addFriend::on_btnCancel_clicked()
{
    ui->textFriend->clear();
}

