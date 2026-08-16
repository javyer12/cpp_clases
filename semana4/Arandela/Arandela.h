#ifndef ARANDELA_H
#define ARANDELA_H

#include "Circulo.h"

class Arandela : public Circulo
{
public:
    Arandela();
    Arandela(double, double, double, double);
    ~Arandela();

    double getRadioInterno() const;
    void setRadioInterno(double);

    double calcularPerimetroInterno() const;
    double calcularArea() const; // Ocultamiento de función.

    void mostrarAtributos() const; // Ocultamiento.

private:
    double radioInterno;
};

#endif // ARANDELA_H
