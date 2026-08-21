#include "Tablon.h"
#include <iostream>
#include <string>

using namespace std;

// constructor de tablon y constructor de ProductoMadera
Tablon::Tablon(
    int id,
    string tipoMadera,
    double precioBase,
    double largo,
    double ancho,
    double espesor,
    double humedad) : ProductoMadera(id, tipoMadera, precioBase), largo(largo), ancho(ancho), espesor(espesor), humedad(humedad) {}

double Tablon::calcularPrecioFinal() const
{
    double volumen = largo * ancho * espesor;
    double precio = precioBase * volumen;

    if (humedad <= 12)
    {
        precio *= 1.10;
    }
    return precio;
}
void Tablon::mostrarDatos() const
{
    cout << "\n--- Tablon ---\n";
    cout << "ID: " << id << endl;
    cout << "Tipo de Madera: " << tipoMadera << endl;
    cout << "Precio Base: $" << precioBase << endl;
    cout << "largo: " << largo << " ft" << endl;
    cout << "Ancho: " << ancho << " ft" << endl;
    cout << "Espesor: " << espesor << " ft" << endl;
    cout << "Humedad: " << humedad << endl;
    cout << "Precio Final: $" << calcularPrecioFinal() << endl;
}
// g++ main.cpp ProductoMadera.cpp -o ProductoMadera Tablon.cpp -o Tablon Viga.cpp -o Viga Panel.cpp -o Panel
// g++ -std=c++11 main.cpp ProductoMadera.cpp Tablon.cpp  -o programa.exe && ./programa.exe