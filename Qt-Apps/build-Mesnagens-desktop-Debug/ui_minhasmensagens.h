/********************************************************************************
** Form generated from reading UI file 'minhasmensagens.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINHASMENSAGENS_H
#define UI_MINHASMENSAGENS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MinhasMensagens
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_info;
    QPushButton *btn_perigo;
    QPushButton *btn_aviso;
    QPushButton *btn_sucesso;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MinhasMensagens)
    {
        if (MinhasMensagens->objectName().isEmpty())
            MinhasMensagens->setObjectName(QString::fromUtf8("MinhasMensagens"));
        MinhasMensagens->resize(800, 600);
        centralwidget = new QWidget(MinhasMensagens);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 56, 561, 61));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 140, 601, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btn_info = new QPushButton(layoutWidget);
        btn_info->setObjectName(QString::fromUtf8("btn_info"));

        horizontalLayout->addWidget(btn_info);

        btn_perigo = new QPushButton(layoutWidget);
        btn_perigo->setObjectName(QString::fromUtf8("btn_perigo"));

        horizontalLayout->addWidget(btn_perigo);

        btn_aviso = new QPushButton(layoutWidget);
        btn_aviso->setObjectName(QString::fromUtf8("btn_aviso"));

        horizontalLayout->addWidget(btn_aviso);

        btn_sucesso = new QPushButton(layoutWidget);
        btn_sucesso->setObjectName(QString::fromUtf8("btn_sucesso"));

        horizontalLayout->addWidget(btn_sucesso);

        MinhasMensagens->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MinhasMensagens);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MinhasMensagens->setMenuBar(menubar);
        statusbar = new QStatusBar(MinhasMensagens);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MinhasMensagens->setStatusBar(statusbar);

        retranslateUi(MinhasMensagens);

        QMetaObject::connectSlotsByName(MinhasMensagens);
    } // setupUi

    void retranslateUi(QMainWindow *MinhasMensagens)
    {
        MinhasMensagens->setWindowTitle(QCoreApplication::translate("MinhasMensagens", "MinhasMensagens", nullptr));
        label->setText(QCoreApplication::translate("MinhasMensagens", "<html><head/><body><h2 align=\"center\" style=\" margin-top:16px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:x-large; font-weight:700;\">Tipos de Mensagens </span></h2></body></html>", nullptr));
        btn_info->setText(QCoreApplication::translate("MinhasMensagens", "Info", nullptr));
        btn_perigo->setText(QCoreApplication::translate("MinhasMensagens", "Perigo", nullptr));
        btn_aviso->setText(QCoreApplication::translate("MinhasMensagens", "Aviso", nullptr));
        btn_sucesso->setText(QCoreApplication::translate("MinhasMensagens", "Sucesso", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MinhasMensagens: public Ui_MinhasMensagens {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINHASMENSAGENS_H
