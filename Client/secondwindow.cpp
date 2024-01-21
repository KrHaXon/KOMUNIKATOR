#include "secondwindow.h"
#include "ui_secondwindow.h"


secondwindow::secondwindow(QWidget *parent, Registration *reg, MainWindow* mainik)
    : QMainWindow(parent)
    , ui(new Ui::secondwindow), regis(reg), xd(mainik)
{
    ui->setupUi(this);
    DB_Connection=QSqlDatabase::addDatabase("QSQLITE");
    DB_Connection.setDatabaseName("C:\\Users\\Krzysztof\\Desktop\\Komunikator wersja ok\\KOMUNIKATOR-DevelopAktualny\\Client\\Bazy danych0.db");
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
    if(name == "test" && password == "test")
    {
        QMessageBox::information(this, "dziala", "nie moze byc");
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
                xd = new MainWindow(nullptr);
                xd->show();
                close();
            }
            else if(UserFindCount == 0)
            {
               QMessageBox::information(this, "ERROR", "WRONG DATA");
            }
        }
        else
        {
            QMessageBox::information(this, "zle", "no w tym przypadku jest fatalnie");
        }
    }
}
void secondwindow::on_pushButton_clicked()
{
    regis = new Registration(nullptr);
    regis->show();
    close();
}

