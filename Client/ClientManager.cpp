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

void ClientManager::sendMessage(QString message)
{
    _socket->write(message.toUtf8());
}

void ClientManager::readyRead()
{
    auto jsonString = _socket->readAll();
    const auto dokument = QJsonDocument::fromJson(jsonString);
    const auto object = dokument.object();
    const auto user = object["user"].toString().trimmed().toUtf8();
    const auto data = object["data"].toString().trimmed().toUtf8();
    //auto user = _socket->readAll();
    //auto data = _socket->readAll();
    emit dataRecived(data, user);
}

