/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLabel *label_profile;
    QGridLayout *gridLayout;
    QLabel *label_username;
    QLabel *label_id;
    QLabel *label_user;
    QLabel *label_idcard;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_upload;
    QPushButton *pushButton_musername;
    QPushButton *pushButton_mpassword;
    QPushButton *pushButton_administrator;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_earch;
    QPushButton *Button_search;
    QTableView *tableView;
    QWidget *widget_administrator;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_sure;
    QPushButton *pushButton_delete;
    QTextEdit *textEdit;

    void setupUi(QWidget *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QString::fromUtf8("Search"));
        Search->resize(1281, 673);
        widget = new QWidget(Search);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 211, 151));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_profile = new QLabel(widget);
        label_profile->setObjectName(QString::fromUtf8("label_profile"));
        label_profile->setScaledContents(true);

        verticalLayout->addWidget(label_profile);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_username = new QLabel(widget);
        label_username->setObjectName(QString::fromUtf8("label_username"));

        gridLayout->addWidget(label_username, 0, 0, 1, 1);

        label_id = new QLabel(widget);
        label_id->setObjectName(QString::fromUtf8("label_id"));

        gridLayout->addWidget(label_id, 0, 1, 1, 1);

        label_user = new QLabel(widget);
        label_user->setObjectName(QString::fromUtf8("label_user"));

        gridLayout->addWidget(label_user, 1, 0, 1, 1);

        label_idcard = new QLabel(widget);
        label_idcard->setObjectName(QString::fromUtf8("label_idcard"));

        gridLayout->addWidget(label_idcard, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        widget_2 = new QWidget(Search);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 150, 211, 491));
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(300, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(36);
        label->setFont(font);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButton_upload = new QPushButton(widget_2);
        pushButton_upload->setObjectName(QString::fromUtf8("pushButton_upload"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(14);
        pushButton_upload->setFont(font1);

        verticalLayout_2->addWidget(pushButton_upload);

        pushButton_musername = new QPushButton(widget_2);
        pushButton_musername->setObjectName(QString::fromUtf8("pushButton_musername"));
        pushButton_musername->setFont(font1);

        verticalLayout_2->addWidget(pushButton_musername);

        pushButton_mpassword = new QPushButton(widget_2);
        pushButton_mpassword->setObjectName(QString::fromUtf8("pushButton_mpassword"));
        pushButton_mpassword->setFont(font1);

        verticalLayout_2->addWidget(pushButton_mpassword);

        pushButton_administrator = new QPushButton(widget_2);
        pushButton_administrator->setObjectName(QString::fromUtf8("pushButton_administrator"));
        pushButton_administrator->setFont(font1);

        verticalLayout_2->addWidget(pushButton_administrator);


        gridLayout_2->addLayout(verticalLayout_2, 1, 0, 1, 1);

        widget_3 = new QWidget(Search);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(380, 30, 741, 151));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit_earch = new QLineEdit(widget_3);
        lineEdit_earch->setObjectName(QString::fromUtf8("lineEdit_earch"));

        horizontalLayout->addWidget(lineEdit_earch);

        Button_search = new QPushButton(widget_3);
        Button_search->setObjectName(QString::fromUtf8("Button_search"));

        horizontalLayout->addWidget(Button_search);

        tableView = new QTableView(Search);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(380, 190, 741, 351));
        widget_administrator = new QWidget(Search);
        widget_administrator->setObjectName(QString::fromUtf8("widget_administrator"));
        widget_administrator->setGeometry(QRect(380, 560, 741, 61));
        gridLayout_3 = new QGridLayout(widget_administrator);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setHorizontalSpacing(20);
        pushButton_sure = new QPushButton(widget_administrator);
        pushButton_sure->setObjectName(QString::fromUtf8("pushButton_sure"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(16);
        pushButton_sure->setFont(font2);

        gridLayout_3->addWidget(pushButton_sure, 0, 1, 1, 1);

        pushButton_delete = new QPushButton(widget_administrator);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));
        pushButton_delete->setFont(font2);

        gridLayout_3->addWidget(pushButton_delete, 0, 0, 1, 1);

        textEdit = new QTextEdit(Search);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(380, 190, 741, 351));
        textEdit->setReadOnly(true);

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QWidget *Search)
    {
        Search->setWindowTitle(QCoreApplication::translate("Search", "Form", nullptr));
        label_profile->setText(QCoreApplication::translate("Search", "TextLabel", nullptr));
        label_username->setText(QCoreApplication::translate("Search", "TextLabel", nullptr));
        label_id->setText(QCoreApplication::translate("Search", "TextLabel", nullptr));
        label_user->setText(QCoreApplication::translate("Search", "TextLabel", nullptr));
        label_idcard->setText(QCoreApplication::translate("Search", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Search", "\345\212\237\350\203\275", nullptr));
        pushButton_upload->setText(QCoreApplication::translate("Search", "\344\270\212\344\274\240", nullptr));
        pushButton_musername->setText(QCoreApplication::translate("Search", "\344\277\256\346\224\271\350\264\246\345\217\267\345\257\206\347\240\201", nullptr));
        pushButton_mpassword->setText(QCoreApplication::translate("Search", "\344\277\256\346\224\271\345\257\206\347\240\201", nullptr));
        pushButton_administrator->setText(QCoreApplication::translate("Search", "\344\277\256\346\224\271\347\224\250\346\210\267", nullptr));
        lineEdit_earch->setText(QCoreApplication::translate("Search", "\350\257\267\350\276\223\345\205\245\346\220\234\347\264\242\345\205\263\351\224\256\350\257\215", nullptr));
        Button_search->setText(QCoreApplication::translate("Search", "\346\237\245\346\211\276", nullptr));
        pushButton_sure->setText(QCoreApplication::translate("Search", "\347\241\256\345\256\232", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Search", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
