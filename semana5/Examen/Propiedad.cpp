#include "Propiedad.h"

using namespace std;

Propiedad::Propiedad(double numero_millas, std::string tipoAlquiler, int numero_espacios){
    this->numero_espacios = numero_espacios;
    this->numero_millas = numero_millas;
    this->tipoAlquiler = tipoAlquiler;
}

Propiedad::~Propiedad(){}

int Propiedad::getNumeroEspacio() const {
    return numero_espacios;
}
std::string Propiedad::getTipoAlquiler() const
{
    return tipoAlquiler;
}