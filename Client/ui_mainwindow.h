/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_6;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_3;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QLabel *label_IP;
    QLineEdit *lineEditIP;
    QLabel *label_port;
    QLineEdit *lineEditPort;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_10;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_login;
    QPushButton *button_resign;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *labeljw;
    QSpacerItem *horizontalSpacer;
    QLabel *labeljwc;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(720, 432);
        MainWindow->setAutoFillBackground(true);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow{\n"
"border-image:url(:/login.jpg);\n"
";}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_title = new QLabel(widget_2);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_title->sizePolicy().hasHeightForWidth());
        label_title->setSizePolicy(sizePolicy);
        label_title->setMinimumSize(QSize(54, 0));
        QFont font;
        font.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font.setPointSize(20);
        label_title->setFont(font);

        horizontalLayout->addWidget(label_title);

        horizontalSpacer_3 = new QSpacerItem(50, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_2);

        widget_6 = new QWidget(centralwidget);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        gridLayout_3 = new QGridLayout(widget_6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalSpacer_7 = new QSpacerItem(89, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        widget_3 = new QWidget(widget_6);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        gridLayout_4 = new QGridLayout(widget_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_IP = new QLabel(widget_3);
        label_IP->setObjectName(QString::fromUtf8("label_IP"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        label_IP->setFont(font1);

        gridLayout_2->addWidget(label_IP, 0, 0, 1, 1);

        lineEditIP = new QLineEdit(widget_3);
        lineEditIP->setObjectName(QString::fromUtf8("lineEditIP"));
        lineEditIP->setAlignment(Qt::AlignCenter);
        lineEditIP->setPlaceholderText(QString::fromUtf8("\350\257\267\350\276\223\345\205\245IP\345\234\260\345\235\200"));
        lineEditIP->setClearButtonEnabled(true);

        gridLayout_2->addWidget(lineEditIP, 0, 1, 1, 1);

        label_port = new QLabel(widget_3);
        label_port->setObjectName(QString::fromUtf8("label_port"));
        label_port->setFont(font1);

        gridLayout_2->addWidget(label_port, 1, 0, 1, 1);

        lineEditPort = new QLineEdit(widget_3);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));
        lineEditPort->setEchoMode(QLineEdit::Normal);
        lineEditPort->setAlignment(Qt::AlignCenter);
        lineEditPort->setClearButtonEnabled(true);

        gridLayout_2->addWidget(lineEditPort, 1, 1, 1, 1);

        label_username = new QLabel(widget_3);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setFont(font1);

        gridLayout_2->addWidget(label_username, 2, 0, 1, 1);

        lineEdit_username = new QLineEdit(widget_3);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setAlignment(Qt::AlignCenter);
        lineEdit_username->setPlaceholderText(QString::fromUtf8("\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215"));
        lineEdit_username->setClearButtonEnabled(true);

        gridLayout_2->addWidget(lineEdit_username, 2, 1, 1, 1);

        label_password = new QLabel(widget_3);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setFont(font1);

        gridLayout_2->addWidget(label_password, 3, 0, 1, 1);

        lineEdit_password = new QLineEdit(widget_3);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setAlignment(Qt::AlignCenter);
        lineEdit_password->setClearButtonEnabled(true);

        gridLayout_2->addWidget(lineEdit_password, 3, 1, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 4, 1);

        horizontalSpacer_4 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 1, 1, 1, 1);

        horizontalSpacer_11 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_11, 2, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(165, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_10, 3, 1, 1, 1);

        widget_4 = new QWidget(widget_3);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        button_login = new QPushButton(widget_4);
        button_login->setObjectName(QString::fromUtf8("button_login"));

        horizontalLayout_2->addWidget(button_login);

        button_resign = new QPushButton(widget_4);
        button_resign->setObjectName(QString::fromUtf8("button_resign"));

        horizontalLayout_2->addWidget(button_resign);


        gridLayout_4->addWidget(widget_4, 4, 0, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_9, 4, 1, 1, 1);


        gridLayout_3->addWidget(widget_3, 0, 1, 2, 2);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_8, 1, 0, 1, 1);


        verticalLayout->addWidget(widget_6);

        widget_5 = new QWidget(centralwidget);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_3 = new QHBoxLayout(widget_5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(336, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        widget = new QWidget(widget_5);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        labeljw = new QLabel(widget);
        labeljw->setObjectName(QString::fromUtf8("labeljw"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font2.setPointSize(14);
        labeljw->setFont(font2);
        labeljw->setAutoFillBackground(false);
        labeljw->setTextFormat(Qt::AutoText);

        gridLayout->addWidget(labeljw, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        labeljwc = new QLabel(widget);
        labeljwc->setObjectName(QString::fromUtf8("labeljwc"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font3.setPointSize(8);
        labeljwc->setFont(font3);

        gridLayout->addWidget(labeljwc, 1, 0, 1, 1);


        horizontalLayout_3->addWidget(widget);


        verticalLayout->addWidget(widget_5);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 720, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(button_login, button_resign);
        QWidget::setTabOrder(button_resign, lineEditPort);
        QWidget::setTabOrder(lineEditPort, lineEditIP);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        label_title->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_IP->setText(QCoreApplication::translate("MainWindow", "IP\345\234\260\345\235\200\357\274\232", nullptr));
        lineEditIP->setText(QCoreApplication::translate("MainWindow", "127.0.0.1", nullptr));
        label_port->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\347\253\257\345\217\243\357\274\232", nullptr));
        lineEditPort->setText(QCoreApplication::translate("MainWindow", "8888", nullptr));
        lineEditPort->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\234\215\345\212\241\347\253\257\345\217\243", nullptr));
        label_username->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_password->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        lineEdit_password->setPlaceholderText(QCoreApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        button_login->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        button_resign->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
        labeljw->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labeljwc->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
