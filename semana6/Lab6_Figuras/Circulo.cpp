#include "Circulo.h"

/*Circulo::Circulo(): Figuras()
{
    radio = 10.0;
}*/

/*Circulo::Circulo(double origenX, double origenY, double radio):
         Figuras(origenX, origenY, 10, 10)
{
    this->setRadio(radio);
}*/

Circulo::Circulo(double origenX, double origenY,
                 double ancho, double largo, double radio) : Figura(origenX, origenY, ancho, largo)
{
    this->setRadio(radio);
}

Circulo::~Circulo()
{
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
         << "\nOrigen x: " << getOrigenX()
         << "\nOrigen y: " << getOrigenY()
         << "\nPerimetro: " << calcularPerimetro()
         << "\nArea: " << calcularArea()
         << endl;
}

string Circulo::getClase() const
{
    return "Circulo";
}
