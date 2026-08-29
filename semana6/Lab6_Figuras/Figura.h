#ifndef FIGURAS_H
#define FIGURAS_H

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Clase abstracta.
class Figura // Clase base de la jerarquia.
              // Clase para heredar.
              // No es instanciable, solamente referencias (apuntadores)
{
public:
    Figura(double = 0.0, double = 0.0, double = 10.0, double = 10.0);

    virtual ~Figura();

    // Funciones heredadas get y set.
    double getLargo() const;
    void setLargo(double);

    double getAncho() const;
    void setAncho(double);

    double getOrigenX() const;
    void setOrigenX(double);

    double getOrigenY() const;
    void setOrigenY(double);

    // Declaración de comportamiento virtual, general,
    // comportamiento redefinible.
    // Funciones virtuales o virtuales puras (abstractas).

    virtual double calcularPerimetro() const = 0;
    virtual double calcularArea() const = 0;
    virtual void mostrarAtributos() const = 0;

    virtual string getClase() const;

private:
    double largo, ancho;
    double origenX, origenY;
};

#endif // FIGURAS_H
