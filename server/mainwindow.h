#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QPainter>
#include <QEvent>
#include <QString>
#include <QDebug>
#include <QTcpServer>
#include <QTcpSocket>
#include <QSqlQuery>
#include <QFile>
#include <QFileDialog>
#include <QFileInfo>
#include "ui_mainwindow.h"
#include "widget_resign.h"
#include "search.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void deal();
    void dealResign();
    void resign();
    QTcpServer *tcpServer = NULL;
    QString *username;
    QString *password;

//protected:
//    void paintEvent(QPaintEvent *);


private slots:


private:
    void check_user();
    void register_user();
    void file_recv();
    void search(bool searchFlag = 0);
    Ui::MainWindow *ui;
    Widget_resign ui_resign;
    bool loginFlag = 0;
    Search SearchWindow;
    QTcpSocket *tcpSocket = NULL;
    QFile *file = NULL;
    QString fileName;
    qint64 fileSize = 0;
    qint64 recvSize = 0;
    bool isStrat = true;
};
#endif // MAINWINDOW_H
