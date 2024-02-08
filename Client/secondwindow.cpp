#include "secondwindow.h"
#include "ui_secondwindow.h"


secondwindow::secondwindow(QWidget *parent, Registration *reg, MainWindow* main)
    : QMainWindow(parent)
    , ui(new Ui::secondwindow),regis(reg), mw(main)
{
    ui->setupUi(this);

    QFile file("\Style.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    setStyleSheet(styleSheet);

    DB_Connection=QSqlDatabase::addDatabase("QSQLITE");
    DB_Connection.setDatabaseName("\Bazy danych0.db");
    if(DB_Connection.open())
    {
        qDebug() << "DATABASE IS CONNECTED";
    }
    else
    {
        qDebug() << "DATABASE IS NOT CONNECTED - ERROR";
    }
}

secondwindow::~secondwindow()
{
    delete ui;
}

void secondwindow::on_LoginButton_clicked()
{
    QString name = ui->lineEditLogin->text();
    QString password = ui->lineEditPassword->text();

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

                qDebug() << "USTAWIONO WARTOSC";
                setName(name);
                qDebug()<< getName();
                mw->show();
                this->close();

            }
            else if(UserFindCount == 0)
            {
               QMessageBox::information(this, "ERROR", "WRONG DATA");
            }
        }
        else
        {
            QMessageBox::information(this, "ERROR", "Database is off");
        }
}

void secondwindow::on_pushButton_clicked()
{
    regis = new Registration(nullptr);
    regis->show();
    close();

}

