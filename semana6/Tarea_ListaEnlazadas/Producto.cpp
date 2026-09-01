#include <iostream>
#include "Producto.h"

using namespace std;

Producto::Producto(int id,std::string nombre,int stock){
    this->id = id;
    this->nombre = nombre;
    this->stock = stock;
}
Producto::~Producto(){}

int Producto::getId() const {
    return id;
}

std::string Producto::getNombre() const {
    return nombre;
}

int Producto::getStock() const {
    return stock;
}

void Producto::agregarStock(int _cantidad){
    stock += _cantidad;
}
bool Producto::reducirStock(int _cantidad){
    if(_cantidad <= stock){
        stock -= _cantidad;
        return true;
    }
    return false;
}
void Producto::mostrarInfomracion() const {
    std::cout << "ID: " << id << " | Producto: " << nombre << " | Stock actual: " << stock << endl;
}