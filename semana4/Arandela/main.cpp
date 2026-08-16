#include <iostream>
#include "Circulo.h"

using namespace std;

int main(){
    Circulo  c2(12.3, 2.2, 1.3);
    c2.mostrarAtributos();
    cout << "Hola a todos" << endl;
    return 0;
}

// g++ - std = c++ 11 main.cpp Arandela.cpp Circulo.cpp - o programa.exe &&./ programa.exe comando para compilar varias clases a la vez.
