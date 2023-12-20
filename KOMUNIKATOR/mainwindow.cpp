#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DB_Connection=QSqlDatabase::addDatabase("QSQLITE");
    DB_Connection.setDatabaseName("Bazy danych0.db");
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

void MainWindow::on_Registrationbutton_clicked()
{
    DB_Connection.open();
    QSqlDatabase::database().transaction();
    QSqlQuery QueryInsertData(DB_Connection);
    QueryInsertData.prepare("INSERT INTO User(UserName, UserDateOfBirth, UserEmail, UserLogin, UserPassword) VALUES(:UserName,:UserDateOfBirth,:UserEmail,:UserLogin,:UserPassword)");
    QueryInsertData.bindValue(":UserName",ui->lineEdit->text());
    QueryInsertData.bindValue(":UserDateOfBirth",ui->lineEdit_2->text());
    QueryInsertData.bindValue(":UserEmail",ui->lineEdit_3->text());
    QueryInsertData.bindValue(":UserLogin",ui->lineEdit_4->text());
    QueryInsertData.bindValue(":UserPassword",ui->lineEdit_5->text());
    QueryInsertData.exec();
    QSqlDatabase::database().commit();
    DB_Connection.close();
}

