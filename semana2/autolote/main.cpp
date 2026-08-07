#include <iostream>
#include <string> //manipuladores de cadenas
#include <iomanip>

using namespace std;

const int NUM_EMPRESAS = 2;
const int NUM_PRODUCTOS = 2;


int main(){
    //variables del programa
    string empresas[NUM_EMPRESAS];
    double ventas[NUM_EMPRESAS][NUM_PRODUCTOS];

    //apuntadores
    string *ptrEmpresas = empresas; //dirección de memoria del arreglo empresas
    double (*ptrVentas)[NUM_PRODUCTOS]=ventas; //dirección de memoria del arreglo ventas

    //ingresar datos
    cout << "=========================================\n";
    cout << "Registro de ventas de autolotes\n";
    cout << "Introduccion de ventas por empresas \n"
    << endl;
    cout << "=========================================\n"
         << endl;
    
    //introducir nombres de empresas
    for (int i = 0; i < NUM_EMPRESAS;i++){
        cout << "Introducir nombre de la empresa " << i+1 << ": ";
        // getline(cin >> ws, empresas[i]); ws manipulador de flujo para ignorar espacios en blanco
        getline(cin >> ws, *(ptrEmpresas + i)); //usando apuntadores

        //introducir datos de venta
        cout << "\nIntroducir ventas de lavado: ";
        cin >> *(*(ptrVentas + i) + 0); // usando apuntadores || *(*(ptrVentas + i) + 0) entrega el primer elemento de la fila 0
        // *(ptrVentas + i) entrega [fila 0]
        cout << "\nIntroducir ventas de secado: ";
        cin >> *(*(ptrVentas + i) + 1); //usando apuntadores
    }

    //impresion de empresas
    cout << endl;
    cout << "\n=========================================\n";
    cout << "Registros de ventas Auto-Lavados\n";
    cout << "Reporte de ventas por empresa\n";
    cout << "=========================================\n"
            << endl;
    //setw manipulador de flujo para establecer el ancho de campo
    //left manipulador de flujo para alinear a la izquierda
    cout << left << setw(30) << "Empresa" << setw(20) << "Lavado" << setw(30) << "Secado" << setw(30) << "Total" << endl;
    cout << "--------------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i< NUM_EMPRESAS; i++){
        cout << left << " | " << setw(25) << *(ptrEmpresas + i) << " | " << setw(20) << *(*(ptrVentas + i) + 0) << " | "<< setw(25) << *(*(ptrVentas + i) + 1)
             << " | " << setw(20) << (*(*(ptrVentas + i) + 0) + *(*(ptrVentas + i) + 1))<< endl;
    }
    cout << "--------------------------------------------------------------------------------------------" << endl;
    cout << endl;
    return 0;
}
