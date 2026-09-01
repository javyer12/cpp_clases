#include <iostream>
#include "GestionInventario.h"
#include "Entrada.h"
#include "Salida.h"
#include <string>
#include <vector>
#include <memory>
using namespace std;

int main(){
 GestionInventario inventario;

    // Crear productos
    Producto p1(101, "Laptop Dell", 10);
    Producto p2(102, "Teclado Mecánico", 25);
    Producto p3(103, "Tablets HONOR ", 3);

    inventario.RegistrarProducto(p1);
    inventario.RegistrarProducto(p2);
    inventario.RegistrarProducto(p3);
    inventario.MostrarInventario();

    // Obtener referencias para aplicar movimientos
    Producto* op1 = inventario.buscarProducto(101); //punteros donde se almacena lo que encuentre
    Producto* op2 = inventario.buscarProducto(102);
    Producto* op3 = inventario.buscarProducto(103);
    if (op1 && op2 && op3)
    {
        std::cout << "\n--- PROCESANDO TRANSACCIONES ---\n";
        
        //el vector procesa objetos Entrada y Salida uniformemente
        inventario.RegistrarMovimiento(std::make_unique<Entrada>(*op1, 5));
        inventario.RegistrarMovimiento(std::make_unique<Salida>(*op2, 3));
        inventario.RegistrarMovimiento(std::make_unique<Salida>(*op1, 10));
        inventario.RegistrarMovimiento(std::make_unique<Entrada>(*op3, 10));
    }


    return 0;
}