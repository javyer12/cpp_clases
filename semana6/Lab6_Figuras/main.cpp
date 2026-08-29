#include <iostream>
#include <vector>
#include <list>
#include "Circulo.h"
#include "Arandela.h"

using namespace std;

int main()
{

    cout << "==========================================" << endl;
    cout << "      VECTORES NORMALES (POR VALOR)       " << endl;
    cout << "==========================================" << endl;

    vector<Circulo> vectorCirculos;

    vectorCirculos.push_back(Circulo(0.0, 0.0, 10.0, 10.0, 5.0));
    vectorCirculos.push_back(Circulo(2.5, 3.0, 12.0, 12.0, 8.5));

    cout << "\n    LISTA DE CIRCULOS    " << endl;

    for (size_t i = 0; i < vectorCirculos.size(); i++)
    {
        cout << "\n[Circulo #" << (i + 1) << " - Clase: "
             << vectorCirculos[i].getClase() << "]";
        vectorCirculos[i].mostrarAtributos();
    }

    vector<Arandela> vectorArandelas;

    vectorArandelas.push_back(Arandela(1.0, 1.0, 15.0, 15.0, 10.0, 4.0));

    cout << "\n    LISTA DE ARANDELAS    " << endl;

    for (size_t i = 0; i < vectorArandelas.size(); i++)
    {
        cout << "\n[Arandela #" << (i + 1) << " - Clase: "
             << vectorArandelas[i].getClase() << "]";
        vectorArandelas[i].mostrarAtributos();
    }

    cout << "\n==========================================" << endl;
    cout << "        VECTOR DINAMICO POLIMORFICO       " << endl;
    cout << "==========================================" << endl;

    vector<Figura *> figurasDinamicas;

    figurasDinamicas.push_back(new Circulo(0.0, 0.0, 10.0, 10.0, 7.0));
    figurasDinamicas.push_back(new Arandela(5.0, 5.0, 20.0, 20.0, 12.0, 6.0));
    figurasDinamicas.push_back(new Circulo(1.0, -2.0, 8.0, 8.0, 3.2));

    cout << "\n    ATRIBUTOS DE FIGURAS EN EL HEAP    " << endl;

    for (size_t i = 0; i < figurasDinamicas.size(); i++)
    {
        cout << "\n------------------------------------------";
        cout << "\nFigura #" << (i + 1) << " ["
             << figurasDinamicas[i]->getClase() << "]";
        figurasDinamicas[i]->mostrarAtributos();
    }

    // Liberación de memoria

    cout << "\nLiberando memoria dinamica..." << endl;

    for (size_t i = 0; i < figurasDinamicas.size(); i++)
    {
        delete figurasDinamicas[i];
    }

    figurasDinamicas.clear(); // Elimina los punteros destruidos del vector

    cout << "Memoria liberada exitosamente." << endl;

    return 0;
}

//  g++ -std=c++11 main.cpp ProductoMadera.cpp Tablon.cpp Viga.cpp Panel.cpp  -o programa.exe && ./programa.exe
