#include "ExpedienteEmpleado.h"
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

ExpedienteEmpleado::ExpedienteEmpleado(
    std::string _fechaInicio,
    int _codigoEmpleado,
    string _identidad,
    std::string _nombre,
    std::string _apellido,
    std::string _descripcionPuesto,
    std::string _amonestaciones,
    std::string _estadoCivil,
    std::string _puesto,
    int _numeroCelular,
    double _salarioMensual,
    double _diasVacaciones,
    std::string _contactoNombre,
    int _contactoEmergencia)
{
    fechaInicio = _fechaInicio;
    codigoEmpleado = _codigoEmpleado;
    identidad = _identidad;
    nombre = _nombre;
    apellido = _apellido,
    descripcionPuesto = _descripcionPuesto;
    amonestaciones = _amonestaciones;
    estadoCivil = _estadoCivil;
    puesto = _puesto;
    numeroCelular = _numeroCelular;
    salarioMensual = _salarioMensual;
    diasVacaciones = _diasVacaciones;
    contactoNombre = _contactoNombre;
    contactoEmergencia = _contactoEmergencia;

    std::cout << "📢 NUEVA CONTRATACION: Se ha creado el expediente para " << nombre << " " << apellido << "\n";
}
ExpedienteEmpleado::~ExpedienteEmpleado()
{
    salarioMensual = 0.0;
    nombre = "";
}

void ExpedienteEmpleado::mostrarExpediente() const
{
    cout << "\n====================================" << endl;
    cout << "        EXPEDIENTE DE EMPLEADO      " << endl;
    cout << "====================================" << endl;
    cout << "Código:   " << codigoEmpleado << endl;
    cout << "Nombre:   " << nombre << " " << apellido << endl;
    cout << "Puesto:   " << puesto << endl;
    cout << "Salario:  $" << salarioMensual << endl;
    cout << "====================================" << endl;
}

// getters
int ExpedienteEmpleado::getCodigoEmpleado() const
{
    return codigoEmpleado;
}

string ExpedienteEmpleado::getNombreCompleto() const
{
    return nombre + " " + apellido;
}
string ExpedienteEmpleado::getPuesto() const
{
    return puesto;
}

double ExpedienteEmpleado::getSalarioMensual() const
{
    return salarioMensual;
}
// setters
void ExpedienteEmpleado::setPuesto(string nuevoPuesto)
{
    if (!nuevoPuesto.empty())
    {
        puesto = nuevoPuesto;
    }
};
void ExpedienteEmpleado::setAumentoSalario(double nuevoSalario)
{
    if (nuevoSalario > 0 && nuevoSalario > salarioMensual)
    {
        salarioMensual = nuevoSalario;
    }
};

// funciones de utilidad
double ExpedienteEmpleado::calcularDeduccionFalta(int faltasMes) const
{
    double costoDia = salarioMensual / 30.0;
    return costoDia * faltasMes;
}; // calcula la deduccion por cantidad de dias que cometio falta, si fue castigado dos dias, se multiplica y se hace la deduccion

double ExpedienteEmpleado::calcularImpuesto() const
{
    if (salarioMensual > 3000.0)
    {
        return (salarioMensual - 3000.0) * 0.15;
    }
    return 0.0;
};

double ExpedienteEmpleado::calcularSalarioNeto(double bonificacion) const
{
    double neto = salarioMensual + bonificacion - calcularDeduccionFalta(2) - calcularImpuesto();
    return (neto > 0) ? neto : 0.0;
};

string ExpedienteEmpleado::determinarRendimiento(int faltasMes) const
{
    if (faltasMes == 0)
        return "EXCELENTE (Asistencia Perfecta)";
    if (faltasMes <= 2)
        return "REGULAR (Monitorear asistencias)";
    return "CRÍTICO (Llamado de atención requerido)";
};
void ExpedienteEmpleado::desplegarColillaPago() const
{
    std::cout << "\n"
              << std::string(45, '=') << "\n";
    std::cout << "         RECIBO DE PAGO DE FORMAL       \n";
    std::cout << std::string(45, '=') << "\n";

    // Alineación de texto usando setw
    std::cout << std::left << std::setw(18) << "Código:" << codigoEmpleado << "\n";
    std::cout << std::left << std::setw(18) << "Empleado:" << nombre << "\n";
    std::cout << std::left << std::setw(18) << "Puesto:" << puesto << "\n";
    std::cout << std::left << std::setw(18) << "Estatus:" << determinarRendimiento(2) << "\n";
    std::cout << std::string(45, '-') << "\n";

    // Formateo estricto de números flotantes a 2 decimales [1]
    std::cout << std::fixed << std::setprecision(2);

    std::cout << std::left << std::setw(25) << "Salario Base:" << "$ " << std::right << std::setw(10) << salarioMensual << "\n";
    std::cout << std::left << std::setw(25) << "Deducción por Faltas:" << "$ " << std::right << std::setw(10) << calcularDeduccionFalta(2) << "\n";
    std::cout << std::left << std::setw(25) << "Retención Impuesto:" << "$ " << std::right << std::setw(10) << calcularImpuesto() << "\n";
    std::cout << std::string(45, '-') << "\n";
    std::cout << std::left << std::setw(25) << "SALARIO NETO:" << "$ " << std::right << std::setw(10) << calcularSalarioNeto(200) << "\n";
    std::cout << std::string(45, '=') << "\n";
}