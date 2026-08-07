#include <iostream>

using namespace std;
/*
    @author= Francisco Murillo
    @package = Realiza el calculo de la venta de un producto.
 */
int main()
{
    // inicializacion de los atributos del producto.
    string nombre = "Piano";                       // combo del producto en inventario, tambien incluye | Cargador | Soporte
    double precio = 1500;                          // precio del combo completo.
    double descuentoMarca = 0;                        // La marca no tiene oferta.
    double descuentoProducto = 0.10;                    //% del descuento del combo.
    double impuestoSobreVenta = 0.15; //% del impuesto en Honduras.
    double subtotal;             // guarda el valor obtenido de multiplicar el precio*cantidad+impuesto-descuento
    double totalPagar;           // precio total del producto
    double descuentoTotal;
    int cantidades; // cantidades a vender

    // solicita los datos al cliente
    cout << "Cuantas cantidades desea comprar: " << endl;
    cin >> cantidades;
    // calcula el precio total contando con todos los valores involucrados
    descuentoTotal = precio - (precio * descuentoMarca) - (precio * descuentoProducto);
    subtotal = descuentoTotal + (descuentoTotal * impuestoSobreVenta);
    totalPagar = cantidades * subtotal;
    // Imprime la informacion
    cout << "Ejercicio de Comercialización \n"
         << endl;
    cout << "\nNombre"
         << "| Precio"
         << "| Descuento Marca"
         << "| Descuento Producto"
         << "| Descuento Total"
         << "    | Imp.   "
         << "| SubTotal"
         << "| Cantidades"
         << "| Total" << "\n";
    cout << nombre << "    "
         << precio << "          "
         << descuentoMarca << "               "
         << descuentoProducto << "               "
         << descuentoTotal << "             "
         << impuestoSobreVenta << "      "
         << subtotal << "      "
         << cantidades << "        "
         << totalPagar << "\n";
    return 0;
}
