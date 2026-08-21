#ifndef PRODUCTOMADERA_H
#define PRODUCTOMADERA_H
#include <string>

using namespace std;
// aqui se inicializa todo
class ProductoMadera
{
protected:
    int id;
    string tipoMadera;
    double precioBase;

public:
    ProductoMadera(int id, string tipoMadera, double preciobase);
    virtual ~ProductoMadera();

    //getters 
    int getId() const;
    string getTipoMadera() const;
    double getPrecioBase() const;

    virtual double calcularPrecioFinal() const = 0;
    virtual void mostrarDatos() const = 0;
};
#endif