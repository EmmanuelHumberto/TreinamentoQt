#include "meuslayouts.h"
#include "ui_meuslayouts.h"

MeusLayouts::MeusLayouts(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MeusLayouts)
{
    ui->setupUi(this);
}

MeusLayouts::~MeusLayouts()
{
    delete ui;
}

