/* Clase Cliente.cpp
   Implementación
   Por Rafael Cerrato
   2 de mayo de 2011.
*/

#include "Cliente.h"
#include <cstring>

Cliente::Cliente(int id, string nombreCompleto, 
                 double ingresoMensual)
{
     setIdCuenta(id);
     setNombre(nombreCompleto);
     setIngreso(ingresoMensual);
}
     
void Cliente::setIdCuenta(int id)
{
     idCuenta = id > 0 ? id:0;
}

int Cliente::getIdCuenta() const
{
    return idCuenta;
}

void Cliente::setNombre(string nombreCompleto)
{
     const char *ptrNombreCompleto = nombreCompleto.data();
     int numeroCaracteres = nombreCompleto.size();
     
     numeroCaracteres = 
              numeroCaracteres < 50 ? numeroCaracteres:49;
     
     strncpy(nombre, ptrNombreCompleto, numeroCaracteres);
     nombre[numeroCaracteres] = '\0';
}

string Cliente::getNombre() const
{
     return nombre;
}
     
void Cliente::setIngreso(double ingresoMensual)
{
     ingreso = ingresoMensual > 0.0 ? ingresoMensual:0.0;
}

double Cliente::getIngreso() const
{
     return ingreso;
}

