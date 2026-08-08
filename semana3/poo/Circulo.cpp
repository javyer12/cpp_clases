// #include "Circulo.h"
// #include <iostream>

// Circulo::Circulo()
// {
//     // constructor por defecto
//     radio = 10.0;
//     origenX = 0.0;
//     origenY = 0.0;
//     colorBorde = 0;     // negro
//     colorRelleno = 255; // blanco
// }

// Circulo::~Circulo()
// {
//     // destructor por defecto
// }

// double Circulo::setRadio(double origenX)
// {
//     if (origenX > 0)
//     {
//         this->origenX = origenX;
//     }
// }
// double Circulo::getOrigenX() const
// {
//     return origenX;
// }
// double Circulo::setOrigenX(double origenX)
// {
//     return origenX;
// }
// // en este archivo se implementan los metodos de la clase Circulo,
// //   se definen las funciones de la clase, se implementan los metodos de la clase,

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

double Circulo::setRadio(double origenX)
{
    if (origenX > 0.0)
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
    this->origenX = origenX;
}

double Circulo::getOrigenY() const
{
    return origenY;
}

double Circulo::setOrigenY(double origenY)
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

// void mostrarAtributos()
// {
//     cout << "Radio: " << radio
//          << "\nOrigen x: " << origenX
//          << "\nOrigen y: " << origeny
//          << "\nPerimetro: " << calcularPerimetro()
//          << "\nArea: " << calcularArea()
//          << endl;
// }
