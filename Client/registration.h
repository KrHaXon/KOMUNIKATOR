#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QWidget>
#include "mainwindow.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QtSql/QtSql>
#include <QMessageBox>
#include "secondwindow.h"
class MainWindow;
namespace Ui {
class Registration;
}

class Registration : public QWidget
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr, MainWindow *mw = nullptr);
    ~Registration();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Registration *ui;
    QSqlDatabase DataBase;
    MainWindow *mainik;
};

#endif // REGISTRATION_H
