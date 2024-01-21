#ifndef SERVERMANAGER_H
#define SERVERMANAGER_H

#include <QObject>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QtNetwork/QHostAddress>
#include <QMessageBox>
#include <QDebug>
#include <Qstring>
#include <QByteArray>

class ServerManager : public QObject
{
    Q_OBJECT
public:
    explicit ServerManager(ushort port=4500, QObject *parent = nullptr);
private slots:
    void newClientConnectionRecived();
    void onClientDisconnected();

signals:
    void newClientConnected(QTcpSocket *client);
    void ClientDisconnected(QTcpSocket *client);
private: //fields
    QTcpServer *_server;
    QList<QTcpSocket *> _clients;
private: //metods
    void setupServer(ushort port);
};

#endif // SERVERMANAGER_H
