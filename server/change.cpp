#include "change.h"
#include "ui_change.h"
#include "database.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include "cglobal.h"

change::change(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::change)
{
    ui->setupUi(this);
    ui->label_title->setText("请重新设置用户名和密码");
    ui->label_username->setText("用户名：");
    ui->label_password->setText("密码：");
    ui->lineEdit_password->setEchoMode(QLineEdit::Password);
    ui->label_password_sure->setText("确认密码：");
    ui->lineEdit_password_sure->setEchoMode(QLineEdit::Password);
}

change::~change()
{
    delete ui;
}

void change::on_button_quit_clicked()
{
    emit success();
    this->close();
}

void change::on_button_concrete_clicked()
{
    user = ui->lineEdit_username->text();
    pwd = ui->lineEdit_password->text();
    pwd_s = ui->lineEdit_password_sure->text();
    QString id = QString("SELECT id from user where username='%1'").arg(*(mywindow->username));
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

            QString idsql = QString("SELECT userID from user where username = '%1'").arg(*(mywindow->username));
                      QSqlQuery query(db);
                      query.prepare(idsql);
                      //query.bindValue(":name",QVariant(name));
                      query.exec();
                      //查询成功
                      if(query.next())
                      {
                          id=query.value(0).toString();
                          qDebug()<<id;
                      }
                      else qDebug()<<"iderror";
    //QMessageBox::information(this,"1",id);
    if(user == "")
        QMessageBox::warning(this,"","用户名不能为空！");
    else if(pwd == "")
        QMessageBox::warning(this,"","密码不能为空！");
    else if(pwd != pwd_s)
        QMessageBox::warning(this,"","两次输入密码不同！");
    else{
        QString name_change=QString("update user set username='%1' where userID='%2';").arg(user).arg(id);
            QString pwd_change=QString("update user set password='%1' where userID='%2';").arg(pwd).arg(id);
            QString S = QString("select * from user where username='%1' ").arg(user);
            QSqlQuery query;
            if(query.exec(S)&&query.first())
                QMessageBox::warning(NULL,"Error","用户名重复！！！");
            else if(query.exec(name_change)&&query.exec(pwd_change)){
                QMessageBox::information(NULL, "修改成功", "修改成功！！！", QMessageBox::Yes);
            }
            else
               QMessageBox::warning(NULL,"Error","修改失败，请重试！！！");
    }
}
