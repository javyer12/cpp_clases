#include <iostream>

#include "Sedan.h"

using namespace std;

Sedan::Sedan(double valor_comercial, double gastos_operativos, double tarifa, int espacios, std::string modeloAuto) : Auto(valor_comercial, gastos_operativos, tarifa, espacios, modeloAuto)
{
}
Sedan::~Sedan()
{
}

std::string Sedan::getModeloAuto() const
{
    return "Sedan Económico";
}
double Sedan::calcularTarifa()
{

    return 6280.00;
}
// int Sedan::getEspacios() const {
//     return getEspacios();
// }