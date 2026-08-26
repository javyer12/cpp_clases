#include "Apartamento.h"

Apartamento::Apartamento(int id, std::string direccion, double valor, double gastosFijos, int espacios) : Propiedad(id, direccion, valor, gastosFijos, espacios) {}
Apartamento::~Apartamento(){}

double  Apartamento::CalcularMantenimiento() const {
    return valor * 0.005;
}
std::string Apartamento::getTipo() const {
    return "Edificio de Apartamento";
}