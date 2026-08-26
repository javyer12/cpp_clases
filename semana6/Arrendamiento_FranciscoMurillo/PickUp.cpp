#include <iostream>

#include "PickUp.h"

using namespace std;

PickUp::PickUp(double valor_comercial, double gastos_operativos, double tarifa, int espacios, std::string modeloAuto) : Auto(valor_comercial, gastos_operativos, tarifa, espacios, modeloAuto)
{
}
PickUp::~PickUp()
{
}

std::string PickUp::getModeloAuto() const
{
    return "Pickup  de Carga 4x4";
}
double PickUp::calcularTarifa()
{

    return 8460.00;
}