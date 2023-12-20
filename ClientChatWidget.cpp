#include "ClientChatWidget.h"
#include "ui_ClientChatWidget.h"

ClientChatWidget::ClientChatWidget(QTcpSocket *client, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientChatWidget),
    _client(client)
{
    ui->setupUi(this);
    connect(_client, &QTcpSocket::readyRead, this, &ClientChatWidget::dataReceived);
    connect(_client, &QTcpSocket::disconnected, this, &ClientChatWidget::clientDisconnected);
}


ClientChatWidget::~ClientChatWidget()
{
    delete ui;
}

void ClientChatWidget::dataReceived()
{
    auto data = _client->readAll();
    ui->lstMessages->addItem(data);
}

void ClientChatWidget::on_btnSend_clicked()
{
    const auto razem = QJsonObject {{"data", ui->InMessage->text()},{"user", ui->textUser->toPlainText()}};
    const auto dokument = QJsonDocument{{razem}};
    const auto dokumentString = QString::fromUtf8(dokument.toJson());
    _client->write(dokumentString.trimmed().toUtf8());
    //_client->write(ui->textUser->toPlainText().trimmed().toUtf8());
    // _client->write(ui->InMessage->text().trimmed().toUtf8());
    ui->InMessage->setText("");
}

void ClientChatWidget::clientDisconnected()
{
    ui->wdgSend->setEnabled(false);
}

