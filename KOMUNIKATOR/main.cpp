#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Registration r;
    MainWindow w(nullptr, &r);
    w.show();
    return a.exec();
}
