#ifndef SILLA_H
#define SILLA_H

#include <string>
using namespace std;

class Silla
{
private:
    // Atributos
    int codigo;
    std::string modelo;
    std::string tipoPolimero;
    double pesoGramos;     // peso en kilos
    double precioUnitario; // precio en Lempiras
    int stockActual;

    // Resultado del cálculo
    double valorInventario = 0.0;

public:
    // Constructor
    Silla(int cod = 1, std::string mod = "Flat", std::string polimero = "Policarbonato",
          double peso = 10.0, double precio = 200.0, int stock = 5);
    ~Silla();

    // Getters
    int getCodigo();
    std::string getModelo();
    std::string getTipoPolimero();
    double getPesoGramos();
    double getPrecioUnitario();
    int getStockActual();
    double getValorInventario();

    // Setters
    void setCodigo(int cod);
    void setModelo(std::string mod);
    void setTipoPolimero(std::string polimero);
    void setPesoGramos(double peso);
    void setPrecioUnitario(double precio);
    void setStockActual(int stock);

    // Funciones
    double calcularValorInventario();
    void imprimirInformacion();
};

#endif // Silla_H