// Clase Base

#ifndef AUTOMOVIL_H
#define AUTOMOVIL_H
#include <string>

using namespace std;

class Automovil
{
public:
    Automovil();
    Automovil(string modelo, string marca);

    ~Automovil();

    string getModelo() const;
    void setModelo(string modelo);

    string getMarca() const;
    void setMarca(string marca);

    string arrancar() const;
    string pitar() const;
    void mostrarAtributos() const;

private:
    string modelo;
    string marca;
};
#endif
