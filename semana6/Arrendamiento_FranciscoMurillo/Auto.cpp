#include "Auto.h"
#include <iostream>
#include <iomanip>
using namespace std;

Auto::Auto(double valor_comercial, double gastos_operativos, double tarifa, int espacios, std::string modeloAuto) {
    this->valor_comercial = valor_comercial;
    this->gastos_operativos = gastos_operativos;
    this->tarifa = tarifa;
    this->espacios = espacios;
    this->modeloAuto = modeloAuto;
}
Auto::~Auto() {}

double Auto::getValorComercial() const
{
    return valor_comercial;
}
void Auto::setValorComercial(double valor_comercial)
{
    valor_comercial = valor_comercial;
}

double Auto::getGastosOperativos() const
{
    return gastos_operativos;
}
void Auto::setGastosOperativos(double gastos_operativos)
{
    gastos_operativos = gastos_operativos;
}

double Auto::getTarifa() const
{
    return tarifa;
}
void Auto::setTarifa(double tarifa)
{
    tarifa = tarifa;
}
int Auto::getEspacios() const
{
    return espacios;
}
void Auto::setEspacios(int espacios)
{
    espacios = espacios;
}
// std::string Auto::getModeloAuto() const {
//     return modeloAuto;
// }
void Auto::setModeloAuto(std::string modelo_auto)
{
    modeloAuto = modelo_auto;
}

void Auto::mostrarInformacion()
{

    cout << "Vehiculo: " << modeloAuto << endl;

    cout << "Valor comercial: L. "
         << fixed << setprecision(2)
         << valor_comercial << endl;

    cout << "Gastos fijos operativos: L. "
         << gastos_operativos << endl;

    cout << "Espacios / Conductores asignados: "
         << espacios << endl;

    cout << "Tarifa por arrendatario: L. "
         << calcularTarifa() << endl;
}
