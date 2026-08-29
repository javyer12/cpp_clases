#include "TarjetaPlatinum.h"
#include <iostream>

using namespace std;

TarjetaPlatinum::TarjetaPlatinum(std::string _titular, std::string _numero_tarjeta, double _saldo, double _cobertura_seguro) : TarjetaDebito(_titular, _numero_tarjeta, _saldo), cobertura_seguro(_cobertura_seguro) {}
TarjetaPlatinum::~TarjetaPlatinum() {}

double TarjetaPlatinum::getCobertura() const {
    return cobertura_seguro;
}
void TarjetaPlatinum::mostrarDetalles() const
{
    cout << "Titular: " << titular << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Número de tarjeta: " << numero_tarjeta << endl;
}

void TarjetaPlatinum::mostrarBeneficios() const
{
    cout << cobertura_seguro << "%. " << endl;
    // cout << "Beneficio: Acceso a Salas VIP de aeropuertos y seguro médico de $ " << cobertura_seguro << "." << endl;
}