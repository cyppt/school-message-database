#include "mainwindow.h"
#include "search.h"
//#define sqlport 3307

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
