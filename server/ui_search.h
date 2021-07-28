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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QGridLayout *gridLayout;
    QPushButton *ButtonAns3;
    QLineEdit *lineEditSearch;
    QPushButton *ButtonAns2;
    QPushButton *ButtonAns8;
    QPushButton *ButtonAns4;
    QPushButton *ButtonAnsB;
    QPushButton *ButtonSearch;
    QPushButton *ButtonAns6;
    QPushButton *ButtonAns1;
    QPushButton *ButtonAns7;
    QPushButton *ButtonNext;
    QSpacerItem *verticalSpacer;
    QPushButton *ButtonLast;
    QPushButton *ButtonAns9;
    QPushButton *ButtonAns5;
    QSpacerItem *horizontalSpacer;
    QPushButton *ButtonAnsA;
    QTableView *tableView;
    QPushButton *pushButton;

    void setupUi(QWidget *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QString::fromUtf8("Search"));
        Search->resize(876, 629);
        gridLayout = new QGridLayout(Search);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        ButtonAns3 = new QPushButton(Search);
        ButtonAns3->setObjectName(QString::fromUtf8("ButtonAns3"));
        ButtonAns3->setFlat(true);

        gridLayout->addWidget(ButtonAns3, 5, 0, 1, 2);

        lineEditSearch = new QLineEdit(Search);
        lineEditSearch->setObjectName(QString::fromUtf8("lineEditSearch"));

        gridLayout->addWidget(lineEditSearch, 0, 0, 1, 2);

        ButtonAns2 = new QPushButton(Search);
        ButtonAns2->setObjectName(QString::fromUtf8("ButtonAns2"));
        ButtonAns2->setFlat(true);

        gridLayout->addWidget(ButtonAns2, 3, 0, 1, 2);

        ButtonAns8 = new QPushButton(Search);
        ButtonAns8->setObjectName(QString::fromUtf8("ButtonAns8"));
        ButtonAns8->setFlat(true);

        gridLayout->addWidget(ButtonAns8, 10, 0, 1, 2);

        ButtonAns4 = new QPushButton(Search);
        ButtonAns4->setObjectName(QString::fromUtf8("ButtonAns4"));
        ButtonAns4->setFlat(true);

        gridLayout->addWidget(ButtonAns4, 6, 0, 1, 2);

        ButtonAnsB = new QPushButton(Search);
        ButtonAnsB->setObjectName(QString::fromUtf8("ButtonAnsB"));
        ButtonAnsB->setFlat(true);

        gridLayout->addWidget(ButtonAnsB, 13, 0, 1, 2);

        ButtonSearch = new QPushButton(Search);
        ButtonSearch->setObjectName(QString::fromUtf8("ButtonSearch"));

        gridLayout->addWidget(ButtonSearch, 0, 2, 1, 1);

        ButtonAns6 = new QPushButton(Search);
        ButtonAns6->setObjectName(QString::fromUtf8("ButtonAns6"));
        ButtonAns6->setFlat(true);

        gridLayout->addWidget(ButtonAns6, 8, 0, 1, 2);

        ButtonAns1 = new QPushButton(Search);
        ButtonAns1->setObjectName(QString::fromUtf8("ButtonAns1"));
        ButtonAns1->setEnabled(true);
        ButtonAns1->setFlat(true);

        gridLayout->addWidget(ButtonAns1, 2, 0, 1, 2);

        ButtonAns7 = new QPushButton(Search);
        ButtonAns7->setObjectName(QString::fromUtf8("ButtonAns7"));
        ButtonAns7->setFlat(true);

        gridLayout->addWidget(ButtonAns7, 9, 0, 1, 2);

        ButtonNext = new QPushButton(Search);
        ButtonNext->setObjectName(QString::fromUtf8("ButtonNext"));
        ButtonNext->setEnabled(true);

        gridLayout->addWidget(ButtonNext, 14, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        ButtonLast = new QPushButton(Search);
        ButtonLast->setObjectName(QString::fromUtf8("ButtonLast"));
        ButtonLast->setEnabled(true);

        gridLayout->addWidget(ButtonLast, 14, 0, 1, 1);

        ButtonAns9 = new QPushButton(Search);
        ButtonAns9->setObjectName(QString::fromUtf8("ButtonAns9"));
        ButtonAns9->setFlat(true);

        gridLayout->addWidget(ButtonAns9, 11, 0, 1, 2);

        ButtonAns5 = new QPushButton(Search);
        ButtonAns5->setObjectName(QString::fromUtf8("ButtonAns5"));
        ButtonAns5->setFlat(true);

        gridLayout->addWidget(ButtonAns5, 7, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(379, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 14, 1, 1, 1);

        ButtonAnsA = new QPushButton(Search);
        ButtonAnsA->setObjectName(QString::fromUtf8("ButtonAnsA"));
        ButtonAnsA->setFlat(true);

        gridLayout->addWidget(ButtonAnsA, 12, 0, 1, 2);

        tableView = new QTableView(Search);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        gridLayout->addWidget(tableView, 1, 1, 1, 1);

        pushButton = new QPushButton(Search);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 4, 0, 1, 1);


        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QWidget *Search)
    {
        Search->setWindowTitle(QCoreApplication::translate("Search", "Form", nullptr));
        ButtonAns3->setText(QCoreApplication::translate("Search", "\347\273\223\346\236\2343", nullptr));
        lineEditSearch->setText(QCoreApplication::translate("Search", "\350\257\267\350\276\223\345\205\245\346\220\234\347\264\242\345\205\263\351\224\256\350\257\215", nullptr));
        ButtonAns2->setText(QCoreApplication::translate("Search", "\347\273\223\346\236\2342", nullptr));
        ButtonAns8->setText(QCoreApplication::translate("Search", "\347\273\223\346\236\2348", nullptr));
        ButtonAns4->setText(QCoreApplication::translate("Search", "\347\273\223\346\236\2344", nullptr));
        ButtonAnsB->setText(QCoreApplication::translate("Search", "\347\273\223\346\236\23411", nullptr));
        ButtonSearch->setText(QCoreApplication::translate("Search", "\346\237\245\346\211\276", nullptr));
        ButtonAns6->setText(QCoreApplication::translate("Search", "\347\273\223\346\236\2346", nullptr));
        ButtonAns1->setText(QCoreApplication::translate("Search", "\347\273\223\346\236\2341", nullptr));
        ButtonAns7->setText(QCoreApplication::translate("Search", "\347\273\223\346\236\2347", nullptr));
        ButtonNext->setText(QCoreApplication::translate("Search", "\344\270\213\344\270\200\351\241\265", nullptr));
        ButtonLast->setText(QCoreApplication::translate("Search", "\344\270\212\344\270\200\351\241\265", nullptr));
        ButtonAns9->setText(QCoreApplication::translate("Search", "\347\273\223\346\236\2349", nullptr));
        ButtonAns5->setText(QCoreApplication::translate("Search", "\347\273\223\346\236\2345", nullptr));
        ButtonAnsA->setText(QCoreApplication::translate("Search", "\347\273\223\346\236\23410", nullptr));
        pushButton->setText(QCoreApplication::translate("Search", "\344\277\256\346\224\271\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
