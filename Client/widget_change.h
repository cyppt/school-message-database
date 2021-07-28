#ifndef WIDGET_CHANGE_H
#define WIDGET_CHANGE_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QTcpSocket>
#include <QHostAddress>
#include <QTimer>

namespace Ui {
class widget_change;
}

class widget_change : public QWidget
{
    Q_OBJECT

signals:
    void success();

public:
    explicit widget_change(QWidget *parent = nullptr);
    ~widget_change();

private slots:
    void on_button_concrete_clicked();

    void on_button_quit_clicked();

private:
    Ui::widget_change *ui;
    QTimer timer;
    int registerFlag = 0;
    QString user;
    QString pwd;
    QString pwd_s;
};

#endif // WIDGET_CHANGE_H
