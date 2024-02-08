#ifndef ADDFRIEND_H
#define ADDFRIEND_H

#include <QWidget>
#include <QMainWindow>
#include <QFile>

namespace Ui {
class addFriend;
}

class addFriend : public QWidget
{
    Q_OBJECT

public:
    explicit addFriend(QWidget *parent = nullptr);
    ~addFriend();
signals:
    void friendAdded(const QString &FriendName);
    void friendDeleted(const QString &FriendName);
private slots:
    void on_btnOk_clicked();

    void on_btnDeleteFriend_clicked();

    void on_btnCancel_clicked();

private:
    Ui::addFriend *ui;
};

#endif // ADDFRIEND_H
