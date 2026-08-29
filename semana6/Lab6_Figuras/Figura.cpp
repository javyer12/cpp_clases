#include "Figura.h"

Figura::Figura(double origenX, double origenY, double ancho, double largo)
{
    this->largo = largo;
    this->ancho = ancho;
    this->origenX = origenX;
    this->origenY = origenY;
}

Figura::~Figura() {}

double Figura::getLargo() const
{
    return largo;
}

void Figura::setLargo(double largo)
{
    this->largo = largo;
}

double Figura::getAncho() const
{
    return ancho;
}

void Figura::setAncho(double ancho)
{
    this->ancho = ancho;
}

double Figura::getOrigenX() const
{
    return origenX;
}

void Figura::setOrigenX(double origenX)
{
    this->origenX = origenX;
}

double Figura::getOrigenY() const
{
    return origenY;
}

void Figura::setOrigenY(double origenY)
{
    this->origenY = origenY;
}

string Figura::getClase() const
{
    return "Figuras";
}
