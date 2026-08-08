#include "Silla.h"
#include <iostream>
#include <iomanip>

using namespace std;
// constructor
Silla::Silla(int cod, string mod, string polimero,
             double peso, double precio, int stock)
{

    codigo = cod;
    modelo = mod;
    tipoPolimero = polimero;
    pesoGramos = peso;
    precioUnitario = precio;
    stockActual = stock;

    valorInventario;
}
Silla::~Silla()
{
    // destructor por defecto
}
// getters
int Silla::getCodigo()
{
    return codigo;
}

string Silla::getModelo()
{
    return modelo;
}

string Silla::getTipoPolimero()
{
    return tipoPolimero;
}

double Silla::getPesoGramos()
{
    return pesoGramos;
}

double Silla::getPrecioUnitario()
{
    return precioUnitario;
}

int Silla::getStockActual()
{
    return stockActual;
}

double Silla::getValorInventario()
{
    return valorInventario;
}

// setter
void Silla::setCodigo(int cod)
{
    codigo = cod;
}

void Silla::setModelo(string mod)
{
    modelo = mod;
}

void Silla::setTipoPolimero(string polimero)
{
    tipoPolimero = polimero;
}

void Silla::setPesoGramos(double peso)
{
    pesoGramos = peso;
}

void Silla::setPrecioUnitario(double precio)
{
    precioUnitario = precio;
}

void Silla::setStockActual(int stock)
{
    stockActual = stock;
}

// funcion de calculo
double Silla::calcularValorInventario()
{

    valorInventario = precioUnitario * stockActual;

    return valorInventario;
}

// funcion de calculo
void Silla::imprimirInformacion()
{

    cout << fixed << setprecision(2);

    cout << "\n========================================\n";
    cout << "       INFORMACION DEL PRODUCTO\n";
    cout << "========================================\n";

    cout << "Codigo:             " << codigo << endl;
    cout << "Modelo:             " << modelo << endl;
    cout << "Tipo de polimero:   " << tipoPolimero << endl;
    cout << "Peso:               " << pesoGramos << " Kg" << endl;
    cout << "Precio unitario:    L. " << precioUnitario << endl;
    cout << "Stock actual:       " << stockActual << " unidades" << endl;

    cout << "\n----------- CALCULOS ------------------\n";

    cout << "Valor del inventario: L. "
         << valorInventario << endl;

    cout << "========================================\n";
}