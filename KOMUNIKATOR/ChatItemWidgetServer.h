#ifndef CHATITEMWIDGETSERVER_H
#define CHATITEMWIDGETSERVER_H

#include <QWidget>
#include <QDateTime>

namespace Ui {
class ChatItemWidgetServer;
}

class ChatItemWidgetServer : public QWidget
{
    Q_OBJECT

public:
    explicit ChatItemWidgetServer(QWidget *parent = nullptr);
    ~ChatItemWidgetServer();
    void setMessage(QString message, QString user, bool isMyMessage = false);

private:
    Ui::ChatItemWidgetServer *ui;
};

#endif // CHATITEMWIDGETSERVER_H
