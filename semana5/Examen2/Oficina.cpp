#include "Oficina.h"

Oficina::Oficina(int id, std::string direccion, double valor, double gastosFijos, int espacios) : Propiedad(id, direccion, valor, gastosFijos, espacios) {}
Oficina::~Oficina(){}
double Oficina::CalcularMantenimiento() const {
    return valor * 0.005;
}
std::string Oficina::getTipo() const {
    return "Edificio de Oficinas";
}