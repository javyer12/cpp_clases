#include "ProductoMadera.h"

using namespace std;

ProductoMadera::ProductoMadera(int id, string tp, double pb){
    this->id = id;
    this->tipoMadera = tp;
    this->precioBase = pb;
}
ProductoMadera::~ProductoMadera(){}

int ProductoMadera::getId() const {
    return id;
}
string ProductoMadera::getTipoMadera() const {
    return tipoMadera;
}
double ProductoMadera::getPrecioBase() const {
    return precioBase;
}

// aqui se declara todo