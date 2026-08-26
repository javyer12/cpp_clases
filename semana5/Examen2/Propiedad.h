#ifndef PROPIEDAD_H
#define PROPIEDAD_H

#include <string>

class Propiedad {
    public:
        Propiedad(int id, std::string direccion, double valor, double gastosFijos, int espacios);
        ~Propiedad();

        virtual double CalcularImpuestosInmuebles() const = 0;
        virtual double CalcularImpuestosTradicion() const = 0;
        virtual double CalcularMantenimiento() const = 0;
        virtual double CalcularAlquiler() const = 0;

        virtual std::string getTipo() const = 0;
        int getId() const;
        std::string getDireccion() const;
        double getValor() const;
        int getEspacios() const;
        

    protected:
        int id;
        std::string direccion;
        double valor;
        double gastosFijos;
        int espacios;

};

#endif