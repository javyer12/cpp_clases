#ifndef SUV_H
#define SUV_H

#include <string>

#include "Auto.h"

class Suv : public Auto
{
public:
    Suv(double valor_comercial, double gastos_operativos, double tarifa, int espacios, std::string modeloAuto);
    ~Suv();

    std::string getModeloAuto() const override;
    double calcularTarifa() override;
};

#endif