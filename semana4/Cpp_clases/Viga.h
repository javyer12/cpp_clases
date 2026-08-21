#ifndef VIGA_H
#define VIGA_H
#include <iostream>
#include <string>
#include "ProductoMadera.h"

using namespace std;

class Viga : public ProductoMadera
{
public:
    // en el constructor de la clase hijo, tambien se definen los atributos de la clase padre.
    Viga(int id, string tipoMadera, double precioBase, double largo, double ancho, double alto, int resistencia);
    double calcularPrecioFinal() const override;

    void mostrarDatos() const override;

private:
    double largo;
    double ancho;
    double alto;
    int resistencia;
};

#endif