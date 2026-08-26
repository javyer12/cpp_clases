#ifndef APARTAMENTO_H
#define APARTAMENTO_H

#include "Propiedad.h"

class Apartamento : public Propiedad {
    public:
        Apartamento(int id, std::string direccion, double valor, double gastosFijos, int espacios);
        ~Apartamento();

        double CalcularMantenimiento() const override;
        std::string getTipo() const override;
};
#endif