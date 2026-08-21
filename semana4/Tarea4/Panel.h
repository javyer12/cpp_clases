#ifndef PANEL_H
#define PANEL_H

#include "ProductoMadera.h"

class Panel : public ProductoMaderero
{
private:
    double largo;
    double ancho;
    double espesor;
    std::string acabado;

public:
    Panel(
        int id,
        std::string tipoMadera,
        double precioBase,
        double largo,
        double ancho,
        double espesor,
        std::string acabado);

    double calcularPrecioFinal() const override;
    void mostrarDatos() const override;
};

#endif