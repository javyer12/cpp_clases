#ifndef ENTRADA_H
#define ENTRADA_H
#include "Movimiento.h"
#include "Producto.h"

class Entrada: public Movimiento{
    public:
        Entrada(Producto &_producto, int _cantidad);
        virtual ~Entrada();

        bool Ejecutar() override;
        void mostrarDetalle() const override;
};

#endif