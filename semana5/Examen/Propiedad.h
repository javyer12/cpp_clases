#ifndef PROPIEDAD_H
#define PROPIEDAD_H
#include <string>
class Propiedad{
    public:
        Propiedad(double numero_millas, std::string tipoAlquiler, int numero_espacios);
        ~Propiedad();

        int getNumeroEspacio() const;
        std::string getTipoAlquiler() const;

        virtual double calcularAlquiler() const = 0;
        virtual double calcularImpuestosBienes() const = 0;
        virtual double calcularImpuestosTradicion() const = 0;
        virtual double calcularImpuestosMantenimiento() const = 0;

    protected:
        double numero_millas; //numero de milla que mide la propiedad
        std::string tipoAlquiler; // determina si es domicilio, departamento u oficina
        int numero_espacios; //cantidad de espacio para alquilar en la propiedad
};

#endif