#include "Panel.h"
#include <iostream>

using namespace std;

Panel::Panel(
    int id,
    string tipoMadera,
    double precioBase,
    double largo,
    double ancho,
    double espesor,
    string acabado)
    : ProductoMaderero(id, tipoMadera, precioBase),
      largo(largo),
      ancho(ancho),
      espesor(espesor),
      acabado(acabado)
{
}

double Panel::calcularPrecioFinal() const
{

    double volumen = largo * ancho * espesor;

    double precio = precioBase * volumen;

    if (acabado == "Premium" || acabado == "premium")
    {
        precio *= 1.30;
    }
    else if (acabado == "Barnizado" || acabado == "barnizado")
    {
        precio *= 1.20;
    }

    return precio;
}

void Panel::mostrarDatos() const
{

    cout << "\n--- PANEL ---\n";
    cout << "ID: " << id << endl;
    cout << "Tipo de madera: " << tipoMadera << endl;
    cout << "Precio base: $" << precioBase << endl;
    cout << "Largo: " << largo << " m" << endl;
    cout << "Ancho: " << ancho << " m" << endl;
    cout << "Espesor: " << espesor << " m" << endl;
    cout << "Acabado: " << acabado << endl;
    cout << "Precio final: $" << calcularPrecioFinal() << endl;
}