#ifndef SEARCH_H
#define SEARCH_H

#include <QWidget>
#include <QPushButton>
#include <QSqlTableModel>
#include <QSqlRecord>
#include <QMessageBox>
#include <QSqlQuery>
#include <QTcpSocket>
#include <QHostAddress>
#include <QTimer>
#include "widget_upload.h"
#include "widget_change.h"

namespace Ui {
class Search;
}

class Search : public QWidget
{
    Q_OBJECT

public:
    explicit Search(QWidget *parent = nullptr);
    void hide_button();
    ~Search();
    void judge_user();
    void dealupload();
    void change();
    void dealchange();

private slots:
    void on_pushButton_upload_clicked();

    void on_pushButton_sure_clicked();

    void on_pushButton_delete_clicked();

    void on_Button_search_clicked();

    void on_pushButton_musername_clicked();

    void on_pushButton_mpassword_clicked();

private:
    Ui::Search *ui;
    QSqlTableModel *model;
    Widget_upload ui_upload;
    widget_change ui_change;
    QTimer timer;
    QByteArray buf;
};

#endif // SEARCH_H
