#include "janelacontatos.h"
#include "ui_janelacontatos.h"
#include <QPixmap>

janelaContatos::janelaContatos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::janelaContatos)
{
    ui->setupUi(this);
    QPixmap logo("/home/ss/Imagens/logoLigado.jpg");
    ui->logo_auxiliar->setPixmap(logo.scaled(150, 150, Qt::KeepAspectRatio));
}

void janelaContatos::apresentaDados(QString nome, QString sobrenome, QString estudio, QString telefone, QString email,
                                    QString estado, QString cidade, QString logradouro, QString numero, QString cep)
{
    ui -> labelNome -> setText ( nome );
    ui -> labelSobrenome -> setText ( sobrenome );
    ui -> labelEstudio -> setText(estudio);
    ui -> labelTelefone -> setText ( telefone );
    ui -> labelEmail -> setText ( email );
    ui -> labelEstado -> setText ( estado );
    ui -> labelCidade -> setText(cidade);
    ui -> labelLogradouro -> setText(logradouro);
    ui -> labelNumero -> setText(numero);
    ui -> labelCep -> setText(cep);

}

janelaContatos::~janelaContatos()
{
    delete ui;
}
