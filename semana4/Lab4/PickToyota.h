#ifndef PICKTOYOTA_H
#define PICKTOYOTA_H

#include "Automovil.h"

class PickToyota : public Automovil{
    public:
        PickToyota();
        PickToyota( double precio, int velocidadMax);
        ~PickToyota();

        double getPrecio() const;
        void setPrecio(double pre);

        int getVelocidadMax() const;
        void setVelocidadMax(int vm);

        string arrancar() const;
        string pitar() const;

        void mostrarAtributo();

    private:
        double precio;
        int velocidadMaxima;
};

#endif 