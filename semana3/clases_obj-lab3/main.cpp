#include <iostream>
#include "Silla.h"
/*
@author Francisco Murillo
#Cuenta 324111192
*/
using namespace std;

int main()
{
    Silla primerSilla(2,"leve", "Policarbonato",12.2,245,5);
    primerSilla.imprimirInformacion();

    cout << "Hello, World!" << endl;
    return 0;
}

// comando para ejecutarlo,
//  g++ main.cpp Silla.cpp -o main
// Luego ./main

//Lo realice desde visual studio code en una mac, por eso solo pude ejecutarlo de esta manera