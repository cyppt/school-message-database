#include "mainwindow.h"
#include "database.h"
#include "cglobal.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>

#define op_login 0
#define op_search 1
#define search_abstract 0
#define search_content 1
#define op_register 2
#define op_filerecv 3

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mywindow = this;

    ui->label_title->setText("欢迎登录校园生活信息库查询系统");
    ui->label_username->setText("用户名：");
    ui->label_password->setText("密码：");


    ui->labeljw->setText("友情链接");
    ui->labeljwc->setText("<h1><a href=\"http://jwc.bit.edu.cn/\">教务处</a></h1>");
    ui->labeljwc->setOpenExternalLinks(true);
    ui->textEdit->hide();

    //登录
        connect(ui->button_login, &QPushButton::released, this, &MainWindow::deal);
        connect(ui->button_resign, &QPushButton::released, this, &MainWindow::resign);
        connect(&ui_resign, &Widget_resign::success, this, &MainWindow::dealResign);
    //获取用户名、密码
        ui->lineEdit_password->setEchoMode(QLineEdit::Password);

    //预备连接数据库
        qDebug()<<QSqlDatabase::drivers();
           QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
           db.setPort(sqlport);
           db.setHostName("localhost");
           db.setUserName("root");
           db.setPassword("123456");
           db.setDatabaseName("mydb");
           if(!db.open())
           {
               qDebug()<<"ConnectFailed";
               //QMessageBox::warning(this,"错误",db.lastError().text());
           }


           // TCP网络通信
           tcpServer = new QTcpServer(this);
           username = new QString;
           password = new QString;

           tcpServer->listen(QHostAddress::Any,8888);
           connect(tcpServer,&QTcpServer::newConnection,
                   [=]()
                   {
                       // 取出建立好连接的通信socket
                       tcpSocket = tcpServer->nextPendingConnection();

                        //显示对方ip地址 和 port
//                       QString ip = tcpSocket->peerAddress().toString();
//                       qint16 port = tcpSocket->peerPort();
//                       QString temp = QString("[%1:%2]:成功连接").arg(ip).arg(port);
//                       QMessageBox::information(this, "提示", temp, QMessageBox::Ok);
                       connect(tcpSocket,&QTcpSocket::readyRead,
                               [=]()
                               {
                                     // 从通信套接字取出内容
                                     QByteArray buf = tcpSocket->readAll();
                                     if (isStrat == false)
                                     {
                                         qint64 len = file->write(buf);
                                         recvSize += len;

                                         if (recvSize == fileSize)
                                         {
                                             file->close();
                                             isStrat = true;
                                             ui->textEdit->append("文件接收完成！");
                                         }
                                         else if (len <= 0)
                                         {
                                             file->close();
                                             isStrat = true;
                                             ui->textEdit->append("文件接收失败！");
                                         }
                                     }
                                     else
                                     {
                                         ui->textEdit->append(QString(buf));
                                       //QMessageBox::information(this, "提示", buf, QMessageBox::Ok);
                                       *username = QString(buf).section("##",0,0);  // 拆包
                                       *password = QString(buf).section("##",1,1);
                                       int op = QString(buf).section("##",2,2).toInt();
                                       switch(op)
                                       {
                                       case op_login:
                                           check_user();
                                           break;
                                       case op_search:
                                           search(password->toInt());
                                           break;
                                       case op_register:
                                           register_user();
                                           break;
                                       case op_filerecv:
                                           file_recv();
                                           break;
                                       default:
                                           break;
                                       }
                                     }
                               }
                               );
                   }
                   );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::deal()
{
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
    *username = ui->lineEdit_username->text();
    *password = ui->lineEdit_password->text();
    //qDebug() << username << password;
    if((!username->isEmpty())&&(!password->isEmpty())){
        database* pdb = database::getDatabaseInstence();
        //从mydb的user表中查询
        bool ret1 = pdb->findUser(*username);
        if(ret1){
            bool ret2 = pdb->judge(*username, *password);
            if(ret2){
                loginFlag=1;
            }
            else{
                loginFlag=0;
                QMessageBox::information(this, "提示", "登入失败！密码错误", QMessageBox::Ok);
            }
        }
        else{
            QMessageBox::information(this, "提示", "登入失败！未注册，请先注册", QMessageBox::Ok);
        }
        if (loginFlag) {
            SearchWindow.show();
            this->hide();
            }
        else {};    
    }
}

void MainWindow::check_user()
{
    if((!username->isEmpty())&&(!password->isEmpty()))
    {
        database* pdb = database::getDatabaseInstence();
        bool ret1 = pdb->findUser(*username);
        if(ret1)
        {
            bool ret2 = pdb->judge(*username, *password);
            if(ret2)
            {
                QString str = "1"; //loginSuccess
                tcpSocket->write(str.toUtf8().data());
            }
            else
            {
                QString str = "0";  //loginFail
                tcpSocket->write(str.toUtf8().data());
            }
        }
        else
        {
            QString str = "0";  //loginFail
            tcpSocket->write(str.toUtf8().data());
        }
        }
}

void MainWindow::register_user()
{
    QString i= QString("insert into user (username,password,power) values ('%1','%2',0); ").arg(*username).arg(*password);
    QString S = QString("select * from user where username='%1' ").arg(*username);
    QSqlQuery query;
    QString registerFlag;
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

    if(query.exec(S)&&query.first())
    {
        registerFlag = "1";  //用户名重复
        tcpSocket->write(registerFlag.toUtf8().data());
    }
    else if(query.exec(i))
        {
         registerFlag = "2";  //注册成功
         tcpSocket->write(registerFlag.toUtf8().data());
        }
     else
     {
        registerFlag = "3";  //服务端数据库注册失败
        tcpSocket->write(registerFlag.toUtf8().data());
     }
}

void MainWindow::file_recv()
{
    file = new QFile;
    isStrat = true;
    if (isStrat == true)
    {
        isStrat = false;
        fileName = *username;
        fileSize = password->toInt();
        recvSize = 0;
        file->setFileName(fileName);
        bool isOK = file->open(QIODevice::WriteOnly);
        if (isOK == false)
        {
            qDebug()<< "write only error 40";
        }
          ui->textEdit->append("文件头接收完成！");
          ui->textEdit->append(fileName);
          ui->textEdit->append(*password);
    }
}

void MainWindow::search(bool searchFlag)
{
     QString tagneed = *username;
     QString content;
     QSqlQuery query;
     QString sqlmsg = "";
     QSqlDatabase db;
     int nullFlag;
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
            // else qDebug() << "open";
     if(searchFlag == search_abstract)  // 检索大概
     {
          content = QString("SELECT tag.tagname,thing.title FROM tag INNER JOIN thing ON tag.idofthing=thing.number WHERE tagname='%1'").arg(tagneed);
          int n = query.exec(content);
          nullFlag = 1;
          if(!n)
          {
              sqlmsg = "暂时没有相关内容\n";
              tcpSocket->write(sqlmsg.toUtf8().data(),content.length());
          }
          while (query.next())
          {
              nullFlag = 0;
              qDebug() << query.value(0).toInt() << query.value(1).toString() << query.value(2).toString();
              sqlmsg = QString("%1\n%2\n%3\n").arg(sqlmsg).arg(query.value(0).toString()).arg(query.value(1).toString());
          }
          if(nullFlag) sqlmsg = "暂时没有相关内容\n";
          tcpSocket->write(sqlmsg.toUtf8().data(),content.length());
          sqlmsg = "";
     }
//     else if(searchFlag == search_content)   // 查看详细信息
//     {
//          content = QString("SELECT tag.tagname,thing.title,thing.content FROM tag INNER JOIN thing ON tag.idofthing=thing.number WHERE tagname='%1'").arg(tagneed);
//          query.exec(content);
//          while (query.next())
//          {
//               sqlmsg = QString("%1\n%2\n%3\n").arg(query.value(0).toString()).arg(query.value(1).toString()).arg(query.value(2).toString());
//               tcpSocket->write(sqlmsg.toUtf8().data(),content.length());
//          }
//     }
     else
     {
         sqlmsg = "查询失败!";
         tcpSocket->write(sqlmsg.toUtf8().data(),content.length());
     }
}

void MainWindow::resign()
{
    ui_resign.show();
    this->hide();
}
void MainWindow::dealResign()
{
    ui_resign.close();
    show();
}

