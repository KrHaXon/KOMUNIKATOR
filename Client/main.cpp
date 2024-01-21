//#include "mainwindow.h"
#include "secondwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Registration r;
    MainWindow mw;
    secondwindow w(nullptr, &r, &mw);
    w.show();
    return a.exec();
}
