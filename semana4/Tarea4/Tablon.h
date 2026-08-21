#ifndef TABLON_H
#define TABLON_H

#include "ProductoMadera.h"
using namespace std;

class Tablon : public ProductoMaderero
{
private:
    double largo;
    double ancho;
    double espesor;
    double humedad;

public:
    Tablon(
        int id,
        string tipoMadera,
        double precioBase,
        double largo,
        double ancho,
        double espesor,
        double humedad);

    double calcularPrecioFinal() const override;
    void mostrarDatos() const override;
};

#endif