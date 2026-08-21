#include "Circulo.h"
#include <iostream>
#include <string>

using namespace std;

Circulo::Circulo() : Figura()
{
    radio = 0;
}
Circulo::Circulo(int r, char caracter) : Figura(2 * r, 2 * r, "Circulo", caracter)
{
    this->radio = r;
    // caracter = caracter;
}
void Circulo::Dibujar() const
{
    cout << "Figura Circulo \n";
    int r = 2 * r / 2;
    for (int y = -r; y <= r; r++)
    {
        for (int x = -r * 2; x <= r * 2; x++)
        {
            double dx = (double)x / 2.0;
            double dy = (double)y;
            if (dx * dx + dy * dy <= r * r + 0.5)
            {
                cout << caracter;
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    cout << "\n";
};