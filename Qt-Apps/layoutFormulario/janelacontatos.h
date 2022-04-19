#ifndef JANELACONTATOS_H
#define JANELACONTATOS_H

#include <QDialog>

namespace Ui {
class janelaContatos;
}

class janelaContatos : public QDialog
{
    Q_OBJECT

public:
    explicit janelaContatos(QWidget *parent = nullptr);
    void apresentaDados(QString, QString, QString,QString, QString,
                        QString,QString,QString, QString, QString);
    ~janelaContatos();

private:
    Ui::janelaContatos *ui;
};

#endif // JANELACONTATOS_H
