#ifndef WIDGET_RESIGN_H
#define WIDGET_RESIGN_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QTcpSocket>
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
    QString user;
    QString pwd;
    QString pwd_s;

signals:
    void success();

private slots:
    void on_button_concrete_clicked();

    void on_button_quit_clicked();

private:
   // void register_user();
    Ui::Widget_resign *ui;
    QTcpSocket *tcpSocket = NULL;
};

#endif // WIDGET_RESIGN_H
