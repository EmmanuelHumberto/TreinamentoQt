#include "menubarras.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MenuBarras w;
    w.show();
    return a.exec();
}
