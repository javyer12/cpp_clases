#ifndef SERVICIOS_H
#define SERVICIOS_H
#include "string"

class Servicios
{
public:
    Servicios(int id, double precio, std::string zona);
    ~Servicios();

    virtual double calcularTotal(std::string zona) const = 0;
    virtual void reporteIngresos(std::string zona) const = 0;

    int getId() const;
    double getPrecio() const;
    // double getTotalGenerado() const;
    std::string getZona() const;

private:
    int id;
    double precio;
    std::string zona;
    // double totalGenerado;
};

#endif