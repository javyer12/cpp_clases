#include "Propiedad.h"

Propiedad::Propiedad(int id, std::string direccion, double valor, double gastosFijos, int espacios){
    this->id = id;
    this->direccion = direccion;
    this->valor = valor;
    this->gastosFijos = gastosFijos;
    this->espacios = espacios;
}
Propiedad::~Propiedad(){}

double Propiedad::CalcularImpuestosInmuebles() const {
    return valor * 3.50 / 1000;
}
double Propiedad::CalcularImpuestosTradicion() const
{
    return valor * 0.015;
}
double Propiedad::CalcularMantenimiento() const
{
    return 0.0;
}

double Propiedad::CalcularAlquiler() const {
    double totalGastos = gastosFijos + CalcularImpuestosInmuebles() + CalcularImpuestosTradicion() + CalcularMantenimiento();
    double totalConRecargo = totalGastos * 1.80;
    return totalConRecargo / espacios;
}
int Propiedad::getId() const {
    return id;
}
std::string Propiedad::getDireccion() const {
    return direccion;
}
double Propiedad::getValor() const {
    return valor;
}
int Propiedad::getEspacios() const {
    return espacios;
}