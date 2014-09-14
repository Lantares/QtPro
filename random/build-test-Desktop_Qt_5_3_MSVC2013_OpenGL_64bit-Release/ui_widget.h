/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_a;
    QPushButton *pushButton_b;
    QPushButton *pushButton_e;
    QPushButton *pushButton_c;
    QPushButton *pushButton_d;
    QPushButton *pushButton_g;
    QPushButton *pushButton_f;
    QPushButton *pushButton_h;
    QPushButton *pushButton_j;
    QPushButton *pushButton_i;
    QPushButton *pushButton;
    QPushButton *pushButton_num;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(342, 190);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 321, 171));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_a = new QPushButton(gridLayoutWidget);
        pushButton_a->setObjectName(QStringLiteral("pushButton_a"));

        gridLayout->addWidget(pushButton_a, 0, 0, 1, 1);

        pushButton_b = new QPushButton(gridLayoutWidget);
        pushButton_b->setObjectName(QStringLiteral("pushButton_b"));

        gridLayout->addWidget(pushButton_b, 0, 1, 1, 1);

        pushButton_e = new QPushButton(gridLayoutWidget);
        pushButton_e->setObjectName(QStringLiteral("pushButton_e"));

        gridLayout->addWidget(pushButton_e, 2, 0, 1, 1);

        pushButton_c = new QPushButton(gridLayoutWidget);
        pushButton_c->setObjectName(QStringLiteral("pushButton_c"));

        gridLayout->addWidget(pushButton_c, 1, 0, 1, 1);

        pushButton_d = new QPushButton(gridLayoutWidget);
        pushButton_d->setObjectName(QStringLiteral("pushButton_d"));

        gridLayout->addWidget(pushButton_d, 1, 1, 1, 1);

        pushButton_g = new QPushButton(gridLayoutWidget);
        pushButton_g->setObjectName(QStringLiteral("pushButton_g"));

        gridLayout->addWidget(pushButton_g, 3, 0, 1, 1);

        pushButton_f = new QPushButton(gridLayoutWidget);
        pushButton_f->setObjectName(QStringLiteral("pushButton_f"));

        gridLayout->addWidget(pushButton_f, 2, 1, 1, 1);

        pushButton_h = new QPushButton(gridLayoutWidget);
        pushButton_h->setObjectName(QStringLiteral("pushButton_h"));

        gridLayout->addWidget(pushButton_h, 3, 1, 1, 1);

        pushButton_j = new QPushButton(gridLayoutWidget);
        pushButton_j->setObjectName(QStringLiteral("pushButton_j"));

        gridLayout->addWidget(pushButton_j, 4, 1, 1, 1);

        pushButton_i = new QPushButton(gridLayoutWidget);
        pushButton_i->setObjectName(QStringLiteral("pushButton_i"));

        gridLayout->addWidget(pushButton_i, 4, 0, 1, 1);

        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 5, 1, 1, 1);

        pushButton_num = new QPushButton(gridLayoutWidget);
        pushButton_num->setObjectName(QStringLiteral("pushButton_num"));
        pushButton_num->setEnabled(true);

        gridLayout->addWidget(pushButton_num, 5, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        pushButton_a->setText(QApplication::translate("Widget", "A", 0));
        pushButton_b->setText(QApplication::translate("Widget", "B", 0));
        pushButton_e->setText(QApplication::translate("Widget", "E", 0));
        pushButton_c->setText(QApplication::translate("Widget", "C", 0));
        pushButton_d->setText(QApplication::translate("Widget", "D", 0));
        pushButton_g->setText(QApplication::translate("Widget", "G", 0));
        pushButton_f->setText(QApplication::translate("Widget", "F", 0));
        pushButton_h->setText(QApplication::translate("Widget", "H", 0));
        pushButton_j->setText(QApplication::translate("Widget", "J", 0));
        pushButton_i->setText(QApplication::translate("Widget", "I", 0));
        pushButton->setText(QApplication::translate("Widget", "set", 0));
        pushButton_num->setText(QApplication::translate("Widget", "num", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
