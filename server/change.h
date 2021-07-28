#ifndef CHANGE_H
#define CHANGE_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QTcpSocket>
#include <QTimer>

namespace Ui {
class change;
}

class change : public QWidget
{
    Q_OBJECT
signals:
    void success();

public:
    explicit change(QWidget *parent = nullptr);
    ~change();

private slots:
    void on_button_quit_clicked();

    void on_button_concrete_clicked();

private:
    Ui::change *ui;
    QTimer timer;
    int registerFlag = 0;
    QString user;
    QString pwd;
    QString pwd_s;
};

#endif // CHANGE_H
