#include "meuslayouts.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MeusLayouts w;
    w.show();
    return a.exec();
}
