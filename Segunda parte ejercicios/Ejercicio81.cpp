#include <iostream> // Para entrada/salida (como std::cout)
#include <string>   // Para usar std::string
#include <vector>   // Para usar std::vector
#include <iomanip>  // Para formatear la salida (como std::fixed y std::setprecision)

// Definición de la clase Producto
class Producto {
public:
    // Atributos públicos
    std::string nombre;
    double precio;
};

int main() {
    // Declarar un vector de objetos Producto para almacenar tres productos
    std::vector<Producto> productos(3);

    // Asignar valores directamente a cada producto en el vector
    // Producto 1
    productos[0].nombre = "Laptop Gamer";
    productos[0].precio = 1350.75;

    // Producto 2
    productos[1].nombre = "Monitor Ultrawide";
    productos[1].precio = 499.99;

    // Producto 3
    productos[2].nombre = "Auriculares Inalambricos";
    productos[2].precio = 120.50;

    // Calcular el total de los precios de todos los productos
    double totalPagar = 0.0;
    for (int i = 0; i < productos.size(); ++i) {
        totalPagar += productos[i].precio;
    }

    // Imprimir el detalle de los productos y el total a pagar
    std::cout << "--- Carrito de Compras ---" << std::endl;
    std::cout << std::fixed << std::setprecision(2); // Formato de 2 decimales para precios

    for (int i = 0; i < productos.size(); ++i) {
        std::cout << productos[i].nombre << ": $" << productos[i].precio << std::endl;
    }
    std::cout << "--------------------------" << std::endl;
    std::cout << "Total a pagar: $" << totalPagar << std::endl;

    return 0; // Indica que el programa finalizó correctamente
}