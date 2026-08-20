#include "Servicios.h"
#include "string"

using namespace std;

Servicios::Servicios(int id, double precio, string zona) {
    this->id = id;
    this->precio = precio;
    this->zona = zona;
    double totalGenerado = 0;
}
Servicios::~Servicios(){}

int Servicios::getId() const {
    return id;
}
string Servicios::getZona() const {
    return zona;
}
double Servicios::getPrecio() const {
    return precio;
}