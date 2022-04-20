#include "listwidget.h"
#include "ui_listwidget.h"

ListWidget::ListWidget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ListWidget)
{
    ui->setupUi(this);
}

ListWidget::~ListWidget()
{
    delete ui;
}



void ListWidget::on_btn_adicionar_clicked()
{
    ui -> lineEdit -> text();
    ui -> listWidget -> addItem(ui -> lineEdit -> text());
    ui -> lineEdit -> clear();
    ui -> lineEdit -> setFocus();

}

