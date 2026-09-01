#ifndef MOVIMIENTO_H
#define MOVIMIENTO_H
#include "Producto.h"

class Movimiento{
    public:
        Movimiento(Producto& producto,int cantidad);
        virtual ~Movimiento();

        virtual bool Ejecutar() = 0;
        virtual void mostrarDetalle() const =0;

    protected:
        Producto& producto;
        int cantidad;
};
#endif