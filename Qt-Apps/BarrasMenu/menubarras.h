#ifndef MENUBARRAS_H
#define MENUBARRAS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MenuBarras; }
QT_END_NAMESPACE

class MenuBarras : public QMainWindow
{
    Q_OBJECT

public:
    MenuBarras(QWidget *parent = nullptr);
    ~MenuBarras();

private slots:
    void on_actionSobre_esse_programa_triggered();

private:
    Ui::MenuBarras *ui;
};
#endif // MENUBARRAS_H
