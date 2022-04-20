#include "combobox.h"
#include "ui_combobox.h"

Combobox::Combobox(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Combobox)
{
    ui->setupUi(this);
    QString so[] { "Linux", "Windows", "MacOS", "freeBSD"};
    QString iconis[] {":so/linux", ":so/windows", ":so/macos", ":so/freebsd"};
    ui -> comboBox ->addItem("RedoxOs");
    for (unsigned long int i = 0; i < sizeof(so)/sizeof(so[0]); i++) {
        ui -> comboBox ->addItem(QIcon(iconis[i]), so[i]);


    }

}

Combobox::~Combobox()
{
    delete ui;
}


void Combobox::on_pushButton_clicked()
{
    ui -> label_escolha ->setText( " você escolheu: <b>" + ui -> comboBox ->currentText()+ "</b>");
}

