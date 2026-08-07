#include <iostream>

using namespace std;

int main(){

    int x = 165; //valor de x
    int *ptrX; //variable apuntadora

    ptrX = &x;

    cout << "El valor de x es: " << x << endl;
    cout << "El valor del apuntador es: " << *ptrX << endl;
    cout << "Direccion del apuntador: " << ptrX << endl;

    *ptrX = 100; //actualizar x apartir del apuntador

    cout << "El nuevo valor de x es: " << x << endl;
    cout << "El valor del apuntador es: " << *ptrX << endl;
    cout << "Direccion del apuntador: " << ptrX << endl;

    //arreglos unidimencionales
    int numeros[5];

    numeros[0] = 4;
    numeros[1] = 5;
    numeros[2] = 1;
    numeros[3] = -8;
    numeros[4] = 12;
    return 0;
}