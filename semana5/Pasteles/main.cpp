#include <iostream>
#include <string>
#include "PastelDobleBase.h"

using namespace std;

int main()
{
    PastelDobleBase p1(2, 3, "Suave", "Crema Batida", true, "Spider-Man", "Arandanos");
    cout << "         Proyecto Pasteles" << endl;
    cout << "=====================================\n";
    p1.mostrarCaracteristicasPastel();
    return 0;
}