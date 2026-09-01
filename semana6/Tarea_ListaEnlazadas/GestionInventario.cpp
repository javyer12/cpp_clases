#include <iostream>
#include "Movimiento.h"
#include "Producto.h"
#include "GestionInventario.h"

using namespace std;

void GestionInventario::RegistrarProducto(const Producto& p){
    productos.push_back(p);
}
Producto* GestionInventario::buscarProducto(int id){
    for(auto& p : productos){
        if(p.getId() == id)
            return &p; 
    }
    return nullptr;
}
void GestionInventario::RegistrarMovimiento(std::unique_ptr<Movimiento> mov){
    if(mov->Ejecutar()){
        HistorialMovimientos.push_back(std::move(mov));
    }
}
void GestionInventario::MostrarInventario()  {
        std::cout << "\n--- ESTADO DEL INVENTARIO ---\n";
        for (const auto& p : productos) {
            p.mostrarInfomracion();
        }
    }

    void GestionInventario::MostrarHistorial()  {
        std::cout << "\n--- HISTORIAL DE MOVIMIENTOS ---\n";
        for (const auto& mov : HistorialMovimientos) {
            mov->mostrarDetalle();
        }
    }