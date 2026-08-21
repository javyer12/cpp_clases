#include "Viga.h"
#include <iostream>

using namespace std;

Viga::Viga(int id, string tipoMadera, double precioBase, double largo, double ancho, double alto, int resistencia) : ProductoMadera(id, tipoMadera, precioBase), largo(largo), ancho(ancho), alto(alto), resistencia(resistencia) {}

double Viga::calcularPrecioFinal() const {
    double volumen = largo * ancho * alto;
    double precio = precioBase * volumen;

    if(resistencia>=80){
        precio *= 1.25;
    }else if(resistencia>=60){
        precio *= 1.15;
    }
    return precio;
}

void Viga::mostrarDatos() const {
    cout << "\n--- VIGA ---\n";
    cout << "ID: " << id << endl;
    cout << "Tipo de madera: " << tipoMadera << endl;
    cout << "Precio base: $" << precioBase << endl;
    cout << "Largo: " << largo << " m" << endl;
    cout << "Ancho: " << ancho << " m" << endl;
    cout << "Alto: " << alto << " m" << endl;
    cout << "Resistencia: " << resistencia << endl;
    cout << "Precio final: $" << calcularPrecioFinal() << endl;
}