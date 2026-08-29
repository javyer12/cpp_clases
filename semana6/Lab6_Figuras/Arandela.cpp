#include "Arandela.h"

// using namespace std;

/*Arandela::Arandela() : Circulo() { // Const. clase derivada llama const. clase base.
    radioInterno = 5.0;
}*/

Arandela::Arandela(double origenX, double origenY,
                   double ancho, double largo,
                   double radioExterno, double radioInterno) : Circulo(origenX, origenY, ancho, largo, radioExterno)
{ // Const. clase derivada llama const. clase base.

    this->setRadioInterno(radioInterno);
}

Arandela::~Arandela() {}

double Arandela::getRadioInterno() const { return this->radioInterno; }

void Arandela::setRadioInterno(double radioInterno)
{
    if (radioInterno > 0.0 && radioInterno < getRadio())
        this->radioInterno = radioInterno;
}

double Arandela::calcularPerimetroInterno() const
{
    return 2.0 * M_PI * radioInterno;
}

double Arandela::calcularArea() const
{
    return Circulo::calcularArea() - M_PI * pow(radioInterno, 2.0);
}

void Arandela::mostrarAtributos() const
{
    cout << "\nRadio externo: " << getRadio()
         << "\nRadio interno: " << this->radioInterno
         << "\nOrigen x: " << getOrigenX()
         << "\nOrigen y: " << getOrigenY()
         << "\nPerimetro externo: " << calcularPerimetro()
         << "\nPerimetro interno: " << this->calcularPerimetroInterno()
         << "\nArea: " << calcularArea()
         << endl;
}

string Arandela::getClase() const
{
    return "Arandela";
}
