#ifndef CHATITEMWIDGET_H
#define CHATITEMWIDGET_H

#include <QWidget>
#include <QDateTime>

namespace Ui {
class ChatItemWidget;
}

class ChatItemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ChatItemWidget(QWidget *parent = nullptr);
    ~ChatItemWidget();
    void setMessage(QString message, QString user, bool isMyMessage = false);

private:
    Ui::ChatItemWidget *ui;
};

#endif // CHATITEMWIDGET_H
