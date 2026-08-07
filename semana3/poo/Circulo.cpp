#include "Circulo.h"
#include <iostream>

Circulo::Circulo()
{
    // constructor por defecto
    radio = 10.0;
    origenX = 0.0;
    origenY = 0.0;
    colorBorde = 0;     // negro
    colorRelleno = 255; // blanco
}

Circulo::~Circulo()
{
    // destructor por defecto
}

double Circulo::setRadio(double origenX)
{
    if (origenX > 0)
    {
        this->origenX = origenX;
    }
}
double Circulo::getOrigenX() const
{
    return origenX;
}
double Circulo::setOrigenX(double origenX)
{
    return origenX;
}
// en este archivo se implementan los metodos de la clase Circulo,
//   se definen las funciones de la clase, se implementan los metodos de la clase,