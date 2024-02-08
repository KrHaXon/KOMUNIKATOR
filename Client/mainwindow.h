#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ClientManager.h"
#include "secondwindow.h"
#include <QSql>
#include <QSqlDatabase>
#include <QListWidget>
#include <QSqlQuery>
#include <QtSql/QtSql>
#include "addFriend.h"
#include <QFile>
#include <QDataStream>
#include <QFileDialog>
#include <QByteArray>

class secondwindow;
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setSecondWindow(secondwindow *window) { SecondWindow = window; }
    secondwindow *getSecondWindow() const { return SecondWindow; }

private slots:
    void on_actionConnect_triggered();
    void on_actionChange_Picture_triggered();
    void dataReceived(QByteArray data, QString user);
    void on_btnSend_clicked();
    QString getSlot(const QString &name);
    void onFriendAdded(const QString &friendName);
    void onFriendDeleted(const QString &friendName);
    void on_pushButton_clicked();

    void on_listWidget_itemClicked(QListWidgetItem *item);

private:

    Ui::MainWindow *ui;
    ClientManager *_client;
    secondwindow *SecondWindow;
    QSqlDatabase DB_Connection;
    addFriend *m_windowAddFriend;
    void addFriendToList(const QString &friendName);
    void deleteFriendFromList(const QString &friendName);
    QString getId();
    QString getFriendId(QString name);


};
#endif // MAINWINDOW_H
