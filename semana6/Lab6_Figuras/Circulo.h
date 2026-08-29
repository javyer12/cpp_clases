#ifndef CIRCULO_H
#define CIRCULO_H

#include "Figura.h"

class Circulo : public Figura
{
public:
    // Comportamiento.
    // Constructor(es)

    // Circulo(); // por defecto.
    // Circulo(double, double, double);

    Circulo(double = 0.0, double = 0.0, double = 10.0, double = 10.0,
            double = 5.0);

    ~Circulo();

    // Funciones de acceso, get y set, administradores de atributos, mutadores.

    double getRadio() const; // const porque no modifica el atributo.
    void setRadio(double);   // modifica, reasigna, el atributo radio.

    // Funciones de utilidad, mensajes, propósito, actividad, problemas que resuelve, acciones
    // del objeto, procesos que hace el objeto.

    virtual double calcularPerimetro() const;
    virtual double calcularArea() const;

    virtual void mostrarAtributos() const;

    virtual string getClase() const;

private: // Implementar principio de encapsulamiento.
    // Atributos, propiedades, características.
    //  Variables de instancia.

    double radio;
};

#endif // CIRCULO_H
