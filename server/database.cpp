#include "database.h"

#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDebug>

database::database()
{
}

database *database::getDatabaseInstence()
{
    static database sqldb;
    return &sqldb;
}

bool database::findUser(QString name)
{
    QString sql = QString("select username from user where username = :name;");
    //打开数据库
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
//        if (!db.open()){
//            qDebug() << "Failed to connect";
//        }
//        else qDebug() << "open";
    if(!db.open())
    {
        qDebug() << "open fail" << db.lastError().text();
        exit(-1);
    }

    //执行查询操作
    QSqlQuery query(db);
    query.prepare(sql);
    query.bindValue(":name",QVariant(name));
    query.exec();

    //查询成功
    if(query.next())
    {
        if(name == query.value(0).toString()) //用户存在
        {
           return true;
        }
    }

    //关闭数据库
    db.close();

    return false;
}

//匹配name和pwd
bool database::judge(QString name, QString pwd)
{
    QString sql = QString("select username, password from user where username = :name;");
    //打开数据库
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
//        if (!db.open()){
//            qDebug() << "Failed to connect";
//        }
//        else qDebug() << "open";
    if(!db.open())
    {
        qDebug() << "open fail" << db.lastError().text();
        exit(-1);
    }

    //执行查询操作
    QSqlQuery query(db);
    query.prepare(sql);
    query.bindValue(":name",QVariant(name));
    query.exec();

    //匹配密码
    if(query.next())
    {
        if(!(pwd == query.value(1).toString()))
        {
          return false;
        }
    }

    //关闭数据库
    db.close();

    return true;
}

//插入用户
//bool database::addUser(QString name, QString pwd){
//    QString sql ="insert into user (username,password,power) values(:name,:pwd,0)";

//    QSqlDatabase db;
//        if(QSqlDatabase::contains("qt_sql_default_connection")){
//            db = QSqlDatabase::database("qt_sql_default_connection");
//        }
//        else{
//            db = QSqlDatabase::addDatabase("QMYSQL","qt_sql_default_connection");
//            qDebug()<<db.connectionNames();
//            db.setHostName("localhost");
//            db.setUserName("root");
//            db.setPassword("123456");
//            db.setDatabaseName("mydb");
//        }
//    if(!db.open())
//    {
//        qDebug() << "open fail" << db.lastError().text();
//        exit(-1);
//    }

//    QSqlQuery query(db);
//    query.prepare(sql);
//    query.bindValue(":name",QVariant(name));
//    query.bindValue(":pwd",QVariant(pwd));

//    if (!query.exec(sql))
//    {
//        qDebug() << "insert:" << query.lastError().text();
//        return false;
//    }

//    db.close();
//    return true;

//}
