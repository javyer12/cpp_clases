/* Clase Cliente.h
   Por Rafael Cerrato
   2 de mayo de 2011.
*/

#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente
{
public:

     Cliente(int=0, string="", double=0.0);

     void setIdCuenta(int);
     int getIdCuenta() const;

     void setNombre(string);
     string getNombre() const;

     void setIngreso(double);
     double getIngreso() const;

private:

     int idCuenta;
     char nombre[50];
     double ingreso;

};
#endif
