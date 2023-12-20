#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    DB_Connection=QSqlDatabase::addDatabase("QSQLITE");//to dorobic
    DB_Connection.setDatabaseName("Bazy danych");
    DB_Connection.open();
}

MainWindow::~MainWindow()
{
    delete ui;
}
