#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ChatItemWidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->centralwidget->setEnabled(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionConnect_triggered()
{
    _client = new ClientManager();
    connect(_client, &ClientManager::connected, [this](){
        ui->centralwidget->setEnabled(true);
    });
    connect(_client, &ClientManager::disconnected, [this](){
        ui->centralwidget->setEnabled(false);
    });
    connect(_client, &ClientManager::dataRecived, this, &MainWindow::dataReceived);
    _client->connectToServer(ui->ipText->toPlainText());
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
    auto user = ui->userText->toPlainText().trimmed();
    _client->sendMessage(message, user);
    ui->inMessage->setText("");

    auto chatWidget = new ChatItemWidget(this);
    chatWidget->setMessage(message, ui->userText->toPlainText(), true);
    auto listItemWidget = new QListWidgetItem();
    listItemWidget->setSizeHint(QSize(0,65));
    ui->lstMessages->addItem(listItemWidget);
    listItemWidget->setBackground(QColor(100,100,230));
    ui->lstMessages->setItemWidget(listItemWidget,chatWidget);
}

