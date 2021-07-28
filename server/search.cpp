#include "search.h"
#include "ui_search.h"

Search::Search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);
    setWindowTitle("校园生活信息库 ver 1.0");
    connect(ui->pushButton, &QPushButton::released, this, &Search::change1);
    connect(&ui_change, &change::success, this, &Search::dealchange1);
    hide_button();
}

Search::~Search()
{
    delete ui;
}

void Search::hide_button()
{
    ui->ButtonAns1->hide();
    ui->ButtonAns2->hide();
    ui->ButtonAns3->hide();
    ui->ButtonAns4->hide();
    ui->ButtonAns5->hide();
    ui->ButtonAns6->hide();
    ui->ButtonAns7->hide();
    ui->ButtonAns8->hide();
    ui->ButtonAns9->hide();
    ui->ButtonAnsA->hide();
    ui->ButtonAnsB->hide();
    ui->ButtonLast->hide();
    ui->ButtonNext->hide();
   // ui->pushButton->hide();
}

void Search::on_ButtonSearch_clicked()
{
    tagneed = ui->lineEditSearch->text();
    if(tagneed == "")
        QMessageBox::warning(this,"","不能空搜索！");
    else
    {
        QString S = QString("SELECT tag.tagname,thing.title FROM tag INNER JOIN thing ON tag.idofthing=thing.number WHERE tagname='%1'").arg(tagneed);
//        QSqlTableModel *model = new QSqlTableModel;
//        QTableView  * view = new QTableView();
//                 view->setModel(model);
//                 view->setEditTriggers(QAbstractItemView::NoEditTriggers); //设置成不可编辑

//        //执行SQL语句：
//        QSqlQuery query = model->query();
//        model->setQuery(S);
        QSqlDatabase db;
                if(QSqlDatabase::contains("qt_sql_default_connection")){
                    db = QSqlDatabase::database("qt_sql_default_connection");
                }
                else{
                    db = QSqlDatabase::addDatabase("QMYSQL","qt_sql_default_connection");
                    qDebug()<<db.connectionNames();
                    db.setHostName("localhost");
                    db.setUserName("root");
                    db.setPassword("123456");
                    db.setDatabaseName("mydb");
                }
                if (!db.open()){
                    qDebug() << "Failed to connect";
                }
                else qDebug() << "open";
        static QSqlQueryModel *model =new QSqlQueryModel(ui->tableView);

        model->setQuery(S);

        model->setHeaderData(0, Qt::Horizontal, tr("标签"));
        model->setHeaderData(1, Qt::Horizontal, tr("词条标题"));
        ui->tableView->setModel(model);
    }
}

void Search::on_pushButton_clicked()
{

}

void Search::dealchange1()
{
    ui_change.close();
}

void Search::change1()
{
    ui_change.show();
}
