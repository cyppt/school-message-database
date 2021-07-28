#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QPainter>
#include <QEvent>
#include <QString>
#include <QDebug>
#include <QTcpSocket>
#include <QHostAddress>
#include <QTimer>
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
    //void deal();
    void dealResign();
    void resign();
    QString username;

//protected:
//    void paintEvent(QPaintEvent *);


private slots:
    void on_button_login_clicked();
    void on_lineEditIP_textChanged(const QString &arg1);
    void on_lineEditPort_textChanged(const QString &arg1);
private:
    Ui::MainWindow *ui;
    Widget_resign ui_resign;
    int loginFlag = 0;
    Search SearchWindow;
   // QTcpSocket *tcpSocket;
    QTimer timer;
  //  MainWindow* mywindow;
    QString usermsg;
};
#endif // MAINWINDOW_H
