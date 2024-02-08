#include "secondwindow.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Registration r;
    MainWindow mw;
    secondwindow w(nullptr, &r, &mw);

    mw.setSecondWindow(&w);
    w.show();
    return a.exec();
}
