#ifndef WIDGET_RESIGN_H
#define WIDGET_RESIGN_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QTcpSocket>
#include <QHostAddress>
#include <QTimer>

namespace Ui {
class Widget_resign;
}

class Widget_resign : public QWidget
{
    Q_OBJECT

public:
    explicit Widget_resign(QWidget *parent = nullptr);
    ~Widget_resign();

signals:
    void success();

private slots:
    void on_button_concrete_clicked();

private:
    Ui::Widget_resign *ui;
 //   QTcpSocket *tcpSocket;
    QTimer timer;
    int registerFlag = 0;
    QString user;
    QString pwd;
    QString pwd_s;
};

#endif // WIDGET_RESIGN_H
