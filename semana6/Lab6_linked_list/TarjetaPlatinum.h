#ifndef TARJETAPLATINUM_H
#define TARJETAPLATINUM_H
#include "TarjetaDebito.h"

class TarjetaPlatinum : public TarjetaDebito
{
public:
    TarjetaPlatinum(std::string _titular, std::string _numero_tarjeta, double _saldo, double cobertura_seguro);
    virtual ~TarjetaPlatinum();

    double getCobertura() const;

    void mostrarDetalles() const override;
    void mostrarBeneficios() const override;

private:
    double cobertura_seguro;
};
#endif