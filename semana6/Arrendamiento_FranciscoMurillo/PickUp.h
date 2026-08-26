#ifndef PICKUP_H
#define PICKUP_H

#include <string>

#include "Auto.h"

class PickUp : public Auto
{
public:
    PickUp(double valor_comercial, double gastos_operativos, double tarifa, int espacios, std::string modeloAuto);
    ~PickUp();

    std::string getModeloAuto() const override;
    double calcularTarifa() override;
};

#endif