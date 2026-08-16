#include <iostream>
#include "Automovil.h"
#include "PickToyota.h"

using namespace std;

int main(){
    // clase principal Automovil
    // obj1 creado a partir de Automovil: una pickups marca Toyota
    // obj2 creado a partir de Automovil: una pickups marca Ford

    Automovil auto1("Pickups", "Toyota");
    PickToyota autoToyota(2000.0, 150);
    cout << "Laboratorio 4" << endl;

    auto1.mostrarAtributos();
    autoToyota.mostrarAtributo();
    return 0;
}