#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QWidget>
#include "secondwindow.h"
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QtSql/QtSql>
#include <QMessageBox>
#include "secondwindow.h"
#include <QFile>
class secondwindow;
namespace Ui {
class Registration;
}

class Registration : public QWidget
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr, secondwindow *log = nullptr);
    ~Registration();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Registration *ui;
    QSqlDatabase DataBase;
    secondwindow *logowanie;
};

#endif // REGISTRATION_H
