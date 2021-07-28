/********************************************************************************
** Form generated from reading UI file 'widget_resign.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_RESIGN_H
#define UI_WIDGET_RESIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget_resign
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_title;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QLabel *label_password_sure;
    QLineEdit *lineEdit_password;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_password;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_password_sure;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_concrete;
    QPushButton *button_quit;

    void setupUi(QWidget *Widget_resign)
    {
        if (Widget_resign->objectName().isEmpty())
            Widget_resign->setObjectName(QString::fromUtf8("Widget_resign"));
        Widget_resign->resize(615, 401);
        gridLayout_2 = new QGridLayout(Widget_resign);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        widget_2 = new QWidget(Widget_resign);
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


        gridLayout_2->addWidget(widget_2, 0, 0, 1, 1);

        widget = new QWidget(Widget_resign);
        widget->setObjectName(QString::fromUtf8("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_5 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 2, 1, 1);

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

        label_password_sure = new QLabel(widget);
        label_password_sure->setObjectName(QString::fromUtf8("label_password_sure"));
        label_password_sure->setFont(font1);

        gridLayout->addWidget(label_password_sure, 2, 0, 1, 1);

        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setAlignment(Qt::AlignCenter);
        lineEdit_password->setPlaceholderText(QString::fromUtf8("\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201"));
        lineEdit_password->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_password, 1, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 3, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 2, 1, 1);

        label_password = new QLabel(widget);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        label_password->setFont(font1);

        gridLayout->addWidget(label_password, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(300, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        lineEdit_password_sure = new QLineEdit(widget);
        lineEdit_password_sure->setObjectName(QString::fromUtf8("lineEdit_password_sure"));
        lineEdit_password_sure->setAlignment(Qt::AlignCenter);
        lineEdit_password_sure->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_password_sure, 2, 1, 1, 1);

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


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(Widget_resign);
        QObject::connect(button_quit, SIGNAL(clicked()), Widget_resign, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget_resign);
    } // setupUi

    void retranslateUi(QWidget *Widget_resign)
    {
        Widget_resign->setWindowTitle(QCoreApplication::translate("Widget_resign", "Form", nullptr));
        label_title->setText(QCoreApplication::translate("Widget_resign", "TextLabel", nullptr));
        label_username->setText(QCoreApplication::translate("Widget_resign", "TextLabel", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("Widget_resign", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        label_password_sure->setText(QCoreApplication::translate("Widget_resign", "TextLabel", nullptr));
        label_password->setText(QCoreApplication::translate("Widget_resign", "TextLabel", nullptr));
        lineEdit_password_sure->setPlaceholderText(QCoreApplication::translate("Widget_resign", "\350\257\267\347\241\256\345\256\232\345\257\206\347\240\201", nullptr));
        button_concrete->setText(QCoreApplication::translate("Widget_resign", "\347\241\256\350\256\244\346\263\250\345\206\214", nullptr));
        button_quit->setText(QCoreApplication::translate("Widget_resign", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget_resign: public Ui_Widget_resign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_RESIGN_H
