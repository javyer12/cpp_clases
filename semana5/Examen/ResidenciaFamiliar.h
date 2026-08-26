#ifndef RESIDENCIAFAMILIAR_H
#define RESIDENCIAFAMILIAR_H

#include "Propiedad.h"

class ResidenciaFamiliar : public Propiedad
{
public:
    ResidenciaFamiliar(double valorPropiedad,double numero_millas, std::string tipoAlquiler, int numero_espacios);

    ~ResidenciaFamiliar();

    double calcularAlquiler() const override;
    double calcularImpuestosBienes() const override;
    double calcularImpuestosTradicion() const override;
    double calcularImpuestosMantenimiento() const override;

private:
    double valorPropiedad;
};

#endif