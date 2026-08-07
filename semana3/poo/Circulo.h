#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo
{
public:
    Circulo();
    Circulo(double radio, double origenX, double origenY, int colorBorde, int colorRelleno);
    ~Circulo();
    //funciones de acceso, get, set, admon de atributos, mutadores
    double getRadio() const;
    double setRadio(double radio);

    double getOrigenX() const;
    double setOrigenX(double origenX);

    double getOrigenY() const;
    double setOrigenY(double origenY);

    int getColorBorde() const;
    int setColorBorde(int colorBorde);

    int getColorRelleno() const;
    int setColorRelleno(int colorRelleno);

    //funciones de utilidad, mensaje, proposito, actividad, problema que resuelve, comportamiento, acciones, metodos
    double calcularPerimetro() const;
    double CalcularArea() const;
    void  mostrarAtributos() const;

private: //implementar principio de encapsulamiento.
    // atributos, propiedades, caracteristicas
    //  variables de instancia
    double radio;
    double origenX, origenY;
    int colorBorde, colorRelleno;
};

#endif

// g++ main.cpp Circulo.cpp -o Circulo
//en este archivo solo se declaran los atributos y metodos de la clase, no se implementan, solo se declaran.