#include "ClientChatWidget.h"
#include "ui_ClientChatWidget.h"
#include "ChatItemWidgetServer.h"

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
    auto jsonString = _client->readAll();
    const auto dokument = QJsonDocument::fromJson(jsonString);
    const auto object = dokument.object();
    const auto user = object["user"].toString().trimmed().toUtf8();
    const auto data = object["data"].toString().trimmed().toUtf8();

    auto chatWidget = new ChatItemWidgetServer(this);
    chatWidget->setMessage(data, user);
    auto listItemWidget = new QListWidgetItem();
    listItemWidget->setSizeHint(QSize(0,65));
    ui->lstMessages->addItem(listItemWidget);
    listItemWidget->setBackground(QColor(165,255,230));
    ui->lstMessages->setItemWidget(listItemWidget,chatWidget);
}

void ClientChatWidget::on_btnSend_clicked()
{
    auto messages = ui->InMessage->text().trimmed();
    const auto razem = QJsonObject {{"data", ui->InMessage->text()},{"user", ui->textUser->toPlainText()}};
    const auto dokument = QJsonDocument{{razem}};
    const auto dokumentString = QString::fromUtf8(dokument.toJson());
    _client->write(dokumentString.trimmed().toUtf8());
    ui->InMessage->setText("");


    auto chatWidget = new ChatItemWidgetServer(this);
    chatWidget->setMessage(messages, ui->textUser->toPlainText(), true);
    auto listItemWidget = new QListWidgetItem();
    listItemWidget->setSizeHint(QSize(0,65));
    ui->lstMessages->addItem(listItemWidget);
    listItemWidget->setBackground(QColor(100,100,230));
    ui->lstMessages->setItemWidget(listItemWidget,chatWidget);
}

void ClientChatWidget::clientDisconnected()
{
    ui->wdgSend->setEnabled(false);
}

