#ifndef PRODUCTOMADERERO_H
#define PRODUCTOMADERERO_H

#include <string>
using namespace std;
class ProductoMaderero
{
protected:
    int id;
    string tipoMadera;
    double precioBase;

public:
    ProductoMaderero(int id, std::string tipoMadera, double precioBase);

    virtual ~ProductoMaderero();

    int getId() const;
    string getTipoMadera() const;
    double getPrecioBase() const;

    virtual double calcularPrecioFinal() const = 0;
    virtual void mostrarDatos() const = 0;
};

#endif