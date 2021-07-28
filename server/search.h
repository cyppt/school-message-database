#ifndef SEARCH_H
#define SEARCH_H

#include <QWidget>
#include <QMessageBox>
#include <QSqlQuery>
#include <QTcpSocket>
#include <QTimer>
#include <QSqlTableModel>
#include <QTableView>
#include <change.h>

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
    QString tagneed;


private slots:
    void on_ButtonSearch_clicked();
    void change1();
    void dealchange1();
    void on_pushButton_clicked();

private:
    Ui::Search *ui;
    QSqlTableModel *model;
    change ui_change;
};

#endif // SEARCH_H
