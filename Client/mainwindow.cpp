#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ChatItemWidget.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),m_windowAddFriend(new addFriend(nullptr))
{
    ui->setupUi(this);
    ui->centralwidget->setEnabled(true);

    connect(m_windowAddFriend, &addFriend::friendAdded, this, &MainWindow::onFriendAdded);
    connect(m_windowAddFriend, &addFriend::friendDeleted, this, &MainWindow::onFriendDeleted);

    QFile file("\Style.qss");
    file.open(QFile::ReadOnly);
    QString styleSheet = QLatin1String(file.readAll());
    setStyleSheet(styleSheet);

    DB_Connection=QSqlDatabase::addDatabase("QSQLITE");
    DB_Connection.setDatabaseName("\Bazy danych0.db");
    if(DB_Connection.open())
    {
        qDebug() << "DATABASE IS CONNECTED";
    }
    else
    {
        qDebug() << "DATABASE IS NOT CONNECTED - ERROR";
    }
    ui->btnSend->setEnabled(false);
    ui->ourName->setReadOnly(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::getSlot(const QString &name){
    return name;
}

void MainWindow::onFriendAdded(const QString &friendName){
    addFriendToList(friendName);
}

void MainWindow::onFriendDeleted(const QString &friendName){
    deleteFriendFromList(friendName);
}

void MainWindow::deleteFriendFromList(const QString &name){
    QString userId = getId();
    QString friendName = name;
    QString friendId = getFriendId(friendName);

    QSqlQuery insertFriend;
    insertFriend.prepare("DELETE FROM Friends WHERE (Friend1 = :userId AND Friend2 = :friendId)");
    insertFriend.bindValue(":userId", userId);
    insertFriend.bindValue(":friendId", friendId);
    insertFriend.exec();
    insertFriend.next();
    qDebug()<< userId;
    qDebug()<< friendId;
    QList<QListWidgetItem*> items = ui->listWidget->findItems(friendName, Qt::MatchExactly);
    for(int i = 0; i < items.size(); ++i)
    {
        delete ui->listWidget->takeItem(ui->listWidget->row(items[i]));
    }


}

void MainWindow::addFriendToList(const QString &name){
    QString userId = getId();
    QString friendName = name;
    QString friendId = getFriendId(friendName);

    QSqlQuery insertFriend;
    insertFriend.prepare("INSERT INTO Friends (Friend1, Friend2) VALUES (:userId, :friendId)");
    insertFriend.bindValue(":userId", userId);
    insertFriend.bindValue(":friendId", friendId);
    if(insertFriend.exec()){
      ui->listWidget->addItem(QString(friendName));
    }



}

void MainWindow::on_actionChange_Picture_triggered(){
    QPixmap path = QFileDialog::getSaveFileName(this, "Wskaż plik", "", "Plik PNG (*.png)");
    QFile m_File("obraz.bin");
    m_File.open(QIODevice::WriteOnly);
    path.save(&m_File, "PNG");
    m_File.close();

    m_File.open(QIODevice::ReadOnly);
    QByteArray data = m_File.readAll();

        if (QSqlDatabase::database().transaction()) {
            qDebug() << "Transaction started";
            QSqlQuery QueryInsertData(DB_Connection);
            if (m_File.isOpen()) {
                qDebug() << "File opened";
                if (!data.isNull()) {
                    qDebug() << "Data read";
                    qDebug() << data.size();
                    QueryInsertData.prepare("UPDATE User SET UserPicture =:data WHERE UserLogin = :name");
                    QString name = SecondWindow->getName();
                    QueryInsertData.bindValue(":name", name);
                    QueryInsertData.bindValue(":data", data);
                    qDebug() << "Query prepared";
                    if (QueryInsertData.exec()) {
                        qDebug() << "Query executed";
                        qDebug() << "WOOOORKS";
                    }
                    else {
                        qDebug() << "Query failed";
                        qDebug() << QueryInsertData.lastError().text();
                        qDebug() << "NOT";
                    }
                }
                else {
                    qDebug() << "Data null";
                }
                m_File.close();
            } else {
                qDebug() << "File not opened";
                qDebug() << m_File.errorString();
            }
            QSqlDatabase::database().commit();
        } else {
            qDebug() << "Transaction failed";
        }

        QPixmap map;
        QSqlQuery QueryGetUser;
        QueryGetUser.prepare("SELECT UserPicture FROM User where UserLogin=:login");
        QString name = SecondWindow->getName();
        QueryGetUser.bindValue(":login", name);
        QueryGetUser.exec();
        QueryGetUser.next();

        QByteArray datas = QueryGetUser.value("UserPicture").toByteArray();
        if (map.loadFromData(datas, "PNG")) {
            qDebug() << "Image loaded from data";
            map = map.scaled(100, 100, Qt::KeepAspectRatio);
            ui->picture->setPixmap(map);
        }
        else
        {
            qDebug() << "Image not loaded from data";
        }


}

void MainWindow::on_actionConnect_triggered()
{
    _client = new ClientManager();

    connect(_client, &ClientManager::disconnected, [this](){
        qDebug() << "Dissconnected";
    });
    connect(_client, &ClientManager::dataRecived, this, &MainWindow::dataReceived);
    _client->connectToServer(ui->ipText->toPlainText());
    connect(_client, &ClientManager::connected, [this](){
        QMessageBox::information(this, "Server", "Successfully connected");


    QString userId = getId();

    QSqlQuery query;
    query.prepare("SELECT u.UserName FROM User u JOIN Friends f ON u.ID = f.Friend2 WHERE f.Friend1 =:id");
    query.bindValue(":id", userId);
    if (query.exec()) {
        while (query.next()) {
            QString value = query.value(0).toString();
            qDebug() << value;
            ui->listWidget->addItem(QString(value));

        }
    } else {
       qDebug() << "Zapytanie nie powiodło się:" << query.lastError();
    }

    QString idToJoin = 0;
    ui->pushButton->setEnabled(true);
    _client->sendMessage(userId, idToJoin);

    QPixmap map;
    QSqlQuery QueryGetUser;
    QueryGetUser.prepare("SELECT UserPicture FROM User where UserLogin=:login");
    QString name = SecondWindow->getName();
    QueryGetUser.bindValue(":login", name);
    QueryGetUser.exec();
    QueryGetUser.next();

        QByteArray data = QueryGetUser.value("UserPicture").toByteArray();
        if (map.loadFromData(data, "PNG")) {
            qDebug() << "Image loaded from data";
            map = map.scaled(100, 100, Qt::KeepAspectRatio);
            ui->picture->setPixmap(map);
        }
        else
        {
            qDebug() << "Image not loaded from data";
        }
    QSqlQuery getRealName;
    getRealName.prepare("SELECT UserName from User where UserLogin=:name");
    getRealName.bindValue(":name", name);
    getRealName.exec();
    getRealName.next();
    QString realName = getRealName.value(0).toString();
    ui->ourName->setText(QString("Your name: " + realName));
 });
}

QString MainWindow::getId(){
    QString name = SecondWindow->getName();
    QSqlQuery getId;
    getId.prepare("SELECT ID from User where UserLogin=:name");
    getId.bindValue(":name", name);
    getId.exec();
    getId.next();
    QString userId = getId.value(0).toString();
    return userId;
}

QString MainWindow::getFriendId(QString name){
    QString friendName = name;
    QSqlQuery getFriendId;
    getFriendId.prepare("SELECT ID from User where UserName=:name");
    getFriendId.bindValue(":name", name);
    getFriendId.exec();
    getFriendId.next();
    QString friendId = getFriendId.value(0).toString();
    return friendId;
}

void MainWindow::dataReceived(QByteArray data, QString user)
{
    auto chatWidget = new ChatItemWidget(this);
    chatWidget->setMessage(data, user);
    auto listItemWidget = new QListWidgetItem();
    listItemWidget->setSizeHint(QSize(0,65));
    ui->lstMessages->addItem(listItemWidget);
    listItemWidget->setBackground(QColor(165,255,230));
    ui->lstMessages->setItemWidget(listItemWidget,chatWidget);
}


void MainWindow::on_btnSend_clicked()
{
    auto message = ui->inMessage->text().trimmed();
    _client->sendMessage(message, SecondWindow->getName());
    ui->inMessage->setText("");
    auto chatWidget = new ChatItemWidget(this);
    chatWidget->setMessage(message, SecondWindow->getName(), true);
    auto listItemWidget = new QListWidgetItem();
    listItemWidget->setSizeHint(QSize(0,65));
    ui->lstMessages->addItem(listItemWidget);
    listItemWidget->setBackground(QColor(155,222,255));
    ui->lstMessages->setItemWidget(listItemWidget,chatWidget);
}

void MainWindow::on_pushButton_clicked()
{
    m_windowAddFriend->show();
}

void MainWindow::on_listWidget_itemClicked(QListWidgetItem *item)

{
    _client = new ClientManager();
    connect(_client, &ClientManager::dataRecived, this, &MainWindow::dataReceived);
    ui->btnSend->setEnabled(true);
    _client->connectToServer(ui->ipText->toPlainText());
    _client->sendMessage(getId(),getFriendId(item->text()));
    ui->lstMessages->addItem(QString("Now you are texting to: "+ item->text()));
}

