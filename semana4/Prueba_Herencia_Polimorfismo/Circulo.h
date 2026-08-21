#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo : public Figura
{
public:
    Circulo();
    ~Circulo();
    Circulo(int r, char caracter) : Figura(2 * r, 2 * r, "Circulo", caracter)
    {
        radio = r;
        caracter = caracter;
    }
    virtual void Dibujar() const;

private:
    double radio;
    char caracter;
};

#endif