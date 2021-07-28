#ifndef WIDGET_UPLOAD_H
#define WIDGET_UPLOAD_H

#include <QWidget>
#include <QFile>
#include <QTcpSocket>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QtDebug>
#include <QFileInfo>
#include <QTimer>

namespace Ui {
class Widget_upload;
}

class Widget_upload : public QWidget
{
    Q_OBJECT

public:
    explicit Widget_upload(QWidget *parent = nullptr);
    ~Widget_upload();
    void fanhui();
    void refreshProgress();

private slots:

    void on_buttonFile_clicked();

    void on_buttonSend_clicked();

    void on_pushButton_2_clicked();

private:
    void sendData();
    Ui::Widget_upload *ui;
    QMessageBox *message = NULL;
    QFile *file = NULL;
    QTimer timer;
    QString fileName;
    qint64 fileSize = 0;
    qint64 sendSize = 0;
};

#endif // WIDGET_UPLOAD_H
