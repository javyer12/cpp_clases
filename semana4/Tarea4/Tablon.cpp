#include "Tablon.h"
#include <iostream>
#include <string>

using namespace std;

Tablon::Tablon(
    int id,
    string tipoMadera,
    double precioBase,
    double largo,
    double ancho,
    double espesor,
    double humedad)
    : ProductoMaderero(id, tipoMadera, precioBase),
      largo(largo),
      ancho(ancho),
      espesor(espesor),
      humedad(humedad)
{
}

double Tablon::calcularPrecioFinal() const
{

    double volumen = largo * ancho * espesor;

    // El precio aumenta según el volumen
    double precio = precioBase * volumen;

    // Si la humedad es menor o igual al 12%,
    // se considera madera seca y tiene un recargo del 10%.
    if (humedad <= 12)
    {
        precio *= 1.10;
    }

    return precio;
}

void Tablon::mostrarDatos() const
{

    cout << "\n--- TABLON ---\n";
    cout << "ID: " << id << endl;
    cout << "Tipo de madera: " << tipoMadera << endl;
    cout << "Precio base: $" << precioBase << endl;
    cout << "Largo: " << largo << " m" << endl;
    cout << "Ancho: " << ancho << " m" << endl;
    cout << "Espesor: " << espesor << " m" << endl;
    cout << "Humedad: " << humedad << "%" << endl;
    cout << "Precio final: $" << calcularPrecioFinal() << endl;
}