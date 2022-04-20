#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Combobox; }
QT_END_NAMESPACE

class Combobox : public QMainWindow
{
    Q_OBJECT

public:
    Combobox(QWidget *parent = nullptr);
    ~Combobox();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Combobox *ui;
};
#endif // COMBOBOX_H
