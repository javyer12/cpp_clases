#include "Cuadrado.h"

Cuadrado::Cuadrado(double origenX, double origenY,
                   double ancho, double largo) : Figura(origenX, origenY, ancho, largo)
{
}

Cuadrado::~Cuadrado()
{
}

double Cuadrado::calcularPerimetro() const
{
    return 2 * getAncho() + 2 * getLargo();
}

double Cuadrado::calcularArea() const
{
    return getAncho() * getLargo();
}

void Cuadrado::mostrarAtributos() const
{
    cout << "\nOrigen x: " << getOrigenX()
         << "\nOrigen y: " << getOrigenY()
         << "\nAncho: " << getAncho()
         << "\nLargo: " << getLargo()
         << "\nPerimetro: " << calcularPerimetro()
         << "\nArea: " << calcularArea()
         << endl;
}

string Cuadrado::getClase() const
{
    return "Cuadrado";
}
