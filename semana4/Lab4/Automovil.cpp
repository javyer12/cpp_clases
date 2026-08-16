#include "Automovil.h"
#include <iostream>

using namespace std;

Automovil::Automovil(){
    marca = "";
    modelo = "";
}

Automovil::Automovil(string mo, string ma){
    this->marca = ma;
    this->modelo = mo;
}
Automovil::~Automovil(){
    marca = "";
    modelo = "";
}

void Automovil::setMarca(string marca){
    this->marca = marca;
}
string Automovil::getMarca() const{
    return marca;
}
void Automovil::setModelo(string modelo)
{
    this->modelo = modelo;
}
string Automovil::getModelo() const
{
    return modelo;
}

string Automovil::arrancar() const {
    return "El carro arrancó";
}
string Automovil::pitar() const
{
    return "Piip Piip Piip";
}
void Automovil::mostrarAtributos() const
{
    cout << "\nAtributos del Auto: ";
    cout << "\nMarca: " << getMarca();
    cout << "\nModelo: " << getModelo() << endl;
}