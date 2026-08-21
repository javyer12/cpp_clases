#include "Figura.h"
#include <iostream>

using namespace std;

Figura::Figura(){
    alto = 0.0;
    ancho = 0.0;
    figura = "";
}
Figura::~Figura(){}

int Figura::getAlto() const {
    return alto;
}
void Figura::setAlto(int alto)
{
    this->alto = alto;
}
int Figura::getAncho() const
{
    return ancho;
}
void Figura::setAncho(int ancho)
{
    this->ancho = ancho;
}
string Figura::getFigura() const
{
    return figura;
}
void Figura::setFigura(string figura)
{
    this->figura = figura;
}