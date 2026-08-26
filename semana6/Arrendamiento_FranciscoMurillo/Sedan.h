#ifndef SEDAN_H
#define SEDAN_H

#include <string>

#include "Auto.h"

class Sedan: public Auto{
    public:
        Sedan(double valor_comercial, double gastos_operativos, double tarifa, int espacios, std::string modeloAuto);
        ~Sedan();
        double calcularTarifa() override;
        std::string getModeloAuto() const override;
        // int getEspacios() const override;
};

#endif