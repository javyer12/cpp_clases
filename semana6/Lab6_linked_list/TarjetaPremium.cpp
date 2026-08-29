#include "TarjetaPremium.h"
#include <iostream>

using namespace std;

TarjetaPremium::TarjetaPremium(std::string _titular, std::string _numero_tarjeta, double _saldo, double _caskBack) : TarjetaDebito(_titular, _numero_tarjeta, _saldo), cashBack(_caskBack) {}
TarjetaPremium::~TarjetaPremium() {}


double TarjetaPremium::getCashBack() const {
    return cashBack;
}
void TarjetaPremium::mostrarDetalles() const
{
    cout << "Titular: " << titular << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Número de tarjeta: " << numero_tarjeta << endl;
}

// void TarjetaPremium::mostrarBeneficios() const {
//     cout << "=> Beneficio: devuelve " << cashBack <<  "% de tus compras en efectivo" << endl;
// }
void TarjetaPremium::mostrarBeneficios() const
{
    cout << cashBack << "%. " << endl;
}
