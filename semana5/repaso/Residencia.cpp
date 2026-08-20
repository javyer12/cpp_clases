#include "Residencia.h"
#include <iostream>
using namespace std;

Residencia::Residencia(int id, double precio, string zona, int cantidadKW, double totalGenerado) : Servicios(id, precio, zona), cantidadKW(cantidadKW), totalGenerado(totalGenerado) {}
Residencia::~Residencia() {}

double Residencia::getTotalGenerado() const
{
    return cantidadKW * getPrecio();
}
double Residencia::calcularTotal(string zona) const
{
    if (zona == "residencia")
    {
        if (cantidadKW < 200)
        {
            return 0;
        }
        else
        {
            double totalGenerado = cantidadKW * getPrecio();
            return totalGenerado;
        }
    }
    if (zona == "empresarial")
    {
        double totalGenerado = cantidadKW * getPrecio();
        return totalGenerado;
    }
    return 0.0;
}

void Residencia::reporteIngresos(std::string zona) const
{
    cout << "===========================================" << endl;
    cout << "Reporte de Ingresos de Servicio " << zona << endl;
    cout << "Cantidad de Kw/h: " << cantidadKW << endl;
    cout << "Total de ingreso: " << calcularTotal(zona) << endl;
    cout << "===========================================" << endl;
}
// g++ - std = c++ 11 main.cpp