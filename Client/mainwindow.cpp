#include "mainwindow.h"
#include "cglobal.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mywindow = this;
    tcpSocket = new QTcpSocket(this);
    QLineEdit q;
    ui->label_title->setText("欢迎登录校园生活信息库查询系统");
    ui->label_username->setText("用户名：");
    ui->label_password->setText("密码：");


    ui->labeljw->setText("友情链接");
    ui->labeljwc->setText("<h1><a href=\"http://jwc.bit.edu.cn/\">教务处</a></h1>");
    ui->labeljwc->setOpenExternalLinks(true);


    connect(ui->button_resign, &QPushButton::released, this, &MainWindow::resign);
    connect(&ui_resign, &Widget_resign::success, this, &MainWindow::dealResign);
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
     //TCP
     // 先建立连接，可以让注册有连接
    // 获取服务器 ip 和端口
    ip = ui->lineEditIP->text();
    port = ui->lineEditPort->text().toInt();
   // QMessageBox::information(this,"提示",QString("%1:%2").arg(ip).arg(port).toUtf8().data());
    // 主动和服务器建立连接

    connect(&timer,&QTimer::timeout,    //等待通信
            [=]()
            {
                timer.stop();
                tcpSocket->write(usermsg.toUtf8());
                connect(tcpSocket,&QTcpSocket::readyRead,
                        [=]()
                        {
                              // 获取对方发送的内容
                              QByteArray buf = tcpSocket->readAll();
                              loginFlag = QString(buf).toInt();
             //                  QMessageBox::information(this, "提示", buf, QMessageBox::Ok);
                              if (loginFlag)
                              {
                                  SearchWindow.show();
                                  this->hide();
                              }
                              else  QMessageBox::information(this, "提示", "登入失败！用户名或密码错误！", QMessageBox::Ok);
                        }
                        );
            }
            );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button_login_clicked()
{
   // SearchWindow.show();   // test Client
    tcpSocket->disconnect();
    tcpSocket->close();
    tcpSocket = new QTcpSocket(mywindow);
    // 获取服务器 ip 和端口
    ip = ui->lineEditIP->text();
    port = ui->lineEditPort->text().toInt();
   // QMessageBox::information(this,"提示",QString("%1:%2").arg(ip).arg(port).toUtf8().data());
    // 主动和服务器建立连接
    tcpSocket->connectToHost(QHostAddress(ip),port);
//    QString temp = QString("%1:%2").arg(tcpSocket->peerAddress().AnyIPv4).arg(tcpSocket->peerPort());
//    QMessageBox::information(this, "提示", temp, QMessageBox::Ok);
    if (tcpSocket == NULL)
    {
      QMessageBox::information(this, "提示", "连接失败", QMessageBox::Ok);
       return;
    }
   // 发送数据
   username = ui->lineEdit_username->text();
   QString password = ui->lineEdit_password->text();
   usermsg = QString("%1##%2##%3").arg(username).arg(password).arg("0"); // 组包  最后一位表示操作 登录
   timer.start(20);
//   tcpSocket->write(usermsg.toUtf8());
//   connect(tcpSocket,&QTcpSocket::readyRead,
//           [=]()
//           {
//                 // 获取对方发送的内容
//                 QByteArray buf = tcpSocket->readAll();
//                 loginFlag = QString(buf).toInt();
////                  QMessageBox::information(this, "提示", buf, QMessageBox::Ok);
//                 if (loginFlag)
//                 {
//                     SearchWindow.show();
//                     this->hide();
//                 }
//                 else  QMessageBox::information(this, "提示", "登入失败！用户名或密码错误！", QMessageBox::Ok);
//           }
//           );

}
void MainWindow::resign()
{
    ui_resign.show();
    //this->hide();
}
void MainWindow::dealResign()
{
    ui_resign.close();
    show();
}

void MainWindow::on_lineEditIP_textChanged(const QString &arg1)
{
    ip = arg1;
    ip = ui->lineEditPort->text();
}

void MainWindow::on_lineEditPort_textChanged(const QString &arg1)
{
    port = arg1.toInt();
    port = ui->lineEditPort->text().toInt();
}
