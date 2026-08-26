#ifndef OFICINA_H
#define OFICINA_H

#include "Propiedad.h"

class Oficina : public Propiedad {
    public:
        Oficina(int id, std::string direccion, double valor, double gastosFijos, int espacios);
        ~Oficina();

        double CalcularMantenimiento() const override;
        std::string getTipo() const override;
};
#endif