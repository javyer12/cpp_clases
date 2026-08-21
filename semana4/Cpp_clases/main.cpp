#include <iostream>
#include "Tablon.h"
#include "Viga.h"

using namespace std;

int main(){
    Tablon tablon(0001, "Blanda", 10.5, 10, 0.3, 0.2, 12);
    Viga viga(0002, "blanda", 5.0, 8, 0.5, 0.7, 50);

    cout << "Herencia y Polimorfismo" << endl;

    tablon.mostrarDatos();
    viga.mostrarDatos();
    return 0;
}
