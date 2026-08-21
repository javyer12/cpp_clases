#ifndef VIGA_H
#define VIGA_H

#include "ProductoMadera.h"

class Viga : public ProductoMaderero
{
private:
    double largo;
    double ancho;
    double alto;
    int resistencia;

public:
    Viga(
        int id,
        std::string tipoMadera,
        double precioBase,
        double largo,
        double ancho,
        double alto,
        int resistencia);

    double calcularPrecioFinal() const override;
    void mostrarDatos() const override;
};

#endif