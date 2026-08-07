#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
    // int adivinar, numero;
    // cout << "Juego Adivina Numero \n";
    // cout << "\nIntroduce un numero del 1 al 10: \n";
    // cin >> numero;
    // srand(time(0));
    // adivinar = 1 + rand() % 10; // genera numeros entre 0 y 1
    // while (numero != adivinar)
    // {
    //     if(numero > 10){
    //         cout << "\nNumero no valido, el numero debe estar entre 1 y 10";
    //     }
    //     cout << "\nNumero erroneo";
    //     cout << "\nIngresa otro numero: ";
    //     cin >> numero;
    // }
    // if(numero == adivinar){
    //     cout << "\nAdivinaste, el numero es: " << adivinar << endl;
    // }
    // return 0;

    int adivinar, numero;
    int contar = 1;


    srand(time(0));
    adivinar = 1 + rand() % 10; // genera numeros entre 0 y 1
    while (contar <=3){
        cout << "Juego Adivina Numero | Solo tienes 3 Intentos\n";
        cout << "\nIntroduce un numero del 1 al 10: \n";
        cin >> numero;

        if (numero == adivinar)
        {
            cout << "\nAdivinaste, el numero es: " << adivinar << "." << endl;
        }else{
            cout << "\nErraste, el numero es:" << adivinar << "." << endl;
        }
        contar++;
    }

    return 0;
}