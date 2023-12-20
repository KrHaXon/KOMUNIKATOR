#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db_connection=QSqlDatabase::addDatabase("QSQLITE");//to dorobic
    db_connection.setDatabaseName("Bazy danych");
    db_connection.open();
}

MainWindow::~MainWindow()
{
    delete ui;
}
