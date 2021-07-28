#include "search.h"
#include "ui_search.h"
#include "cglobal.h"

Search::Search(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Search)
{
    ui->setupUi(this);
    setWindowTitle("校园生活信息库 ver 1.0");
    ui->label_id->setText("ID:");
    ui->label_user->setText("用户名：");
    ui->label_id->hide();
    ui->label_idcard->hide();
    ui->label_user->hide();
    ui->label_username->hide();
    //ui->label_username->setText(mywindow->username);
    ui->label_profile->setPixmap(QPixmap("//获取头像"));
    ui->pushButton_mpassword->hide();
    connect(ui->pushButton_musername, &QPushButton::released, this, &Search::change);
    connect(ui->pushButton_mpassword, &QPushButton::released, this, &Search::change);
    connect(&ui_change, &widget_change::success, this, &Search::dealchange);
    //hide_button();
    //G_如何获取用户权限？？
    model = new QSqlTableModel(this);
    judge_user();//G_我不知道这个model和函数里的model是不是一个model

    model->setTable("");//指定表

    ui->tableView->setModel(model);

    model->select();
    connect(&ui_upload, &Widget_upload::fanhui, this, &Search::dealupload);
    connect(&timer,&QTimer::timeout,    //等待通信
            [=]()
            {
                timer.stop();
                buf = tcpSocket->readAll();
                QString temp = QString(buf);
                if (temp == "") temp = "暂时没有相关内容";
               //QMessageBox::warning(NULL,"Error",QString(buf));
               ui->textEdit->append(buf);
              // QMessageBox::information(this,"check",buf);
              //莫名没有readyread 信号
                connect(tcpSocket,&QTcpSocket::readyRead,
                        [=]()
                        {
                              // 获取对方发送的内容
                               buf = tcpSocket->readAll();
                               QString temp = QString(buf);
                               if(temp.isEmpty()) temp = "查询结果为空!";
                              //QMessageBox::warning(NULL,"Error",QString(buf));
                              ui->textEdit->append(buf);
                              QMessageBox::information(this,"check",buf);
                        }
                        );
            }
            );

}

Search::~Search()
{
    delete ui;
}

//void Search::hide_button()
//{
//    ui->ButtonAns1->hide();
//    ui->ButtonAns2->hide();
//    ui->ButtonAns3->hide();
//    ui->ButtonAns4->hide();
//    ui->ButtonAns5->hide();
//    ui->ButtonAns6->hide();
//    ui->ButtonAns7->hide();
//    ui->ButtonAns8->hide();
//    ui->ButtonAns9->hide();
//    ui->ButtonAnsA->hide();
//    ui->ButtonAnsB->hide();
//    ui->ButtonLast->hide();
//    ui->ButtonNext->hide();
//}

void Search::judge_user()
{
    int k = 0;
    k = 0;//get用户权限 administrator为0 user为1
    if(k == 0)
    {
        ui->pushButton_administrator->hide();
        ui->widget_administrator->hide();
        ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    }else {
       model->setEditStrategy(QSqlTableModel::OnFieldChange);
    }
}


void Search::on_pushButton_upload_clicked()
{
    ui_upload.show();
}

void Search::on_pushButton_sure_clicked()
{
    model->submitAll();
}

void Search::on_pushButton_delete_clicked()
{
    QItemSelectionModel *sModel = ui->tableView->selectionModel();
    QModelIndexList list = sModel->selectedRows();
    for(int i = 0; i < list.size(); i++)
    {
        model->removeRow(list.at(i).row());
    }
}

void Search::on_Button_search_clicked()
{
    QString str = ui->lineEdit_earch->text();
//    QString str1 = QString("name = '%1'").arg(str);
//    model->setFilter(str);
//    model->select();
    tcpSocket->disconnect();
    tcpSocket->close();
    tcpSocket = new QTcpSocket(this);
    // 主动和服务器建立连接
    tcpSocket->connectToHost(QHostAddress(ip),port);
    if (tcpSocket == NULL)
    {
      QMessageBox::information(this, "提示", "连接失败,请退出程序重新尝试", QMessageBox::Ok);
       return;
    }
    QString usermeg = QString("%1##%2##%3").arg(str).arg("0").arg("1"); // 组包  最后一位表示操作 查找,倒数第二位表示显示大概
    tcpSocket->write(usermeg.toUtf8());
    timer.start(200);
}

void Search::dealupload()
{
    ui_upload.close();
}

void Search::dealchange()
{
    ui_change.close();
}

void Search::change()
{
    ui_change.show();
}

void Search::on_pushButton_musername_clicked()
{

}

void Search::on_pushButton_mpassword_clicked()
{

}
