#ifndef CGLOBAL_H
#define CGLOBAL_H
#include <QString>
#include <QTcpSocket>
#include "mainwindow.h"

extern QString ip;
extern qint16 port;
extern QTcpSocket *tcpSocket;
extern MainWindow* mywindow;
extern Ui::MainWindow *myui;
#endif // CGLOBAL_H
