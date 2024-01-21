#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QString>
#include <QSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QtSql/QtSql>
#include "registration.h"
#include "mainwindow.h"

class Registration;
class MainWindow;

QT_BEGIN_NAMESPACE
namespace Ui { class secondwindow; }
QT_END_NAMESPACE

class secondwindow : public QMainWindow
{
    Q_OBJECT

public:
    secondwindow(QWidget *parent = nullptr, Registration *reg = nullptr, MainWindow *siema = nullptr);
    ~secondwindow();

private slots:
    void on_LoginButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::secondwindow *ui;
    QSqlDatabase DB_Connection;
    Registration *regis = nullptr;
    MainWindow *xd = nullptr;
};
#endif // SECONDWINDOW_H
