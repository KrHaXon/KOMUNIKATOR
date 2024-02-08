#include "ClientManager.h"

ClientManager::ClientManager(QHostAddress ip, ushort port, QObject *parent)
    : QObject{parent},
        _ip(ip),
        _port(port)
{
    _socket = new QTcpSocket(this);
    connect(_socket, &QTcpSocket::connected, this, &ClientManager::connected);
    connect(_socket, &QTcpSocket::disconnected, this, &ClientManager::disconnected);
    connect(_socket, &QTcpSocket::readyRead, this, &ClientManager::readyRead);
}

void ClientManager::connectToServer(QString ip)
{
    _socket->connectToHost(ip, _port);
}

void ClientManager::sendMessage(QString message, QString user)
{
    const auto razem = QJsonObject {{"data", message},{"user", user}};
    const auto dokument = QJsonDocument{{razem}};
    const auto dokumentString = QString::fromUtf8(dokument.toJson());
    _socket->write(dokumentString.trimmed().toUtf8());
}

void ClientManager::readyRead()
{
    auto jsonString = _socket->readAll();
    const auto dokument = QJsonDocument::fromJson(jsonString);
    const auto object = dokument.object();
    const auto user = object["user"].toString().trimmed().toUtf8();
    const auto data = object["data"].toString().trimmed().toUtf8();
    emit dataRecived(data, user);
}

