#include "widget_change.h"
#include "ui_widget_change.h"
#include "cglobal.h"

widget_change::widget_change(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget_change)
{
    ui->setupUi(this);
    ui->label_title->setText("请重新设置用户名和密码");
    ui->label_username->setText("用户名：");
    ui->label_password->setText("密码：");
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    ui->label_password_sure->setText("确认密码：");
    ui->lineEdit_password_sure->setEchoMode(QLineEdit::Password);
    connect(tcpSocket, &QTcpSocket::connected,
            [=]()
            {
             //QMessageBox::information(NULL, "连接成功", "连接成功！！！", QMessageBox::Yes);

            }
            );
    connect(&timer,&QTimer::timeout,    //等待通信
            [=]()
            {
                timer.stop();
                connect(tcpSocket,&QTcpSocket::readyRead,
                        [=]()
                        {
                              // 获取对方发送的内容
                              QByteArray buf = tcpSocket->readAll();
                              //QMessageBox::warning(NULL,"Error",QString(buf));
                              registerFlag = QString(buf).toInt();
                              if (registerFlag == 1) QMessageBox::warning(NULL,"Error","用户名重复！！！");
                              else if (registerFlag == 2)   QMessageBox::information(NULL, "修改成功", "修改成功！！！", QMessageBox::Yes);
                              else if (registerFlag == 3)  QMessageBox::warning(NULL,"Error","服务端数据库修改失败，请稍后重试！！！");
                              else QMessageBox::warning(NULL,"Error","通信错误！！！");
                        }
                        );
            }
            );
}

widget_change::~widget_change()
{
    delete ui;
}

void widget_change::on_button_concrete_clicked()
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
        tcpSocket->disconnect();
        tcpSocket->close();
        tcpSocket = new QTcpSocket(mywindow);
        // 主动和服务器建立连接
        tcpSocket->connectToHost(QHostAddress(ip),port);
        if (tcpSocket == NULL)
        {
          QMessageBox::information(this, "提示", "连接失败,请退出程序重新尝试", QMessageBox::Ok);
           return;
        }
        //        QString temp = QString("%1:%2").arg(tcpSocket->peerAddress().AnyIPv4).arg(tcpSocket->peerPort());
        //        QMessageBox::information(this, "提示", temp, QMessageBox::Ok);
        QString usermeg = QString("%1##%2##%3").arg(user).arg(pwd).arg("2"); // 组包  最后一位表示操作 注册
        tcpSocket->write(usermeg.toUtf8());
        timer.start(20);
    }
}

void widget_change::on_button_quit_clicked()
{
    emit success();
    this->close();
}
