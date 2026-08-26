#include <iostream>
#include "Residencia.h"
using namespace std;

int main()
{
    Residencia r(1, "Londres", 23000.0, 3500.0, 4);
    cout << "       Prueba 2" << endl;
    cout << "=======================" << endl;
    cout << r.getTipo() << endl;
    return 0;
}