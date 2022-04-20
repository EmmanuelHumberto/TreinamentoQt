#include "menubarras.h"
#include "ui_menubarras.h"
#include "QMessageBox"

MenuBarras::MenuBarras(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MenuBarras)
{
    ui->setupUi(this);
}

MenuBarras::~MenuBarras()
{
    delete ui;
}


void MenuBarras::on_actionSobre_esse_programa_triggered()
{
    QMessageBox::about(this,"Sobre esse Programa", "<h2>Aplicação criada no Treinamento de Qt</h2>");
}

