/********************************************************************************
** Form generated from reading UI file 'widget_upload.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_UPLOAD_H
#define UI_WIDGET_UPLOAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_upload
{
public:
    QGridLayout *gridLayout_2;
    QLabel *label;
    QTextEdit *textEdit;
    QVBoxLayout *verticalLayout;
    QPushButton *buttonFile;
    QPushButton *buttonSend;
    QPushButton *pushButton_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_size;
    QLabel *label_3;
    QLineEdit *lineEdit_progress;
    QProgressBar *progressBar;

    void setupUi(QWidget *Widget_upload)
    {
        if (Widget_upload->objectName().isEmpty())
            Widget_upload->setObjectName(QString::fromUtf8("Widget_upload"));
        Widget_upload->resize(514, 448);
        gridLayout_2 = new QGridLayout(Widget_upload);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(Widget_upload);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(36);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        textEdit = new QTextEdit(Widget_upload);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        gridLayout_2->addWidget(textEdit, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        buttonFile = new QPushButton(Widget_upload);
        buttonFile->setObjectName(QString::fromUtf8("buttonFile"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(16);
        buttonFile->setFont(font1);

        verticalLayout->addWidget(buttonFile);

        buttonSend = new QPushButton(Widget_upload);
        buttonSend->setObjectName(QString::fromUtf8("buttonSend"));
        buttonSend->setFont(font1);

        verticalLayout->addWidget(buttonSend);

        pushButton_2 = new QPushButton(Widget_upload);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setFont(font1);

        verticalLayout->addWidget(pushButton_2);


        gridLayout_2->addLayout(verticalLayout, 1, 1, 1, 1);

        widget = new QWidget(Widget_upload);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(90, 16777215));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_size = new QLineEdit(widget);
        lineEdit_size->setObjectName(QString::fromUtf8("lineEdit_size"));
        lineEdit_size->setMaximumSize(QSize(100, 16777215));
        lineEdit_size->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_size, 0, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMaximumSize(QSize(90, 16777215));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        lineEdit_progress = new QLineEdit(widget);
        lineEdit_progress->setObjectName(QString::fromUtf8("lineEdit_progress"));
        lineEdit_progress->setMaximumSize(QSize(100, 16777215));
        lineEdit_progress->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(lineEdit_progress, 0, 3, 1, 1);

        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        gridLayout->addWidget(progressBar, 1, 0, 1, 4);


        gridLayout_2->addWidget(widget, 2, 0, 1, 1);


        retranslateUi(Widget_upload);

        QMetaObject::connectSlotsByName(Widget_upload);
    } // setupUi

    void retranslateUi(QWidget *Widget_upload)
    {
        Widget_upload->setWindowTitle(QCoreApplication::translate("Widget_upload", "Form", nullptr));
        label->setText(QCoreApplication::translate("Widget_upload", "\345\210\206\344\272\253\344\275\240\347\232\204\344\277\241\346\201\257", nullptr));
        buttonFile->setText(QCoreApplication::translate("Widget_upload", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        buttonSend->setText(QCoreApplication::translate("Widget_upload", "\344\270\212\344\274\240", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget_upload", "\351\200\200\345\207\272", nullptr));
        label_2->setText(QCoreApplication::translate("Widget_upload", "\345\244\247\345\260\217\357\274\232", nullptr));
        lineEdit_size->setText(QString());
        label_3->setText(QCoreApplication::translate("Widget_upload", "\345\267\262\344\270\212\344\274\240\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget_upload: public Ui_Widget_upload {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_UPLOAD_H
