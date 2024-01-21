#include "registration.h"
#include "ui_registration.h"

Registration::Registration(QWidget *parent, MainWindow *mw) :
    QWidget(parent),
    ui(new Ui::Registration), mainik(mw)
{
    ui->setupUi(this);
    DataBase = QSqlDatabase::addDatabase("QSQLITE");
    DataBase.setDatabaseName("C:\\Users\\Krzysztof\\Documents\\GitHub\\KOMUNIKATOR\\KOMUNIKATOR\\Bazy danych0.db");
    if(DataBase.open())
    {
        qDebug() << "DataBase for Registration is working:)";
    }
    else
    {
        qDebug() << "DataBase for Registration is NOT working:(";
    }
}

Registration::~Registration()
{
    delete ui;
}
void Registration::on_pushButton_2_clicked()
{
    DataBase.open();
    QSqlDatabase::database().transaction();
    QSqlQuery QueryInsertData(DataBase);
    QueryInsertData.prepare("INSERT INTO User(UserName, UserDateOfBirth, UserEmail, UserLogin, UserPassword) VALUES(:UserName,:UserDateOfBirth,:UserEmail,:UserLogin,:UserPassword)");
    QueryInsertData.bindValue(":UserName",ui->lineEdit->text());
    QueryInsertData.bindValue(":UserDateOfBirth",ui->lineEdit_2->text());
    QueryInsertData.bindValue(":UserEmail",ui->lineEdit_3->text());
    QueryInsertData.bindValue(":UserLogin",ui->lineEdit_4->text());
    QueryInsertData.bindValue(":UserPassword",ui->lineEdit_5->text());
    if(QueryInsertData.exec())
    {
        QMessageBox::information(this, "SUCCESS", "YOUR REGISTRATION HAS PASSED!");
    }
    QSqlDatabase::database().commit();
    DataBase.close();

}
void Registration::on_pushButton_clicked()
{
    mainik = new MainWindow(nullptr);
    mainik->show();
    close();
}

