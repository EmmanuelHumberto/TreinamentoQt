#include "combobox.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Combobox w;
    w.show();
    return a.exec();
}
