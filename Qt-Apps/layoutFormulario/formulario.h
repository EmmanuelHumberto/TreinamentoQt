#ifndef FORMULARIO_H
#define FORMULARIO_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Formulario; }
QT_END_NAMESPACE

class Formulario : public QMainWindow
{
    Q_OBJECT

public:
    Formulario(QWidget *parent = nullptr);
    ~Formulario();

private slots:
    void on_btn_enviar_clicked();

private:
    Ui::Formulario *ui;
};
#endif // FORMULARIO_H
