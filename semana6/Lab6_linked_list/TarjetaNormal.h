#ifndef TARJETANORMAL_H
#define TARJETANORMAL_H
#include "TarjetaDebito.h"

class TarjetaNormal : public TarjetaDebito
{
public:
    TarjetaNormal(std::string _titular, std::string _numero_tarjeta, double _saldo);
    virtual ~TarjetaNormal();

    void mostrarDetalles() const override;
    void mostrarBeneficios() const override;
};
#endif