#include "widget_upload.h"
#include "ui_widget_upload.h"
#include "cglobal.h"

Widget_upload::Widget_upload(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget_upload)
{
    ui->setupUi(this);
    ui->buttonSend->setEnabled(false);
    ui->progressBar->reset();
    file = new QFile;
    connect(&timer,&QTimer::timeout,
            [=]()
           {
              timer.stop();
              sendData();
           }
            );
}

Widget_upload::~Widget_upload()
{
    delete ui;
}

void Widget_upload::fanhui()
{

}


void Widget_upload::on_buttonFile_clicked()
{
    tcpSocket->disconnect();
    tcpSocket->close();
    tcpSocket = new QTcpSocket(mywindow);
    // 主动和服务器建立连接
    tcpSocket->connectToHost(QHostAddress(ip),port);
    QString filepath = QFileDialog::getOpenFileName(this, "open", "../");
    if (filepath.isEmpty() == false)
    {
        fileName.clear();
        fileSize = 0;
        QFileInfo info(filepath);
        fileName = info.fileName();
        fileSize = info.size();
        ui->lineEdit_size->setText(QString("%1 KB").arg(int(fileSize/1024)));
        ui->progressBar->setRange(0,fileSize);
        file->setFileName(filepath);
        bool isOK = file->open(QIODevice::ReadOnly);
        if (isOK == false)
        {
          qDebug() << "只读方式打开文件失败 77";
          ui->textEdit->append("open fail");
        }
        ui->textEdit->append(filepath);
        ui->buttonSend->setEnabled(true);
        ui->buttonFile->setEnabled(false);
    }
    else
    {
        QMessageBox::information(this,"error","选择文件路径为空");
    }
}

void Widget_upload::on_buttonSend_clicked()
{
    QString head = QString("%1##%2##%3").arg(fileName).arg(fileSize).arg("3");// 组包  最后一位表示操作 上传
    ui->textEdit->append(head);
    qint64 len = tcpSocket->write(head.toUtf8());
    if (len > 0) // 头部信息发送成功
    {
          // 防止TCP黏包
          timer.start(20);
    }
    else
    {
        QMessageBox::information(this,"error","头部信息发送失败");
        ui->textEdit->append("头部信息发送失败");
        ui->textEdit->append(head);
        file->close();
        ui->buttonFile->setEnabled(true);
        ui->buttonSend->setEnabled(false);
    }
}

void Widget_upload::sendData()
{
    qint64 len = 0;
    do
    {
        char buf[4*1024] = {0};
        len = file->read(buf,sizeof(buf));
        len = tcpSocket->write(buf,len);
       // ui->textEdit->append(QString(buf).toUtf8());
        sendSize += len;
        ui->lineEdit_progress->setText(QString("%1 KB").arg(int(sendSize/1024)));
        ui->progressBar->setValue(sendSize);
    } while(len > 0);

    if (sendSize == fileSize)
    {
        ui->textEdit->append("发送完毕");
        file->close();
    }
    else
    {
        ui->textEdit->append("发送失败");
        file->close();
    }
    ui->buttonFile->setEnabled(true);
    ui->buttonSend->setEnabled(false);
}

void Widget_upload::on_pushButton_2_clicked()
{
    emit fanhui();
    this->close();
}
