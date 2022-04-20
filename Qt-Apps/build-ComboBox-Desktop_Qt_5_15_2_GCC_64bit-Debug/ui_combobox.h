/********************************************************************************
** Form generated from reading UI file 'combobox.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOBOX_H
#define UI_COMBOBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Combobox
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton;
    QLabel *label_escolha;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Combobox)
    {
        if (Combobox->objectName().isEmpty())
            Combobox->setObjectName(QString::fromUtf8("Combobox"));
        Combobox->resize(492, 205);
        Combobox->setStyleSheet(QString::fromUtf8("background-color: rgb(221, 195, 195);"));
        centralwidget = new QWidget(Combobox);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 471, 31));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 64, 411, 61));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox = new QComboBox(widget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        label_escolha = new QLabel(widget);
        label_escolha->setObjectName(QString::fromUtf8("label_escolha"));

        verticalLayout->addWidget(label_escolha);

        Combobox->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Combobox);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 492, 22));
        Combobox->setMenuBar(menubar);
        statusbar = new QStatusBar(Combobox);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Combobox->setStatusBar(statusbar);

        retranslateUi(Combobox);

        QMetaObject::connectSlotsByName(Combobox);
    } // setupUi

    void retranslateUi(QMainWindow *Combobox)
    {
        Combobox->setWindowTitle(QCoreApplication::translate("Combobox", "Combobox", nullptr));
        label->setText(QCoreApplication::translate("Combobox", "<h1>Escolha seu Sistema Operacional</h1>", nullptr));
        pushButton->setText(QCoreApplication::translate("Combobox", "Escolher", nullptr));
        label_escolha->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Combobox: public Ui_Combobox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOBOX_H
