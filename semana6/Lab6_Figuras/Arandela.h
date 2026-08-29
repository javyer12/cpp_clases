#ifndef ARANDELA_H
#define ARANDELA_H

#include "Circulo.h"

class Arandela : public Circulo
{
public:
    Arandela(double = 0.0, double = 0.0, double = 10.0, double = 10.0,
             double = 10.0, double = 5.0);

    ~Arandela();

    double getRadioInterno() const;
    void setRadioInterno(double);

    double calcularPerimetroInterno() const;
    double calcularArea() const; // Ocultamiento de función.

    void mostrarAtributos() const; // Ocultamiento.
    virtual string getClase() const;

private:
    double radioInterno;
};

#endif // ARANDELA_H
