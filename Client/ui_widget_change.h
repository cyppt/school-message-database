/********************************************************************************
** Form generated from reading UI file 'widget_change.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_CHANGE_H
#define UI_WIDGET_CHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget_change
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QSpacerItem *horizontalSpacer;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_password_sure;
    QLineEdit *lineEdit_password_sure;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_concrete;
    QPushButton *button_quit;
    QSpacerItem *horizontalSpacer_9;

    void setupUi(QWidget *widget_change)
    {
        if (widget_change->objectName().isEmpty())
            widget_change->setObjectName(QString::fromUtf8("widget_change"));
        widget_change->resize(715, 450);
        verticalLayout = new QVBoxLayout(widget_change);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_2 = new QWidget(widget_change);
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

        widget = new QWidget(widget_change);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_username = new QLabel(widget);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        label_username->setFont(font1);

        gridLayout->addWidget(label_username, 0, 0, 1, 1);

        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setEchoMode(QLineEdit::Normal);
        lineEdit_username->setAlignment(Qt::AlignCenter);
        lineEdit_username->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_username, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_password = new QLabel(widget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setFont(font1);

        gridLayout->addWidget(label_password, 1, 0, 1, 1);

        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setAlignment(Qt::AlignCenter);
        lineEdit_password->setPlaceholderText(QString::fromUtf8("\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201"));
        lineEdit_password->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_password, 1, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        label_password_sure = new QLabel(widget);
        label_password_sure->setObjectName(QString::fromUtf8("label_password_sure"));
        label_password_sure->setFont(font1);

        gridLayout->addWidget(label_password_sure, 2, 0, 1, 1);

        lineEdit_password_sure = new QLineEdit(widget);
        lineEdit_password_sure->setObjectName(QString::fromUtf8("lineEdit_password_sure"));
        lineEdit_password_sure->setAlignment(Qt::AlignCenter);
        lineEdit_password_sure->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_password_sure, 2, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 2, 1, 1);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_2 = new QHBoxLayout(widget_4);
        horizontalLayout_2->setSpacing(20);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        button_concrete = new QPushButton(widget_4);
        button_concrete->setObjectName(QString::fromUtf8("button_concrete"));

        horizontalLayout_2->addWidget(button_concrete);

        button_quit = new QPushButton(widget_4);
        button_quit->setObjectName(QString::fromUtf8("button_quit"));

        horizontalLayout_2->addWidget(button_quit);


        gridLayout->addWidget(widget_4, 3, 0, 1, 2);

        horizontalSpacer_9 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 3, 2, 1, 1);


        verticalLayout->addWidget(widget);


        retranslateUi(widget_change);

        QMetaObject::connectSlotsByName(widget_change);
    } // setupUi

    void retranslateUi(QWidget *widget_change)
    {
        widget_change->setWindowTitle(QCoreApplication::translate("widget_change", "Form", nullptr));
        label_title->setText(QCoreApplication::translate("widget_change", "TextLabel", nullptr));
        label_username->setText(QCoreApplication::translate("widget_change", "TextLabel", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("widget_change", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        label_password->setText(QCoreApplication::translate("widget_change", "TextLabel", nullptr));
        label_password_sure->setText(QCoreApplication::translate("widget_change", "TextLabel", nullptr));
        lineEdit_password_sure->setPlaceholderText(QCoreApplication::translate("widget_change", "\350\257\267\347\241\256\345\256\232\345\257\206\347\240\201", nullptr));
        button_concrete->setText(QCoreApplication::translate("widget_change", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        button_quit->setText(QCoreApplication::translate("widget_change", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget_change: public Ui_widget_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_CHANGE_H
