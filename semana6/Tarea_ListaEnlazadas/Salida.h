#ifndef SALIDA_H
#define SALIDA_H
#include "Movimiento.h"
#include "Producto.h"

 class Salida : public Movimiento{
    public:
        Salida(Producto& _producto, int _cantidad);
        virtual ~Salida();

        bool Ejecutar() override;
        void mostrarDetalle() const override;
 };

#endif