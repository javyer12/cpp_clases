#include <iostream>
#include <vector>
using namespace std;

class Persona{
    public:
        std::string name;
        int age;
        Persona(std::string name, int age);

        void Saludar()  {
            cout << name << " dice hola!." << endl;
        }
};
int main()
{
    int edades[100];
    edades[0] = 34;
    vector<int> numeros;
    numeros.push_back(78);
    numeros.push_back(30);

    vector<string> ciudades;

    ciudades.push_back("San Pedro Sula.");
    ciudades.push_back("San Juan.");
    ciudades.push_back("Ocotepeque.");
    ciudades.push_back("El Progreso.");
    ciudades.push_back("Guanaja.");

    std::vector<Persona*> personas;

    personas.push_back(new Persona("Juan ", 30));
    personas.push_back(new Persona("Leo ", 20));
    personas.push_back(new Persona("Teo ", 35));
    personas.push_back(new Persona("Lian ", 27));
    personas.push_back(new Persona("Hernan ", 40));

    cout << "Vectores" << endl;

    cout << "Primer número: " << numeros[0] << endl;
    cout << "Segundo número: " << numeros.at(1) << endl;

    cout << ciudades.front() << endl;
    cout << "Running from the for" << endl;
    // recorrido por referencia
    for( std::string n : ciudades){
        cout << n << endl;
    }
    cout << "========================" << endl;
    cout << "Running from the for with i" << endl;
    for (int i = 0; i < ciudades.size(); i++){
        cout << ciudades.at(i) << endl;
    }

    cout << "========================" << endl;
    for (int i = 0; i < personas.size(); i++)
    {
        personas[i]->Saludar();
    }
        return 0;
}