/********************************************************************************
** Form generated from reading UI file 'change.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGE_H
#define UI_CHANGE_H

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

class Ui_change
{
public:
    QGridLayout *gridLayout;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button_concrete;
    QPushButton *button_quit;
    QLabel *label_title;
    QLabel *label_password;
    QLabel *label_password_sure;
    QSpacerItem *horizontalSpacer;
    QLabel *label_username;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit_password_sure;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_username;

    void setupUi(QWidget *change)
    {
        if (change->objectName().isEmpty())
            change->setObjectName(QString::fromUtf8("change"));
        change->resize(664, 479);
        gridLayout = new QGridLayout(change);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        widget_4 = new QWidget(change);
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


        gridLayout->addWidget(widget_4, 5, 0, 1, 2);

        label_title = new QLabel(change);
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

        gridLayout->addWidget(label_title, 1, 1, 1, 1);

        label_password = new QLabel(change);
        label_password->setObjectName(QString::fromUtf8("label_password"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\346\245\267\344\275\223"));
        font1.setPointSize(12);
        label_password->setFont(font1);

        gridLayout->addWidget(label_password, 3, 0, 1, 1);

        label_password_sure = new QLabel(change);
        label_password_sure->setObjectName(QString::fromUtf8("label_password_sure"));
        label_password_sure->setFont(font1);

        gridLayout->addWidget(label_password_sure, 4, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        label_username = new QLabel(change);
        label_username->setObjectName(QString::fromUtf8("label_username"));
        label_username->setFont(font1);

        gridLayout->addWidget(label_username, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        lineEdit_password_sure = new QLineEdit(change);
        lineEdit_password_sure->setObjectName(QString::fromUtf8("lineEdit_password_sure"));
        lineEdit_password_sure->setAlignment(Qt::AlignCenter);
        lineEdit_password_sure->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_password_sure, 4, 1, 1, 1);

        lineEdit_password = new QLineEdit(change);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setAlignment(Qt::AlignCenter);
        lineEdit_password->setPlaceholderText(QString::fromUtf8("\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201"));
        lineEdit_password->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_password, 3, 1, 1, 1);

        lineEdit_username = new QLineEdit(change);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setEchoMode(QLineEdit::Normal);
        lineEdit_username->setAlignment(Qt::AlignCenter);
        lineEdit_username->setClearButtonEnabled(false);

        gridLayout->addWidget(lineEdit_username, 2, 1, 1, 1);


        retranslateUi(change);

        QMetaObject::connectSlotsByName(change);
    } // setupUi

    void retranslateUi(QWidget *change)
    {
        change->setWindowTitle(QCoreApplication::translate("change", "Form", nullptr));
        button_concrete->setText(QCoreApplication::translate("change", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        button_quit->setText(QCoreApplication::translate("change", "\351\200\200\345\207\272", nullptr));
        label_title->setText(QCoreApplication::translate("change", "TextLabel", nullptr));
        label_password->setText(QCoreApplication::translate("change", "TextLabel", nullptr));
        label_password_sure->setText(QCoreApplication::translate("change", "TextLabel", nullptr));
        label_username->setText(QCoreApplication::translate("change", "TextLabel", nullptr));
        lineEdit_password_sure->setPlaceholderText(QCoreApplication::translate("change", "\350\257\267\347\241\256\345\256\232\345\257\206\347\240\201", nullptr));
        lineEdit_username->setText(QString());
        lineEdit_username->setPlaceholderText(QCoreApplication::translate("change", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class change: public Ui_change {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGE_H
