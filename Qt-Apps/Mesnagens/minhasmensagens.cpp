#include "minhasmensagens.h"
#include "ui_minhasmensagens.h"
#include "qmessagebox.h"

MinhasMensagens::MinhasMensagens(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MinhasMensagens)
{
    ui->setupUi(this);
}

MinhasMensagens::~MinhasMensagens()
{
    delete ui;
}


void MinhasMensagens::on_btn_info_clicked()
{
    QMessageBox::information(this, "Terminal root info", "Informação");

}


void MinhasMensagens::on_btn_perigo_clicked()
{
    QMessageBox::critical(this, "Terminal root alerta", "Erro");

}


void MinhasMensagens::on_btn_aviso_clicked()
{
    QMessageBox::warning(this, "Terminal root aviso", "Aviso");

}


void MinhasMensagens::on_btn_about_clicked()
{
    QMessageBox::about(this, "Sobre Terminal root", "<h3>Terminal Root Informa</h3>"
                             "<a href='https://terminalroot.com.br/'>"
                             "Acesse o site para mais informações.</a>"
                             "<br>"
                             "<i>Meu About!</i>");
}

