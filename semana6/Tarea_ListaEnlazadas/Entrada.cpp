#include "Entrada.h"
#include "Producto.h"
#include <iostream>
using namespace std;

Entrada::Entrada(Producto& _producto, int _cantidad) : Movimiento(_producto, _cantidad) {}
Entrada::~Entrada(){}

bool Entrada::Ejecutar() {
    producto.agregarStock(cantidad);
    std::cout << "[ÉXITO] Entrada Registrada. +" << cantidad << " unidades a " << producto.getNombre() << "\n";
    return true;
}
void Entrada::mostrarDetalle() const {
    std::cout << "Tipo: Entrada | Producto: " << producto.getNombre() << " | Cantidad: +" << cantidad << "\n";
}