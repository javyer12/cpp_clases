#include <iostream>

#include "Sedan.h"
#include "Suv.h"
#include "PickUp.h"

using namespace std;

int main()
{

    // ==========================================
    // SEDAN
    // ==========================================

    Sedan sedan(
        450000.00,
        3500.00,
        6280.00,
        1,
        "Sedan Economico"
    );

    // ==========================================
    // SUV
    // ==========================================

    Suv suv(
        1250000.00,
        12000.00,
        6840.00,
        4,
        "SUV de Lujo");

    // ==========================================
    // PICK-UP 4x4
    // ==========================================

    PickUp pickup(
        850000.00,
        8500.00,
        8460.00, 2,
        "Pick-up de Carga 4x4");

    // ==========================================
    // MOSTRAR INFORMACION
    // ==========================================

    cout << "==========================================" << endl;
    cout << "     ARRENDAMIENTO DE VEHICULOS" << endl;
    cout << "==========================================" << endl;

    cout << "\n--- SEDAN ---" << endl;
    sedan.mostrarInformacion();

    cout << "\n--- SUV ---" << endl;
    suv.mostrarInformacion();

    cout << "\n--- PICK-UP 4x4 ---" << endl;
    pickup.mostrarInformacion();

    return 0;
}