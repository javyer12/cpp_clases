#include <iostream>
#include "Figura.h"
#include "Circulo.h"

using namespace std;

int main(){
    char figura = 'x';
    

    Circulo c1(6, figura);

    cout << "\n**Prueba de Herencia y Polimorfismo**" << endl;
    cout << "======================================" << endl;
    return 0;
}