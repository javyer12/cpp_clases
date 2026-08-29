#include "TarjetaNormal.h"
#include <iostream>

using namespace std;
TarjetaNormal::TarjetaNormal(std::string _titular, std::string _numero_tarjeta, double _saldo) : TarjetaDebito(_titular, _numero_tarjeta, _saldo) {}
TarjetaNormal::~TarjetaNormal() {}

void TarjetaNormal::mostrarBeneficios() const
{
    cout << "-> Beneficio: Cuenta básica sin costo de mantenimiento mensual." << endl;
};
void TarjetaNormal::mostrarDetalles() const
{
    cout << "Tarjeta a nombre: " << titular << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Número de tarjeta: " << numero_tarjeta << endl;
};