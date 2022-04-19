/********************************************************************************
** Form generated from reading UI file 'formulario.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARIO_H
#define UI_FORMULARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formulario
{
public:
    QWidget *centralwidget;
    QLabel *logo;
    QLabel *label_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_nome;
    QLineEdit *linha_nome;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_sobrenome;
    QLineEdit *linha_sobrenome;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_estudio;
    QLineEdit *linha_estudio;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_telefone;
    QLineEdit *linha_telefone;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_email;
    QLineEdit *linha_email;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_estado;
    QLineEdit *linha_estado;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_cidade;
    QLineEdit *linha_cidade;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_logradouro;
    QLineEdit *linha_logradouro;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_numero;
    QLineEdit *linha_numero;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_cep;
    QLineEdit *linha_cep;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_enviar;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Formulario)
    {
        if (Formulario->objectName().isEmpty())
            Formulario->setObjectName(QString::fromUtf8("Formulario"));
        Formulario->resize(876, 733);
        Formulario->setMinimumSize(QSize(876, 273));
        Formulario->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(Formulario);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        logo = new QLabel(centralwidget);
        logo->setObjectName(QString::fromUtf8("logo"));
        logo->setGeometry(QRect(360, 20, 231, 101));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(190, 150, 521, 34));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 210, 751, 369));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_nome = new QLabel(widget);
        label_nome->setObjectName(QString::fromUtf8("label_nome"));
        label_nome->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);\n"
""));

        horizontalLayout->addWidget(label_nome);

        linha_nome = new QLineEdit(widget);
        linha_nome->setObjectName(QString::fromUtf8("linha_nome"));
        linha_nome->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);\n"
""));

        horizontalLayout->addWidget(linha_nome);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_sobrenome = new QLabel(widget);
        label_sobrenome->setObjectName(QString::fromUtf8("label_sobrenome"));
        label_sobrenome->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));

        horizontalLayout_2->addWidget(label_sobrenome);

        linha_sobrenome = new QLineEdit(widget);
        linha_sobrenome->setObjectName(QString::fromUtf8("linha_sobrenome"));
        linha_sobrenome->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));

        horizontalLayout_2->addWidget(linha_sobrenome);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_estudio = new QLabel(widget);
        label_estudio->setObjectName(QString::fromUtf8("label_estudio"));
        label_estudio->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));

        horizontalLayout_3->addWidget(label_estudio);

        linha_estudio = new QLineEdit(widget);
        linha_estudio->setObjectName(QString::fromUtf8("linha_estudio"));
        linha_estudio->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));

        horizontalLayout_3->addWidget(linha_estudio);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_telefone = new QLabel(widget);
        label_telefone->setObjectName(QString::fromUtf8("label_telefone"));
        label_telefone->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));

        horizontalLayout_5->addWidget(label_telefone);

        linha_telefone = new QLineEdit(widget);
        linha_telefone->setObjectName(QString::fromUtf8("linha_telefone"));
        linha_telefone->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));

        horizontalLayout_5->addWidget(linha_telefone);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_email = new QLabel(widget);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        label_email->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));

        horizontalLayout_6->addWidget(label_email);

        linha_email = new QLineEdit(widget);
        linha_email->setObjectName(QString::fromUtf8("linha_email"));
        linha_email->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));

        horizontalLayout_6->addWidget(linha_email);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_estado = new QLabel(widget);
        label_estado->setObjectName(QString::fromUtf8("label_estado"));
        label_estado->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));

        horizontalLayout_7->addWidget(label_estado);

        linha_estado = new QLineEdit(widget);
        linha_estado->setObjectName(QString::fromUtf8("linha_estado"));
        linha_estado->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));

        horizontalLayout_7->addWidget(linha_estado);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_cidade = new QLabel(widget);
        label_cidade->setObjectName(QString::fromUtf8("label_cidade"));
        label_cidade->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));

        horizontalLayout_8->addWidget(label_cidade);

        linha_cidade = new QLineEdit(widget);
        linha_cidade->setObjectName(QString::fromUtf8("linha_cidade"));
        linha_cidade->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));

        horizontalLayout_8->addWidget(linha_cidade);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_logradouro = new QLabel(widget);
        label_logradouro->setObjectName(QString::fromUtf8("label_logradouro"));
        label_logradouro->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));

        horizontalLayout_9->addWidget(label_logradouro);

        linha_logradouro = new QLineEdit(widget);
        linha_logradouro->setObjectName(QString::fromUtf8("linha_logradouro"));
        linha_logradouro->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));

        horizontalLayout_9->addWidget(linha_logradouro);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_numero = new QLabel(widget);
        label_numero->setObjectName(QString::fromUtf8("label_numero"));
        label_numero->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));

        horizontalLayout_10->addWidget(label_numero);

        linha_numero = new QLineEdit(widget);
        linha_numero->setObjectName(QString::fromUtf8("linha_numero"));
        linha_numero->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));

        horizontalLayout_10->addWidget(linha_numero);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_cep = new QLabel(widget);
        label_cep->setObjectName(QString::fromUtf8("label_cep"));
        label_cep->setStyleSheet(QString::fromUtf8("background-color: rgb(211, 215, 207);"));

        horizontalLayout_11->addWidget(label_cep);

        linha_cep = new QLineEdit(widget);
        linha_cep->setObjectName(QString::fromUtf8("linha_cep"));
        linha_cep->setStyleSheet(QString::fromUtf8("background-color: rgb(186, 189, 182);"));

        horizontalLayout_11->addWidget(linha_cep);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btn_enviar = new QPushButton(widget);
        btn_enviar->setObjectName(QString::fromUtf8("btn_enviar"));
        btn_enviar->setStyleSheet(QString::fromUtf8("background: #259900;"));

        horizontalLayout_4->addWidget(btn_enviar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_4);

        Formulario->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Formulario);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 876, 22));
        Formulario->setMenuBar(menubar);
        statusbar = new QStatusBar(Formulario);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Formulario->setStatusBar(statusbar);
        toolBar = new QToolBar(Formulario);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Formulario->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(Formulario);

        QMetaObject::connectSlotsByName(Formulario);
    } // setupUi

    void retranslateUi(QMainWindow *Formulario)
    {
        Formulario->setWindowTitle(QCoreApplication::translate("Formulario", "Formulario", nullptr));
        logo->setText(QCoreApplication::translate("Formulario", "logo", nullptr));
        label_4->setText(QCoreApplication::translate("Formulario", "<html><head/><body><h1 align=\"center\" style=\" margin-top:18px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:xx-large; font-weight:700; color:#eeeeec;\">Formul\303\241rio contato clientes</span></h1></body></html>", nullptr));
        label_nome->setText(QCoreApplication::translate("Formulario", "Nome:           ", nullptr));
        linha_nome->setText(QString());
        label_sobrenome->setText(QCoreApplication::translate("Formulario", "Sobrenome:", nullptr));
        label_estudio->setText(QCoreApplication::translate("Formulario", "Estudio:        ", nullptr));
        label_telefone->setText(QCoreApplication::translate("Formulario", "Telefone:     ", nullptr));
        label_email->setText(QCoreApplication::translate("Formulario", "Email:            ", nullptr));
        label_estado->setText(QCoreApplication::translate("Formulario", "Estado:         ", nullptr));
        label_cidade->setText(QCoreApplication::translate("Formulario", "Cidade:         ", nullptr));
        label_logradouro->setText(QCoreApplication::translate("Formulario", "logradouro: ", nullptr));
        label_numero->setText(QCoreApplication::translate("Formulario", "numero:        ", nullptr));
        label_cep->setText(QCoreApplication::translate("Formulario", "Cep:               ", nullptr));
        btn_enviar->setText(QCoreApplication::translate("Formulario", "Enviar", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("Formulario", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formulario: public Ui_Formulario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARIO_H
