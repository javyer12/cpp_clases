#include <iostream>

using namespace std;

int main() // Funcion principal, de arranque.
{
    char continuar; // variable centinela
    char nombre[40];
    char nacionalidad[20];
    int edad, dias, semanas;
    float sueldo;

    // cin para introducir datos primitivos
    cout << sueldo;
    do
    {
        cout << "\nXPT Projects\n";
        cout << "\nIntroduzca nombre del empleado: ";
        cin.getline(nombre, 40);
        // cin >> nombre;

        cout << "Introduzca su nacionalidad: ";
        cin.getline(nacionalidad, 20);
        // cin >> nacionalidad;

        cout << "Introduzca edad: ";
        cin >> edad;

        cout << "Introduzca dia disponible (1, 2, 3, 4, 5): ";
        cin >> dias;

        cout << "Introduzca semanas disponibles: ";
        cin >> semanas;

        cout << "Introduzca expectativa de sueldo: ";
        cin >> sueldo;

        // Imprimir boleta.

        cout << "\nXPT Projects\n";
        cout << "\"Boleta de oferta de servicios de voluntariado\"\n";
        cout << "\nNombre: " << nombre << "\tNacionalidad: " << nacionalidad;

        cout << "\nEdad: " << edad
             << "\tExpectativa de remuneración: " << sueldo
             << "\tSemanas disponibles: " << semanas;

        cout << "\nDía de la semana disponible (1, 2, 3, 4, 5): " << dias << endl;

        cout << endl;

        cout << "Continuar con otro empleado (s/n): ";
        cin >> continuar; // almace el valor que se evalua cuando el ciclo debe continuar o cancelarse

        cin.ignore(); // evita que se salte la primera instruccion de pedir el nombre cuando se ejecuta el ciclo
    } while (continuar == 's');

    cout << "\nFin del programa." << endl;
}
