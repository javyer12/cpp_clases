#include "Residencia.h"

Residencia::Residencia(int id, std::string direccion, double valor, double gastosFijos, int espacios) : Propiedad(id, direccion, valor, gastosFijos, espacios)
{}

std::string Residencia::getTipo() const {
    return "Residencia Familiar";
}