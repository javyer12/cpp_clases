#ifndef RESIDENCIA_H
#define RESIDENCIA_H

#include "Propiedad.h"

class Residencia : public Propiedad
{
public:
    Residencia(int id, std::string direccion, double valor, double gastosFijos, int espacios);
    ~Residencia();

    std::string getTipo() const override;
    double CalcularImpuestosTradicion() const override;
    double CalcularMantenimiento() const override;
    double CalcularImpuestosInmuebles() const override;
    double CalcularAlquiler() const override;
};

#endif