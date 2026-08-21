#include "PastelDobleBase.h"
#include <iostream>
#include <cmath>

using namespace std;

PastelDobleBase::PastelDobleBase(int numero_capas, int numero_pisos, string textura, string tipo_crema, bool medida_estandar, string decoracion, string tipo_fruta) : Pastel(numero_capas, numero_pisos, textura, tipo_crema, medida_estandar), decoracion(decoracion), tipo_fruta(tipo_fruta)
{
    this->decoracion = decoracion;
    this->tipo_fruta = tipo_fruta;
    this->numero_capas = numero_capas;
    this->numero_pisos = numero_pisos;
    this->textura = textura;
    this->tipo_crema = tipo_crema;
    this->medida_estandar = medida_estandar;
}
PastelDobleBase::~PastelDobleBase() {}

double PastelDobleBase::calcularVolumenPastel() const
{
    // estandar: base 30 cm, -5 cm por piso, altura estandar = 10 cm
    // formula = v= pi * r2 * h
    // volumen total = volPiso1 + volPiso2 + ....volPisoN
    double diametro_base = 30;
    double vol1 = 0, vol2 = 0, vol3 = 0;
    int contador = 1;
    if (medida_estandar)
    {
        switch (numero_pisos)
        {
        case 1:
            vol1 = M_PI * std::pow((diametro_base / 2), 2) * 10;
            break;
        case 2:
            vol1 = M_PI * std::pow((diametro_base / 2), 2) * 10;
            vol2 = M_PI * std::pow(((diametro_base - 5) / 2), 2) * 10;
            break;
        case 3:
            vol1 = M_PI * std::pow((diametro_base / 2), 2) * 10;
            vol2 = M_PI * std::pow(((diametro_base - 5) / 2), 2) * 10;
            vol3 = M_PI * std::pow(((diametro_base - 10) / 2), 2) * 10;
            break;
        default:
            break;
        }
    }
    double volumenTotal = vol1 + vol2 + vol3;
    return volumenTotal;
}
// porcentaje = parte*100/total

void PastelDobleBase::mostrarCaracteristicasPastel() const
{
    cout << "        Pastel de " << numero_pisos << " Pisos." << endl;
    cout << "=====================================" << endl;
    cout << "    " << "Tipo de crema usada: " << tipo_crema << endl;
    cout << "    " << "Capas: " << numero_capas << endl;
    cout << "    " << "Volumen: " << calcularVolumenPastel() << " cm3" << endl;
    cout << "    " << "Decoracion: " << decoracion << endl;
    cout << "    " << "Frutas incluidas: " << tipo_fruta << endl;
    cout << "=====================================" << endl;
}
// g++ -std=c++11 main.cpp