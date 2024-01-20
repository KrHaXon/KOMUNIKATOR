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
class Registration;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, Registration *reg = nullptr);
    ~MainWindow();

private slots:
    void on_LoginButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase DB_Connection;
    Registration *regis = nullptr;
};
#endif // MAINWINDOW_H
