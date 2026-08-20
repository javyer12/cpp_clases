#ifndef RESIDENCIA_H
#define RESIDENCIA_H

#include "Servicios.h"

class Residencia : public Servicios
{
public:
    Residencia(int id, double precio, std::string zona, int cantidadKW, double totalGenerado);
    ~Residencia();
    double getTotalGenerado() const;
    double calcularTotal(std::string zona) const override;
    void reporteIngresos(std::string zona) const override;

private:
    int cantidadKW;
    double totalGenerado;
};

#endif