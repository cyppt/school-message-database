#ifndef DATABASE_H
#define DATABASE_H
#include <QDebug>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#define sqlport 3307

class database
{
public:
    database();
    static database *getDatabaseInstence();
    bool findUser(QString name);
    bool judge(QString name, QString pwd);
//    bool addUser(QString name, QString pwd);

private:
    QSqlDatabase db;
};

#endif // DATABASE_H
