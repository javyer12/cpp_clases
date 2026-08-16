#include "Circulo.h"
#include <cmath>
#include <iostream>

using namespace std;

Circulo::Circulo()
{
    radio = 10.0;
    origenX = 0.0;
    origenY = 0.0;
}

Circulo::Circulo(double origenX, double origenY,
                 double radio)
{
    this->origenX = origenX;
    this->origenY = origenY;
    this->radio = radio > 0.0 ? radio : 10.0;
}

Circulo::~Circulo()
{
    radio = 0.0;
    origenX = 0.0;
    origenY = 0.0;
}

double Circulo::getRadio() const
{
    return radio;
}

void Circulo::setRadio(double radio)
{
    if (radio > 0.0)
    {
        this->radio = radio;
    }
}

double Circulo::getOrigenX() const
{
    return origenX;
}

void Circulo::setOrigenX(double origenX)
{
    this->origenX = origenX;
}

double Circulo::getOrigenY() const
{
    return origenY;
}

void Circulo::setOrigenY(double origenY)
{
    this->origenY = origenY;
}

double Circulo::calcularPerimetro() const
{
    return 2.0 * M_PI * radio;
}

double Circulo::calcularArea() const
{
    return M_PI * pow(radio, 2.0);
}

void Circulo::mostrarAtributos() const
{
    cout << "\nRadio: " << radio
         << "\nOrigen x: " << origenX
         << "\nOrigen y: " << origenY
         << "\nPerimetro: " << calcularPerimetro()
         << "\nArea: " << calcularArea()
         << endl;
}
