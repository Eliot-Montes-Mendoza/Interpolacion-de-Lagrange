#ifndef LAGRANGE_H
#define LAGRANGE_H

#include <QMainWindow>

namespace Ui {
class Lagrange;
}

class Lagrange : public QMainWindow
{
    Q_OBJECT

public:
    explicit Lagrange(QWidget *parent = 0);
    ~Lagrange();
    double puntox[5], puntoy[5];
    double fx[5];
    int i,j,k,npuntos;
    double x, yp;
    double fxi, fx1;
public slots:
    void ejecutar();
    void limpiar();
    void cargar();

private:
    Ui::Lagrange *ui;
};

#endif // LAGRANGE_H
