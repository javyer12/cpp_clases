#ifndef TARJETAPREMIUM_H
#define TARJETAPREMIUM_H
#include "TarjetaDebito.h"

class TarjetaPremium : public TarjetaDebito
{
public:
    TarjetaPremium(std::string _titular, std::string _numero_tarjeta, double _saldo,double _cashBack);
    virtual ~TarjetaPremium();

    double getCashBack() const;
    void mostrarDetalles() const override;
    void mostrarBeneficios() const override;

private:
    double cashBack;
};
#endif