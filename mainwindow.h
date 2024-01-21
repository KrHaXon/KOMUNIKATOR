
#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "registration.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql/QtSql>
#include "ServerManager.h"
#include "ClientChatWidget.h"
class Registration;
QT_BEGIN_NAMESPACE
namespace Ui {

class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, Registration *reg = nullptr);
    ~MainWindow();
private slots:
    void newClientConnected(QTcpSocket *client);
    void clientDisconnected(QTcpSocket *client);
    void on_LoginButton_clicked();
    void on_pushButton_clicked();


private:
    Ui::MainWindow *ui;
    ServerManager *_server;

private: //methods
    void setupServer();
    QSqlDatabase DB_Connection;
    Registration *regis = nullptr;
};
#endif // MAINWINDOW_H

