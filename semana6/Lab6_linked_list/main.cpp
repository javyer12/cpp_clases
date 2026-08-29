#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <random>
#include <string>
#include <sstream>
// clases
#include "TarjetaDebito.h" //clase base
// clases derivadas
#include "TarjetaNormal.h"
#include "TarjetaPlatinum.h"
#include "TarjetaPremium.h"
using namespace std;

// crea un valor aleatorio para las tarjetas
string generarPin(mt19937 &gen)
{
    uniform_int_distribution<> distr(1000, 9999);
    return to_string(distr(gen)); // Usa el motor existente y avanza al siguiente estado
}
double generarCashBack(mt19937 &gen)
{
    uniform_int_distribution<> distr(01, 99);
    return distr(gen); // Usa el motor existente y avanza al siguiente estado
}
int main()
{

    std::cout << "==========================================" << endl;
    std::cout << "      VECTORES NORMALES (POR VALOR)       " << endl;
    std::cout << "==========================================" << endl;

    //instancias con vectores
    vector<TarjetaDebito *> tarjetasNormales;
    vector<TarjetaPremium *> tarjeta_premium;
    vector<TarjetaPlatinum *> tarjeta_platinum;

    //instancias con listas
    list<TarjetaDebito *> tarjeta_normales;
    list<TarjetaPremium *> tarjetaPremium;
    list<TarjetaPlatinum *> tarjetaPlatinum;
    // variables internas
    bool active = true;
    std::string continuar = "";
    int option;

    // atributos de las clases
    std::string titular;
    double saldo;
    double cashBack;
    std::string seguro_cobertura;

    random_device rd;
    mt19937 gen(rd());

    do
    {
        std::cout << left << "Elige un tipo de tarjeta:"
                  << "\n"
                  << "1.Tarjeta Normal."
                  << "\n"
                  << "2.Tarjeta Premium."
                  << "\n"
                  << "3.Tarjeta Platinum."
                  << "\n"
                  << "4.Salir." << endl;
        cin >> option;
        // ================Crea una Tarjeta Normal================
        if (option == 1)
        {
            std::cout << "\n        CREAR TARJETAS NORMALES    " << endl;
            std::cout << "------------------------------------------" << endl;
            std::cout << "Ingrese el nombre:" << endl;
            cin >> titular;
            std::cout << "Ingrese el monto:" << endl;
            cin >> saldo;

            tarjetasNormales.push_back(new TarjetaNormal(titular, "1233-4420-" + generarPin(gen), saldo)); //se crea con vector
            tarjeta_normales.push_back(new TarjetaNormal(titular, "1233-4420-" + generarPin(gen), saldo));//se crea con lista

            cout << "Tarjeta creada exitosamente." << endl;
        }
        // ================Crea una Tarjeta Premium================
        if (option == 2)
        {
            std::cout << "\n        CREAR TARJETAS PREMIUM    " << endl;
            std::cout << "------------------------------------------" << endl;
            std::cout << "Ingrese el nombre:" << endl;
            cin >> titular;
            std::cout << "Ingrese el monto:" << endl;
            cin >> saldo;

            tarjeta_premium.push_back(new TarjetaPremium(titular, "2240-2027-" + generarPin(gen), saldo, generarCashBack(gen))); //vector
            tarjetaPremium.push_back(new TarjetaPremium(titular, "2240-2027-" + generarPin(gen), saldo, generarCashBack(gen)));//lista
            cout << "Tarjeta creada exitosamente." << endl;
        }
        if (option == 3)
        {
            std::cout << "\n        CREAR TARJETAS PLATINUM    " << endl;
            std::cout << "------------------------------------------" << endl;
            std::cout << "Ingrese el nombre:" << endl;
            cin >> titular;
            std::cout << "Ingrese el monto:" << endl;
            cin >> saldo;
            tarjeta_platinum.push_back(new TarjetaPlatinum(titular, "0019-1521-" + generarPin(gen), saldo, generarCashBack(gen)));//vector
            tarjetaPlatinum.push_back(new TarjetaPlatinum(titular, "0019-1521-" + generarPin(gen), saldo, generarCashBack(gen)));//lista

            cout << "Tarjeta creada exitosamente." << endl;
        }
        // =================Sale del Programa==================

        if (option == 4)
        {
            active = false;
        }
        // =================Continua o Cierra el programa==================
        if (option == 1 || option == 2 || option == 3)
        {
            std::cout << "Quieres agregar otra tarjeta?"
                      << "\n"
                      << "Si = y " << "\n"
                      << "No = n" << endl;
            cin >> continuar;
            if (continuar != "y")
            {
                active = false;
            }
        }
    } while (active);

    std::cout << "\n                  LISTA DE TARJETAS NORMALES    " << endl;
    std::cout << "-------------------------------------------------------" << endl;
    cout << left << setw(10) << "Nombre"
         << right << setw(14) << "Saldo"
         << setw(14) << "# Tarjeta"
         << setw(16) << "Beneficio" << endl;
    cout << string(55, '=') << "\n";

    for (size_t i = 0; i < tarjetasNormales.size(); i++)
    {
        cout << left << setw(12) << tarjetasNormales[i]->getTitular()
             << right << setw(10) << tarjetasNormales[i]->getSaldo()
             << setw(20) << tarjetasNormales[i]->getNumeroTarjeta() << setw(17)
             << "Sin Beneficios" << endl;
    }
    std::cout << "=======================================================" << endl;

    std::cout << "\n                  LISTA DE TARJETAS PREMIUM    " << endl;
    std::cout << "-------------------------------------------------------" << endl;

    cout << left << setw(10) << "Nombre"
         << right << setw(14) << "Saldo"
         << setw(14) << "# Tarjeta"
         << setw(16) << "Beneficio" << endl;
    cout << string(55, '=') << "\n";

    for (size_t i = 0; i < tarjeta_premium.size(); i++)
    {
        cout << left << setw(12) << tarjeta_premium[i]->getTitular()
             << right << setw(10) << tarjeta_premium[i]->getSaldo()
             << setw(20) << tarjeta_premium[i]->getNumeroTarjeta()
             << setw(5) << tarjeta_premium[i]->getCashBack() << "%." << endl;
    }

    std::cout << "=======================================================" << endl;

    std::cout << "\n                  LISTA DE TARJETAS PLATINUM    " << endl;
    std::cout << "-------------------------------------------------------" << endl;
    cout << left << setw(10) << "Nombre"
         << right << setw(14) << "Saldo"
         << setw(14) << "# Tarjeta"
         << setw(16) << "Beneficio" << endl;
    cout << string(55, '=') << "\n";
    for (size_t i = 0; i < tarjeta_platinum.size(); i++)
    {
        cout << left << setw(12) << tarjeta_platinum[i]->getTitular()
             << right << setw(10) << tarjeta_platinum[i]->getSaldo()
             << setw(20) << tarjeta_platinum[i]->getNumeroTarjeta()
             << setw(5) << tarjeta_platinum[i]->getCobertura() << "%." << endl;
    }

    std::cout << "=======================================================" << endl;

    std::cout << "==========================================" << endl;
    std::cout << "      INSTANCIAS CON LISTAS       " << endl;
    std::cout << "==========================================" << endl;

    std::cout << "\n                  LISTA DE TARJETAS NORMALES    " << endl;
    std::cout << "-------------------------------------------------------" << endl;
    cout << left << setw(10) << "Nombre"
         << right << setw(14) << "Saldo"
         << setw(14) << "# Tarjeta"
         << setw(16) << "Beneficio" << endl;
    cout << string(55, '=') << "\n";

    for (list<TarjetaDebito *>::iterator it = tarjeta_normales.begin(); it != tarjeta_normales.end(); ++it)
    {
        cout << left << setw(12) << (*it)->getTitular()
             << right << setw(10) << (*it)->getSaldo()
             << setw(20) << (*it)->getNumeroTarjeta() << setw(17)
             << "Sin Beneficios" << endl;
    }
    std::cout << "=======================================================" << endl;

    // ============================================================
    std::cout << "\n                  LISTA DE TARJETAS PREMIUM    " << endl;
    std::cout << "-------------------------------------------------------" << endl;
    cout << left << setw(10) << "Nombre"
         << right << setw(14) << "Saldo"
         << setw(14) << "# Tarjeta"
         << setw(16) << "Beneficio" << endl;
    cout << string(55, '=') << "\n";

    for (list<TarjetaPremium *>::iterator it = tarjetaPremium.begin(); it != tarjetaPremium.end(); ++it)
    {
        cout << left << setw(12) << (*it)->getTitular()
             << right << setw(10) << (*it)->getSaldo()
             << setw(20) << (*it)->getNumeroTarjeta() << setw(17)
             << "Sin Beneficios" << endl;
    }
    std::cout << "=====================================================" << endl;

    // ============================================================
    std::cout << "\n                  LISTA DE TARJETAS PLATINUM    " << endl;
    std::cout << "-------------------------------------------------------" << endl;
    cout << left << setw(10) << "Nombre"
         << right << setw(14) << "Saldo"
         << setw(14) << "# Tarjeta"
         << setw(16) << "Beneficio" << endl;
    cout << string(55, '=') << "\n";

    for (list<TarjetaPlatinum *>::iterator it = tarjetaPlatinum.begin(); it != tarjetaPlatinum.end(); ++it)
    {
        cout << left << setw(12) << (*it)->getTitular()
             << right << setw(10) << (*it)->getSaldo()
             << setw(20) << (*it)->getNumeroTarjeta() << setw(17)
             << "Sin Beneficios" << endl;
    }
    std::cout << "=======================================================" << endl;

    std::cout << "\nLiberando memoria dinamica..." << endl;
    for (size_t i = 0; i <= tarjeta_platinum.size(); i++)
    {
        delete tarjetasNormales[i];
        delete tarjeta_premium[i];
        delete tarjeta_platinum[i];
    }
    tarjetasNormales.clear();
    tarjeta_premium.clear();
    tarjeta_platinum.clear();

    for (list<TarjetaDebito *>::iterator it = tarjeta_normales.begin();
         it != tarjeta_normales.end(); ++it)
    {
        delete *it;
    }

    tarjeta_normales.clear();
    std::cout << "Memoria liberada exitosamente." << endl;

    return 0;
    };