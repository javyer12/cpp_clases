#ifndef CUADRADO_H
#define CUADRADO_H

#include "Figura.h"

class Cuadrado : public Figura
{
public:
    Cuadrado(double = 0.0, double = 0.0, double = 10.0, double = 10.0);
    ~Cuadrado();

    virtual double calcularPerimetro() const;
    virtual double calcularArea() const;

    virtual void mostrarAtributos() const;

    virtual string getClase() const;
};

#endif // CUADRADO_H
