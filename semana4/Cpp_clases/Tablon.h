#ifndef TABLON_H
#define TABLON_H
#include <string>
#include "ProductoMadera.h"

using namespace std;

class Tablon : public ProductoMadera
{
public:
    Tablon(int id, string tipoMadera, double precioBase, double largo, double ancho, double espesor, double humedad);
    double calcularPrecioFinal() const override;
    void mostrarDatos() const override;

private:
    double largo;
    double ancho;
    double espesor;
    double humedad;
};

#endif