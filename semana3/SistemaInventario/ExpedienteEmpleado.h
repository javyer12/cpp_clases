#ifndef EXPEDIENTEEMPLEADO_H
#define EXPEDIENTEEMPLEADO_H
#include <string>

using namespace std;

class ExpedienteEmpleado
{
public:
    ExpedienteEmpleado(
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
        int _contactoEmergencia);
    ~ExpedienteEmpleado();
    // funciones de acceso, getter y setter
    void setPuesto(std::string);
    string getPuesto() const;

    int setCodigoEmpleado(int);
    int getCodigoEmpleado() const;

    void setAumentoSalario(double);
    double getSalarioMensual() const;

    std::string getNombreCompleto() const;

    // funciones de utilidad

    double calcularDeduccionFalta(int faltasMes) const;

    double calcularImpuesto() const;

    double calcularSalarioNeto(double bonificacion) const;
    std::string determinarRendimiento(int faltasMes) const;

    void mostrarExpediente() const;
    void desplegarColillaPago() const;

private:
    std::string fechaInicio;
    int codigoEmpleado;
    string identidad;
    std::string nombre;
    std::string apellido;
    std::string descripcionPuesto;
    std::string amonestaciones;
    std::string estadoCivil;
    std::string puesto;
    int numeroCelular;
    double salarioMensual;
    double diasVacaciones;
    std::string contactoNombre;
    int contactoEmergencia;
};

#endif // ExpedienteEmpleado