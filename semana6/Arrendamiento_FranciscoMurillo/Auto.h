#ifndef AUTO_H
#define AUTO_H
#include <string>

class Auto
{
public:
    Auto(double valor_comercial, double gastos_operativos, double tarifa, int espacios, std::string modeloAuto);
    virtual ~Auto();

    double getValorComercial() const;
    void setValorComercial(double valor_comercial);
    double getGastosOperativos() const;
    void setGastosOperativos(double gastos_comerciales);
    double getTarifa() const;
    void setTarifa(double tarifa);

     int getEspacios() const;
    void setEspacios(int espacios);
    virtual std::string getModeloAuto() const = 0;
    void setModeloAuto(std::string modelo_auto);

    virtual double calcularTarifa() = 0;

    virtual void mostrarInformacion();

private:
    double valor_comercial;
    double gastos_operativos;
    double tarifa;
    int espacios;
    std::string modeloAuto;
};

#endif