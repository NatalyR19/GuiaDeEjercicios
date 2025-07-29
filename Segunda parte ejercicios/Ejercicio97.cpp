#include <iostream> // Para entrada/salida (como std::cout)
#include <string>   // Para usar std::string
#include <iomanip>  // Para formatear la salida (como std::fixed y std::setprecision)

// Definición de la clase Factura
class Factura {
private:
    // Atributos privados
    std::string descripcion;
    int cantidad;
    double precioUnitario;

public:
    // Constructor que inicializa los atributos
    Factura(std::string desc, int cant, double precioU) {
        descripcion = desc;
        cantidad = cant;
        precioUnitario = precioU;
    }

    // Método para calcular el total (cantidad * precio unitario)
    double calcularTotal() {
        return cantidad * precioUnitario;
    }

    // Método para mostrar los detalles de la factura
    void mostrarFactura() {
        std::cout << "--- Detalles de la Factura ---" << std::endl;
        std::cout << "Descripción: " << descripcion << std::endl;
        std::cout << "Cantidad: " << cantidad << std::endl;
        // std::fixed y std::setprecision se usan para mostrar el precio con dos decimales
        std::cout << "Precio Unitario: $" << std::fixed << std::setprecision(2) << precioUnitario << std::endl;
        std::cout << "Total: $" << std::fixed << std::setprecision(2) << calcularTotal() << std::endl;
        std::cout << "------------------------------" << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase Factura
    // Se inicializa con: descripción "Servicio de Consultoria", cantidad 5, precio unitario 150.75
    Factura miFactura("Servicio de Consultoria", 5, 150.75);

    // Llamar al método mostrarFactura para imprimir todos los datos
    miFactura.mostrarFactura();

    return 0; // Indica que el programa terminó correctamente
}