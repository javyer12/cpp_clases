#include "Salida.h"
#include "Movimiento.h"
#include "Producto.h"
#include <iostream>

using namespace std;
Salida::Salida(Producto &_producto, int _cantidad) : Movimiento(_producto, _cantidad)
{
}
Salida::~Salida(){}

bool Salida::Ejecutar()  {
    if(producto.reducirStock(cantidad)){
        std::cout << "[ÉXITO] Salida registrada -" << cantidad << " unidades de " << producto.getNombre() << "'.\n";
        return true;
    }else{
        std::cout << "[ERROR] Stock insuficiente para '" << producto.getNombre() 
                      << "'. Stock actual: " << producto.getStock() << ", solicitado: " << cantidad << ".\n";
            return false;
    }
}
void Salida::mostrarDetalle() const {
    std::cout << "Tipo: SALIDA  | Producto: " << producto.getNombre() << " | Cantidad: -" << cantidad << "\n";
}
