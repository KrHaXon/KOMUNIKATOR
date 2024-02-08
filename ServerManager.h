#ifndef SERVERMANAGER_H
#define SERVERMANAGER_H

#include <QObject>
#include <QTcpSocket>
#include <QTcpServer>
#include <Qstring>
#include <QJsonDocument>
#include <QJsonObject>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql/QtSql>

class ServerManager : public QObject
{
    Q_OBJECT
public:
    explicit ServerManager(ushort port=4500, QObject *parent = nullptr);
    QTcpSocket* getClientById(int id);
private slots:
    void newClientConnectionReceived();
    void onClientDisconnected();
    void onMessageReceived();

signals:
    void newClientConnected(QTcpSocket *client);
    void ClientDisconnected(QTcpSocket *client);
    void MessageReceived(QString *message);

private: //fields
    QTcpServer *_server;
    QList<QTcpSocket *> _clients;
private: //metods
    void setupServer(ushort port);
};

#endif // SERVERMANAGER_H
