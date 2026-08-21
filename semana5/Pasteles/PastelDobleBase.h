#ifndef PASTELDOBLEBASE_H
#define PASTELDOBLEBASE_H
#include "Pastel.h"

class PastelDobleBase : public Pastel
{
public:
    PastelDobleBase(int numero_capas, int numero_pisos, string textura, string tipo_crema, bool medida_estandar, string decoracion, string tipo_fruta);
    ~PastelDobleBase();

    double calcularVolumenPastel() const override;
    void mostrarCaracteristicasPastel() const override;

private:
    string decoracion; // asigna el tipo de decoracion, ejemplo "rosas", "spider man", "bob esponga"
    string tipo_fruta; // determina el tipo de fruta, ejemplo: "fresa", "uvas", "cerezas", "arandanos"
};
#endif