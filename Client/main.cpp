//#include "mainwindow.h"
#include "secondwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Registration r;
    secondwindow w;
    w.show();
    return a.exec();
}
