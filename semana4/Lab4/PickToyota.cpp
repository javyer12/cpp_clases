#include "PickToyota.h"
#include "Automovil.h"
#include <iostream>
#include <string>

using namespace std;

PickToyota::PickToyota() : Automovil()
{
    precio = 0.0;
    velocidadMaxima = 0;
}

PickToyota::PickToyota(double pre, int vm) : Automovil()
{
    precio = 0.0;
    velocidadMaxima = 0;
}
PickToyota::~PickToyota() {};

string PickToyota::arrancar() const
{
    return Automovil::arrancar();
}
string PickToyota::pitar() const
{
    return Automovil::pitar();
}

void PickToyota::mostrarAtributo()
{
    cout << "Toyota: " << endl;
    cout << precio << endl;
    cout << velocidadMaxima << endl;
    Automovil::mostrarAtributos();
}