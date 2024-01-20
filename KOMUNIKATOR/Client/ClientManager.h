#ifndef CLIENTMANAGER_H
#define CLIENTMANAGER_H

#include <QObject>
#include <QJsonDocument>
#include <QJsonObject>
#include <QTcpSocket>
class ClientManager : public QObject
{
    Q_OBJECT
public:
    explicit ClientManager(QHostAddress ip= QHostAddress::LocalHost, ushort port = 4500, QObject *parent = nullptr);

    void connectToServer(QString ip);
    void sendMessage(QString message, QString user);
signals:
    void connected();
    void disconnected();
    void dataRecived(QByteArray data, QString user);

private slots:
    void readyRead();


private:
    QTcpSocket *_socket;
    QHostAddress _ip;
    ushort _port;

};

#endif // CLIENTMANAGER_H
