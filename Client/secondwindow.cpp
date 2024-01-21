#include "secondwindow.h"
#include "ui_secondwindow.h"


secondwindow::secondwindow(QWidget *parent, Registration *reg, MainWindow *siema)
    : QMainWindow(parent)
    , ui(new Ui::secondwindow), regis(reg), xd(siema)
{
    ui->setupUi(this);
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
void secondwindow::on_pushButton_clicked()
{
    regis = new Registration(nullptr);
    //xd = new MainWindow(nullptr);
    regis->show();
    close();
}

