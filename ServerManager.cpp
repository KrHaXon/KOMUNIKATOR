#include "ServerManager.h"

ServerManager::ServerManager(ushort port, QObject *parent)
    : QObject{parent}
{
    setupServer(port);
    qDebug()<<_server->serverPort();

}

void ServerManager::newClientConnectionReceived()
{

    auto client = _server->nextPendingConnection();
    _clients<<client;
    auto id = _clients.length();
    client->setProperty("id",id);
    client->setProperty("isFirstMessage", true);
    connect(client, &QTcpSocket::readyRead, this, &ServerManager::onMessageReceived);
    connect(client, &QTcpSocket::disconnected, this, &ServerManager::onClientDisconnected);
    emit newClientConnected(client);
}

void ServerManager::onMessageReceived(){


    QTcpSocket* client = qobject_cast<QTcpSocket*>(sender());

    if (client)
    {
        auto jsonString = client->readAll();
        const auto dokument = QJsonDocument::fromJson(jsonString);
        const auto object = dokument.object();
        const auto idToJoin = object["user"].toString().trimmed().toUtf8();
        const auto myId = object["data"].toString().trimmed().toUtf8();

        bool isFirstMessage = client->property("isFirstMessage").toBool();

        if (isFirstMessage)
        {

            client->setProperty("id", myId.toInt());
            client->setProperty("idToJoin", idToJoin.toInt());
            client->setProperty("isFirstMessage", false);
        }
        else
        {
            qDebug() << "WCHODZI";
            int id = client->property("idToJoin").toInt();
            QTcpSocket* recipientClient = nullptr;
            recipientClient = getClientById(id);
            if (recipientClient)
            {
                recipientClient->write(jsonString);
            }
            else
            {
                qDebug() << "Nie znaleziono klienta o ID:" << id;
            }

        }
    }

    qDebug() << "Displaying client IDs:";
    for (QTcpSocket* client : _clients)
    {
        int id = client->property("id").toInt();
        qDebug() << "Client ID:" << id;
    }

}

QTcpSocket* ServerManager::getClientById(int id)
{

    for (QTcpSocket* client : _clients)
    {
        if (client->property("id").toInt() == id)
        {
            return client;
        }
    }
    return nullptr;
}

void ServerManager::onClientDisconnected()
{
    auto client = qobject_cast<QTcpSocket *>(sender());
    _clients.removeOne(client);
    emit ClientDisconnected(client);
}

void ServerManager::setupServer(ushort port)
{
    _server = new QTcpServer(this);
    connect(_server, &QTcpServer::newConnection, this, &ServerManager::newClientConnectionReceived);
    _server->listen(QHostAddress::Any, port);
}
