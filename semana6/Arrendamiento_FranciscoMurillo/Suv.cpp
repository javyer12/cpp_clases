#include <iostream>

#include "Suv.h"

using namespace std;

Suv::Suv(double valor_comercial, double gastos_operativos, double tarifa, int espacios, std::string modeloAuto) : Auto(valor_comercial, gastos_operativos, tarifa, espacios, modeloAuto)
{
}
Suv::~Suv()
{
}

std::string Suv::getModeloAuto() const
{
    return "Suv de Lujo.";
}
double Suv::calcularTarifa()
{

    return 6840.00;
}