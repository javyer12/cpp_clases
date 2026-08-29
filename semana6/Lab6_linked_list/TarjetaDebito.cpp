#include "TarjetaDebito.h"
#include <iostream>
using namespace std;

TarjetaDebito::TarjetaDebito(std::string _titular, std::string _numero_tarjeta, double _saldo)
{
    this->numero_tarjeta = _numero_tarjeta;
    this->saldo = _saldo;
    this->titular = _titular;
}
TarjetaDebito::~TarjetaDebito(){}
std::string TarjetaDebito::getTitular() const{
    return titular;
}
void TarjetaDebito::setTitular(std::string _titular){
    titular = _titular;
}

std::string TarjetaDebito::getNumeroTarjeta() const{
    return numero_tarjeta;
}
void TarjetaDebito::setNumeroTarjeta(std::string _numero_cuenta)
{
    numero_tarjeta = _numero_cuenta;
}

double TarjetaDebito::getSaldo() const{
    return saldo;
}
void TarjetaDebito::setSaldo(double _saldo){
    saldo = _saldo;
}

void TarjetaDebito::mostrarDetalles() const {
    cout << "Titular: " << titular << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Número de tarjeta: " << numero_tarjeta << endl;
}
