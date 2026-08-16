#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo
{
public:
    // Comportamiento.
    // Constructor(es)

    Circulo(); // por defecto.
    Circulo(double, double, double);

    ~Circulo();

    // Funciones de acceso, get y set, administradores de atributos, mutadores.

    double getRadio() const; // const porque no modifica el atributo.
    void setRadio(double);   // modifica, reasigna, el atributo radio.

    double getOrigenX() const;
    void setOrigenX(double);

    double getOrigenY() const;
    void setOrigenY(double);

    // Funciones de utilidad, mensajes, propósito, actividad, problemas que resuelve, acciones
    // del objeto, procesos que hace el objeto.

    double calcularPerimetro() const;
    double calcularArea() const;

    void mostrarAtributos() const;

private: // Implementar principio de encapsulamiento.
    // Atributos, propiedades, características.
    //  Variables de instancia.

    double radio;
    double origenX, origenY;
};

#endif // CIRCULO_H
