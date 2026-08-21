#include "Pastel.h"
#include <iostream>

using namespace std;

Pastel::Pastel(int numero_capas, int numero_pisos, string textura, string tipo_crema, bool medida_estandar)
{
    this->numero_capas = numero_capas;
    this->numero_pisos = numero_pisos;
    this->textura = textura;
    this->tipo_crema = tipo_crema;
    this->medida_estandar = medida_estandar;
}

Pastel::~Pastel() {}

int Pastel::getNumeroCapas()
{
    return numero_capas;
}
void Pastel::setNumeroCapas(int numero_capas)
{
    this->numero_capas = numero_capas;
}

int Pastel::getNumeroPiso()
{
    return numero_pisos;
}
void Pastel::setNumeroPiso(int numero_pisos)
{
    this->numero_pisos = numero_pisos;
}
string Pastel::getTipoCremaUsada()
{
    return tipo_crema;
}
void Pastel::setTipoCremaUsada(string tipo_crema)
{
    this->tipo_crema = tipo_crema;
}
