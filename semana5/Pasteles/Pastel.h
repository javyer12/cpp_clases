#ifndef PASTEL_H
#define PASTEL_H
#include <string>

using namespace std;
class Pastel
{
public:
    Pastel(int numero_capas, int numero_pisos, string textura, string tipo_crema, bool medida_estandar);
    ~Pastel();

    // getter y setter
    int getNumeroCapas();
    void setNumeroCapas(int nc);

    int getNumeroPiso();
    void setNumeroPiso(int np);

    string getTipoCremaUsada();
    void setTipoCremaUsada(string tipo_crema);

    virtual double calcularVolumenPastel() const = 0;
    virtual void mostrarCaracteristicasPastel() const = 0;

protected:
    int numero_capas; // cantidad de capa de crema que se le aplicara
    int numero_pisos; // numero de pisos que tendra el pastel
    string textura;   // tipo de textura del pan
    string tipo_crema;
    bool medida_estandar; // si se obtiene un si, se realiza el calculo con las medidas bases, si se obtiene un no, se pregunta las medidas
};
#endif