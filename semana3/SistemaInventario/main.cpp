#include <iostream>
#include "ExpedienteEmpleado.h"

using namespace std;

int main(){
    ExpedienteEmpleado emp1("",20202,"1804200000000", "Carlos","Alvarado","Programar","NO","Soltero", "Ingeniero de Software",99778800, 4500.0, 20, "Karla", 33445555);
    emp1.mostrarExpediente();
    cout << "Hello";
    return 0;
}