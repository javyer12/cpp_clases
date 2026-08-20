#include "iostream"
#include "Servicios.h"
#include "Residencia.h"

using namespace std;

int main()
{
    Residencia rs(1, 4.5, "residencia", 250, 0);
    Residencia es(2, 5.5, "empresarial", 400, 0);
    cout << "Repaso de C++" << endl;
    rs.reporteIngresos("residencia");
    rs.reporteIngresos("empresarial");

    cout << "===================================" << endl;
    cout << "Total generado: " << rs.getTotalGenerado() + es.getTotalGenerado() << endl;
    cout << "===================================" << endl;
    cout << rs.getTotalGenerado();
    cout << es.getTotalGenerado();

    return 0;
}