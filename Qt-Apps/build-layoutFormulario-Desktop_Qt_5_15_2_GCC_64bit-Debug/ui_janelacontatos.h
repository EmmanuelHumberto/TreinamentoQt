/********************************************************************************
** Form generated from reading UI file 'janelacontatos.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELACONTATOS_H
#define UI_JANELACONTATOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_janelaContatos
{
public:
    QLabel *label;
    QLabel *logo_auxiliar;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *labelNome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *labelSobrenome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *labelEstudio;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_15;
    QLabel *labelTelefone;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLabel *labelEmail;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *labelEstado;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLabel *labelCidade;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_9;
    QLabel *labelLogradouro;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLabel *labelNumero;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_11;
    QLabel *labelCep;

    void setupUi(QDialog *janelaContatos)
    {
        if (janelaContatos->objectName().isEmpty())
            janelaContatos->setObjectName(QString::fromUtf8("janelaContatos"));
        janelaContatos->resize(648, 503);
        label = new QLabel(janelaContatos);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(110, 120, 361, 41));
        logo_auxiliar = new QLabel(janelaContatos);
        logo_auxiliar->setObjectName(QString::fromUtf8("logo_auxiliar"));
        logo_auxiliar->setGeometry(QRect(220, 10, 151, 101));
        widget = new QWidget(janelaContatos);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 170, 521, 301));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        labelNome = new QLabel(widget);
        labelNome->setObjectName(QString::fromUtf8("labelNome"));

        horizontalLayout->addWidget(labelNome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        labelSobrenome = new QLabel(widget);
        labelSobrenome->setObjectName(QString::fromUtf8("labelSobrenome"));

        horizontalLayout_2->addWidget(labelSobrenome);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        labelEstudio = new QLabel(widget);
        labelEstudio->setObjectName(QString::fromUtf8("labelEstudio"));

        horizontalLayout_3->addWidget(labelEstudio);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_15 = new QLabel(widget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_4->addWidget(label_15);

        labelTelefone = new QLabel(widget);
        labelTelefone->setObjectName(QString::fromUtf8("labelTelefone"));

        horizontalLayout_4->addWidget(labelTelefone);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        labelEmail = new QLabel(widget);
        labelEmail->setObjectName(QString::fromUtf8("labelEmail"));

        horizontalLayout_5->addWidget(labelEmail);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        labelEstado = new QLabel(widget);
        labelEstado->setObjectName(QString::fromUtf8("labelEstado"));

        horizontalLayout_6->addWidget(labelEstado);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_7->addWidget(label_8);

        labelCidade = new QLabel(widget);
        labelCidade->setObjectName(QString::fromUtf8("labelCidade"));

        horizontalLayout_7->addWidget(labelCidade);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_8->addWidget(label_9);

        labelLogradouro = new QLabel(widget);
        labelLogradouro->setObjectName(QString::fromUtf8("labelLogradouro"));

        horizontalLayout_8->addWidget(labelLogradouro);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        labelNumero = new QLabel(widget);
        labelNumero->setObjectName(QString::fromUtf8("labelNumero"));

        horizontalLayout_9->addWidget(labelNumero);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_10->addWidget(label_11);

        labelCep = new QLabel(widget);
        labelCep->setObjectName(QString::fromUtf8("labelCep"));

        horizontalLayout_10->addWidget(labelCep);


        verticalLayout->addLayout(horizontalLayout_10);


        retranslateUi(janelaContatos);

        QMetaObject::connectSlotsByName(janelaContatos);
    } // setupUi

    void retranslateUi(QDialog *janelaContatos)
    {
        janelaContatos->setWindowTitle(QCoreApplication::translate("janelaContatos", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("janelaContatos", "<html><head/><body><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:700;\">Dados do cliente:</span></h1></body></html>", nullptr));
        logo_auxiliar->setText(QCoreApplication::translate("janelaContatos", "logo", nullptr));
        label_2->setText(QCoreApplication::translate("janelaContatos", "Nome:", nullptr));
        labelNome->setText(QCoreApplication::translate("janelaContatos", "nome", nullptr));
        label_3->setText(QCoreApplication::translate("janelaContatos", "Sobrenome:", nullptr));
        labelSobrenome->setText(QCoreApplication::translate("janelaContatos", "sobrenome", nullptr));
        label_4->setText(QCoreApplication::translate("janelaContatos", "Estudio:", nullptr));
        labelEstudio->setText(QCoreApplication::translate("janelaContatos", "estudio", nullptr));
        label_15->setText(QCoreApplication::translate("janelaContatos", "Telefone:", nullptr));
        labelTelefone->setText(QCoreApplication::translate("janelaContatos", "telefone", nullptr));
        label_6->setText(QCoreApplication::translate("janelaContatos", "Email:", nullptr));
        labelEmail->setText(QCoreApplication::translate("janelaContatos", "email", nullptr));
        label_7->setText(QCoreApplication::translate("janelaContatos", "Estado:", nullptr));
        labelEstado->setText(QCoreApplication::translate("janelaContatos", "estado", nullptr));
        label_8->setText(QCoreApplication::translate("janelaContatos", "Cidade:", nullptr));
        labelCidade->setText(QCoreApplication::translate("janelaContatos", "cidade", nullptr));
        label_9->setText(QCoreApplication::translate("janelaContatos", "Logradouro:", nullptr));
        labelLogradouro->setText(QCoreApplication::translate("janelaContatos", "logradouro", nullptr));
        label_10->setText(QCoreApplication::translate("janelaContatos", "Numero:", nullptr));
        labelNumero->setText(QCoreApplication::translate("janelaContatos", "numero", nullptr));
        label_11->setText(QCoreApplication::translate("janelaContatos", "Cep:", nullptr));
        labelCep->setText(QCoreApplication::translate("janelaContatos", "cep", nullptr));
    } // retranslateUi

};

namespace Ui {
    class janelaContatos: public Ui_janelaContatos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELACONTATOS_H
