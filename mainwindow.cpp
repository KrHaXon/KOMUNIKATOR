
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ClientChatWidget.h"
#include "ServerManager.h"

MainWindow::MainWindow(QWidget *parent, Registration *reg)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), regis(reg)
{
    ui->setupUi(this);
    setupServer();
    DB_Connection=QSqlDatabase::addDatabase("QSQLITE");
    DB_Connection.setDatabaseName("C:\\Users\\Krzysztof\\Documents\\GitHub\\KOMUNIKATOR\\KOMUNIKATOR\\Bazy danych0.db");
    if(DB_Connection.open())
    {
        qDebug() << "DATABASE IS CONNECTED";
    }
    else
    {
        qDebug() << "DATABASE IS NOT CONNECTED - ERROR";
    }
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newClientConnected(QTcpSocket *client)
{
   auto id = client->property("id").toInt();
   ui->lstClients->addItem(QString("UserXyz connected: %1").arg(id));
   auto chatWidget = new ClientChatWidget(client);
   ui->tbChats->addTab(chatWidget, QString("Client %1").arg(id));
}

void MainWindow::clientDisconnected(QTcpSocket *client)
{
    auto id = client->property("id").toInt();
    ui->lstClients->addItem(QString("UserXyz disconnected: %1").arg(id));
}

void MainWindow::setupServer()
{
    _server = new ServerManager();
    connect(_server, &ServerManager::newClientConnected, this, &MainWindow::newClientConnected);
    connect(_server, &ServerManager::ClientDisconnected, this, &MainWindow::clientDisconnected);
}

void MainWindow::on_LoginButton_clicked()
{

    QString name = ui->lineEditLogin->text();
    QString password = ui->lineEditPassword->text();
    if(name == "test" && password == "test")
    {
        QMessageBox::information(this, "Lol dziala", "nie moze byc");
    }
    else
    {
        QSqlQuery QueryGetUser;
        QueryGetUser.prepare("SELECT * FROM User WHERE UserLogin=:name AND UserPassword=:password");
        QueryGetUser.bindValue(":name", name);
        QueryGetUser.bindValue(":password", password);
        if(QueryGetUser.exec())
        {
            int UserFindCount = 0;
            while(QueryGetUser.next())
            {
                UserFindCount = 1;
            }
            if(UserFindCount == 1)
            {
               QMessageBox::information(this, "Lol dziala", "nie moze byc");
            }
            else if(UserFindCount == 0)
            {
               QMessageBox::information(this, "Lol dziala nawet ze nie dziala", "to akurat moze byc xd");
            }
        }
        else
        {
            QMessageBox::information(this, "zle", "no w tym przypadku jest fatalnie");
        }
    }
}
void MainWindow::on_pushButton_clicked()
{
    regis = new Registration(nullptr);
    regis->show();
    close();
}




