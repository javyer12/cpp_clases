#ifndef FIGURA_H
#define FIGURA_H
#include <string>
#include <cmath>

using namespace std;

class Figura
{
public:
    Figura();
    Figura(int ancho, int alto, string figura, char caracter);
    virtual ~Figura();
    virtual void Dibujar() const = 0; //Polimorfismo

    //getters y setters
    int getAncho() const;
    void setAncho(int ancho);

    int getAlto() const;
    void setAlto(int alto);
    string getFigura() const;
    void setFigura(string figura);

protected:
    int ancho;
    int alto;
    string figura;
    char caracter;

private:
};

#endif
