#ifndef MINHASMENSAGENS_H
#define MINHASMENSAGENS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MinhasMensagens; }
QT_END_NAMESPACE

class MinhasMensagens : public QMainWindow
{
    Q_OBJECT

public:
    MinhasMensagens(QWidget *parent = nullptr);
    ~MinhasMensagens();

private slots:
    void on_btn_info_clicked();

    void on_btn_perigo_clicked();

    void on_btn_aviso_clicked();

    void on_btn_about_clicked();

private:
    Ui::MinhasMensagens *ui;
};
#endif // MINHASMENSAGENS_H
