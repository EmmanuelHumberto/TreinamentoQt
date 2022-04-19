#ifndef MEUSLAYOUTS_H
#define MEUSLAYOUTS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MeusLayouts; }
QT_END_NAMESPACE

class MeusLayouts : public QMainWindow
{
    Q_OBJECT

public:
    MeusLayouts(QWidget *parent = nullptr);
    ~MeusLayouts();

private:
    Ui::MeusLayouts *ui;
};
#endif // MEUSLAYOUTS_H
