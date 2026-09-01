#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
class Producto{
    private:
        int id;
        std::string nombre;
        int stock;

    public:
        Producto(int id,std::string nombre,int stock);
        virtual ~Producto();

        int getId() const;
        std::string getNombre() const;
        int getStock() const;

        void agregarStock(int cantodad);
        bool reducirStock(int cantidad);
        void mostrarInfomracion() const;
};
#endif