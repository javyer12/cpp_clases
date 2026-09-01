#ifndef GESTIONINVENTARIO_H
#define GESTIONINVENTARIO_H
#include "Movimiento.h"
#include "Producto.h"
#include <vector>

class GestionInventario{
    private:
        std::vector<Producto> productos;
        std::vector<std::unique_ptr<Movimiento>> HistorialMovimientos; //punteros para la clase base
    public:
        void RegistrarProducto(const Producto& prod );
        Producto *buscarProducto(int id);

        void RegistrarMovimiento(std::unique_ptr<Movimiento> mov);
        void MostrarInventario();
        void MostrarHistorial();
};
#endif