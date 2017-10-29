#include "lagrange.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Lagrange w;
    w.show();

    return a.exec();
}
