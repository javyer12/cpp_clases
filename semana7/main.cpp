#include <iostream>
#include <fstream>
#include <string>
#include "Cliente.h"

using namespace std;

int CrearArchivoTexto(string);
int CrearArchivoBinario(string);
int main()
{
    cout << "Hello world!" << endl;
    int resultado;
    resultado = CrearArchivoTexto("clientes.txt");
    if(resultado == 0)
        cout << "Archivo de texto creado exitosamente." << endl;
    else
        cout << "Error al crear el archivo de texto." << endl;
    return 0;
}
int CrearArchivoTexto(string nombreArchivo)
{
    Cliente cliente;
    int id;
    char nombre[50];
    double saldo;
    ofstream archivo(nombreArchivo.data(), ios::out | ios::binary);

    //proceso de lectura
    cout << "Datos del Cliente" << endl;
    cout << "Ingrese el numero de la cuenta: ";
    cin >> id;
    cin.ignore();
    cout << "Ingrese el nombre del cliente: ";
    cin.getline(nombre, 50);
    cout << "Ingrese el saldo del cliente: ";
    cin >> saldo;

    //guarda los datos en la clase cliente
    cliente.setIdCuenta(id);
    cliente.setNombre(nombre);
    cliente.setIngreso(saldo);

    //escribe los datos en el archivo
    archivo << id << "\t" << nombre << "\t" << saldo << endl;
    archivo.close();
    return 0;
}
int CrearArchivoBinario(string nombreArchivo)
{
    return 0;
}