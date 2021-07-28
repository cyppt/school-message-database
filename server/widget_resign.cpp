#include "widget_resign.h"
#include "ui_widget_resign.h"
#include "cglobal.h"
#define op_register 2

Widget_resign::Widget_resign(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget_resign)
{
    ui->setupUi(this);

    ui->label_title->setText("欢迎注册校园生活信息库查询系统");
    ui->label_username->setText("用户名：");
    ui->label_password->setText("密码：");
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    ui->label_password_sure->setText("确认密码：");
    ui->lineEdit_password_sure->setEchoMode(QLineEdit::Password);

//    //tcpServer->listen(QHostAddress::Any,8888); //已经在监听了  不需要了
//    connect(tcpServer,&QTcpServer::newConnection,
//            [=]()
//            {
//                // 取出建立好连接的通信socket
//                tcpSocket = tcpServer->nextPendingConnection();
//                connect(tcpSocket,&QTcpSocket::readyRead,
//                        [=]()
//                        {
//                              // 从通信套接字取出内容
//                              QByteArray buf = tcpSocket->readAll();
//                              user = QString(buf).section("##",0,0);  // 拆包
//                              pwd = QString(buf).section("##",1,1);
//                              int op = QString(buf).section("##",2,2).toInt();
//                              switch(op)
//                              {
//                              case op_register:
//                                 register_user();
//                                  break;
//                              default:
//                                  break;
//                              }
//                        }
//                        );
//            }
//            );

}

Widget_resign::~Widget_resign()
{
    delete ui;
}

void Widget_resign::on_button_concrete_clicked()
{
    user = ui->lineEdit_username->text();
    pwd = ui->lineEdit_password->text();
    pwd_s = ui->lineEdit_password_sure->text();

    if(user == "")
        QMessageBox::warning(this,"","用户名不能为空！");
    else if(pwd == "")
        QMessageBox::warning(this,"","密码不能为空！");
    else if(pwd != pwd_s)
        QMessageBox::warning(this,"","两次输入密码不同！");
    else
    {
        QString i= QString("insert into user (username,password,power) values ('%1','%2',0); ").arg(user).arg(pwd_s);
        QString S = QString("select * from user where username='%1' ").arg(user);
        QSqlQuery query;

        if(query.exec(S)&&query.first())
            QMessageBox::warning(NULL,"Error","用户名重复！！！");
        else if(query.exec(i))
            {
             QMessageBox::information(NULL, "注册成功", "注册成功！！！", QMessageBox::Yes);

             emit success();
             //login->show();
             this->close();
         }
         else
            QMessageBox::warning(NULL,"Error","注册失败，请重试！！！");
    }
}

//void Widget_resign::register_user()
//{
//    QString i= QString("insert into user (username,password,power) values ('%1','%2',0); ").arg(user).arg(pwd);
//    QString S = QString("select * from user where username='%1' ").arg(user);
//    QSqlQuery query;
//    QString registerFlag;

//    if(query.exec(S)&&query.first())
//    {
//        registerFlag = '1';  //用户名重复
//        tcpSocket->write(registerFlag.toUtf8().data());
//    }
//    else if(query.exec(i))
//        {
//         registerFlag = '2';  //注册成功
//         tcpSocket->write(registerFlag.toUtf8().data());
//        }
//     else
//     {
//        registerFlag = '3';  //服务端数据库注册失败
//        tcpSocket->write(registerFlag.toUtf8().data());
//     }
//}

void Widget_resign::on_button_quit_clicked()
{
   emit success();
}
