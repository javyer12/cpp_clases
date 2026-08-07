#include <iostream>
#include <string>
#include <iomanip>

/*
    @author: Francisco Javier Murillo Guillen
    @date: 02/08/2026
    @description: Programa que registra las ventas de 5 empresas en los meses de Enero y Febrero
*/
using namespace std;

const int NUM_EMPRESA = 5;
const int NUM_MESES = 2;

int main(){
    //variables del programa
    string empresas[NUM_EMPRESA];
    double ventas[NUM_EMPRESA][NUM_MESES];

    //declarar apuntadores
    string *ptrEmpresas = empresas;
    double (*ptrVentas)[NUM_MESES] = ventas;

    // ingresar datos
    cout << "============================================\n";
    cout << "\nRegistro de ventas de Enero y Febrero\n";
    cout << "Introduccion de ventas por empresas \n"
         << endl;
    cout << "============================================\n"
         << endl;

    for (int i = 0; i < NUM_EMPRESA;i++){
        cout << "\nIngrese el nombre de la empresa: " << i + 1 << ": ";
        getline(cin >> ws, *(ptrEmpresas + i));

        //intropducir los datos de ventas
        cout << "Ingrese las ventas de Enero: ";
        cin >> *(*(ptrVentas + i) + 0);

        cout << "Ingrese las ventas de Febrero: ";
        cin >> *(*(ptrVentas + i) + 1);
    }

    //impresion de los datos
    cout << endl;
    cout << "==========================================================================\n";
    cout << setw(50) << "REPORTE BIMESTRAL DE VENTAS\n";
    cout << "==========================================================================\n"
         << endl;

    cout << left << setw(20) << "Empresa" << setw(20) << "Enero ($)" << setw(20) << "Febrero ($)" << "Total ($)" << endl;
    cout << "-------------------------------------------------------------------------" << endl;
    for (int i = 0; i < NUM_EMPRESA;i++){
        cout << left << " | " << setw(15) << *(ptrEmpresas + i) << " | " 
        << setw(20) << *(*(ptrVentas + i) + 0) 
        << " | " << setw(15) << *(*(ptrVentas + i) + 1) 
        << " | " << *(*(ptrVentas + i) + 0) + *(*(ptrVentas + i) + 1) << endl;
    }
    cout << "-------------------------------------------------------------------------" << endl;
    cout << endl;
    return 0;
}