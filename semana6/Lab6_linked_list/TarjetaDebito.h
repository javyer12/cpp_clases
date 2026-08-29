#ifndef TARJETADEBITO_H
#define TARJETADEBITO_H
#include <string>

class TarjetaDebito
{
protected:
    std::string titular;
    std::string numero_tarjeta;
    double saldo;
public:
    TarjetaDebito(std::string titular, std::string numero_tarjeta, double saldo);
    virtual ~TarjetaDebito();

    std::string getTitular() const;
    void setTitular(std::string _titular);

    std::string getNumeroTarjeta() const;
    void setNumeroTarjeta(std::string _numero_cuenta);

    double getSaldo() const;
    void setSaldo(double _saldo);
    virtual void mostrarDetalles() const = 0;
    virtual void mostrarBeneficios() const = 0;
};

#endif