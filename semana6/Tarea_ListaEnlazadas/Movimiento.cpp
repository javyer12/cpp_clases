#include "Movimiento.h"
#include "Producto.h"

using namespace std;

Movimiento::Movimiento(Producto& _producto,int _cantidad) : producto(_producto), cantidad(_cantidad){
    this->producto = _producto;
    this->cantidad = _cantidad;
}
Movimiento::~Movimiento(){}

