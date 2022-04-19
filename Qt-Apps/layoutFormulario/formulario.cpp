#include "formulario.h"
#include "ui_formulario.h"
#include "qmessagebox.h"
#include "janelacontatos.h"
#include <QPixmap>

Formulario::Formulario(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Formulario)
{
    ui->setupUi(this);
    QPixmap logo("/home/ss/Imagens/logoLigado.jpg");
    ui->logo->setPixmap(logo.scaled(150, 150, Qt::KeepAspectRatio));
}

Formulario::~Formulario()
{
    delete ui;
}


void Formulario::on_btn_enviar_clicked()
{
    QString nome, sobrenome, estudio, email, estado, cidade, logradouro, telefone, numero, cep;

    nome = ui -> linha_nome -> text();
    sobrenome = ui -> linha_sobrenome -> text();
    estudio = ui -> linha_estudio -> text();
    telefone = ui -> linha_telefone -> text();
    email = ui -> linha_email -> text();
    estado = ui -> linha_estado -> text();
    cidade = ui -> linha_cidade -> text();
    logradouro = ui -> linha_logradouro -> text();
    numero = ui -> linha_numero -> text();
    cep = ui -> linha_cep -> text();

    /*QMessageBox::information(this, "Formulario de contato", "O nome que você digitou é: <b> "  + nome + "</b>" +
                             "<br>O Seu Sobrenome é: <b>" + sobrenome + "</b>" +
                             "<br>O Seu e-mail é: <b>" + email + "</b>");*/
janelaContatos dados;
dados.apresentaDados(nome, sobrenome, estudio, telefone, email, estado, cidade, logradouro, numero, cep);
dados.exec();

ui -> linha_nome -> clear();
ui -> linha_sobrenome -> clear();
ui -> linha_estudio -> clear();
ui -> linha_telefone -> clear();
ui -> linha_email -> clear();
ui -> linha_estado -> clear();
ui -> linha_cidade -> clear();
ui -> linha_logradouro -> clear();
ui -> linha_numero -> clear();
ui -> linha_cep -> clear();

ui -> linha_nome -> setFocus();

}
