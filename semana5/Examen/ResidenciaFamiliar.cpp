#include "ResidenciaFamiliar.h"
#include <iostream>

using namespace std;

ResidenciaFamiliar::ResidenciaFamiliar(double valorPropiedad, double numero_millas, std::string tipoAlquiler, int numero_espacios) : Propiedad(numero_millas, tipoAlquiler, numero_espacios), valorPropiedad(valorPropiedad)
{
    this->numero_millas = numero_millas;
    this->numero_espacios = numero_espacios;
    this->tipoAlquiler = tipoAlquiler;
}
ResidenciaFamiliar::~ResidenciaFamiliar() {}

double ResidenciaFamiliar::calcularAlquiler() const
{
    return 0.0;
}

double ResidenciaFamiliar::calcularImpuestosBienes() const
{
    return numero_millas * 3.50; // pago de bienes inmuebles 3.5/mi
}

double ResidenciaFamiliar::calcularImpuestosTradicion() const
{
    return (1.5 * valorPropiedad) / 100; // pago de tradicion 1.5% ?
}
double ResidenciaFamiliar::calcularImpuestosMantenimiento() const
{
    if (tipoAlquiler == "Edificio de Apartamento " || tipoAlquiler == "Edificio de Oficina")
    {
        return (0.5 * valorPropiedad) / 100;
    }
    return 0.0;
}