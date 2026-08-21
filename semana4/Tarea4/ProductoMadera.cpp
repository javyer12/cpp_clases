#include "ProductoMadera.h"

using namespace std;
ProductoMaderero::ProductoMaderero(
    int id,
    string tipoMadera,
    double precioBase)
{
    this->id = id;
    this->tipoMadera = tipoMadera;
    this->precioBase = precioBase;
}

ProductoMaderero::~ProductoMaderero() {}

int ProductoMaderero::getId() const
{
    return id;
}

std::string ProductoMaderero::getTipoMadera() const
{
    return tipoMadera;
}

double ProductoMaderero::getPrecioBase() const
{
    return precioBase;
}