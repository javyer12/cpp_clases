
#include <iostream>
#include <vector>

#include "ProductoMadera.h"
#include "Tablon.h"
#include "Viga.h"
#include "Panel.h"

using namespace std;

void mostrarMenu()
{

    cout << "\n==============================\n";
    cout << "   SISTEMA DE PRODUCTOS\n";
    cout << "       MADEREROS\n";
    cout << "==============================\n";
    cout << "1. Registrar Tablon\n";
    cout << "2. Registrar Viga\n";
    cout << "3. Registrar Panel\n";
    cout << "4. Mostrar productos\n";
    cout << "5. Salir\n";
    cout << "Seleccione una opcion: ";
}

int main()
{
    // uso de puntores para almacenar los productos en memoria temporal con <vector>
    vector<ProductoMaderero *> productos;

    int opcion;
    int id;

    do
    {

        mostrarMenu();
        cin >> opcion;

        switch (opcion)
        {
        // ====================Tablon====================
        case 1:
        {

            string madera;
            double precio;
            double largo;
            double ancho;
            double espesor;
            double humedad;

            cout << "\n--- REGISTRAR TABLON ---\n";

            cout << "ID: ";
            cin >> id;

            cout << "Tipo de madera: ";
            cin >> madera;

            cout << "Precio base: ";
            cin >> precio;

            cout << "Largo (m): ";
            cin >> largo;

            cout << "Ancho (m): ";
            cin >> ancho;

            cout << "Espesor (m): ";
            cin >> espesor;

            cout << "Humedad (%): ";
            cin >> humedad;

            productos.push_back(
                new Tablon(
                    id,
                    madera,
                    precio,
                    largo,
                    ancho,
                    espesor,
                    humedad));

            cout << "\nTablon registrado correctamente.\n";

            break;
        }
            // ====================Viga====================
        case 2:
        {

            string madera;
            double precio;
            double largo;
            double ancho;
            double alto;
            int resistencia;

            cout << "\n--- REGISTRAR VIGA ---\n";

            cout << "ID: ";
            cin >> id;

            cout << "Tipo de madera: ";
            cin >> madera;

            cout << "Precio base: ";
            cin >> precio;

            cout << "Largo (m): ";
            cin >> largo;

            cout << "Ancho (m): ";
            cin >> ancho;

            cout << "Alto (m): ";
            cin >> alto;

            cout << "Resistencia (del 1-100): ";
            cin >> resistencia;

            productos.push_back(
                new Viga(
                    id,
                    madera,
                    precio,
                    largo,
                    ancho,
                    alto,
                    resistencia));

            cout << "\nViga registrada correctamente.\n";

            break;
        }
            // ====================Panel====================
        case 3:
        {

            string madera;
            string acabado;

            double precio;
            double largo;
            double ancho;
            double espesor;

            cout << "\n--- REGISTRAR PANEL ---\n";

            cout << "ID: ";
            cin >> id;

            cout << "Tipo de madera: ";
            cin >> madera;

            cout << "Precio base: ";
            cin >> precio;

            cout << "Largo (m): ";
            cin >> largo;

            cout << "Ancho (m): ";
            cin >> ancho;

            cout << "Espesor (m): ";
            cin >> espesor;

            cout << "Acabado (Natural/Barnizado/Premium): ";
            cin >> acabado;

            productos.push_back(
                new Panel(
                    id,
                    madera,
                    precio,
                    largo,
                    ancho,
                    espesor,
                    acabado));

            cout << "\nPanel registrado correctamente.\n";

            break;
        }
            // ====================Mostrar====================
        case 4:
        {

            cout << "\n================================\n";
            cout << "       PRODUCTOS REGISTRADOS\n";
            cout << "================================\n";

            if (productos.empty())
            {

                cout << "No hay productos registrados.\n";
            }
            else
            {

                for (ProductoMaderero *producto : productos)
                {

                    producto->mostrarDatos();

                    cout << "--------------------------------\n";
                }
            }

            break;
        }
            // ====================Salir====================
        case 5:

            cout << "\nSaliendo del programa...\n";

            break;

        default:

            cout << "\nOpcion no valida.\n";
        }

    } while (opcion != 5);

    // Liberar memoria
    for (ProductoMaderero *producto : productos)
    {
        delete producto;
    }

    productos.clear();

    return 0;
}

// comando de ejecucion
//  g++ -std=c++11 main.cpp ProductoMadera.cpp Tablon.cpp Viga.cpp Panel.cpp  -o programa.exe && ./programa.exe
// g++ main.cpp className1.cpp -o className1 className2.cpp -o className2