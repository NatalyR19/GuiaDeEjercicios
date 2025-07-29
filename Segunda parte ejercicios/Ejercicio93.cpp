#include <iostream> // Para entrada/salida (como std::cout)
#include <string>   // Para usar std::string

// Definición de la clase Vehiculo
class Vehiculo {
private:
    // Atributos privados
    std::string marca;
    std::string modelo;
    int anio;

public:
    // Constructor que inicializa los atributos
    Vehiculo(std::string _marca, std::string _modelo, int _anio) {
        marca = _marca;
        modelo = _modelo;
        anio = _anio;
    }

    // Método público para mostrar los datos del vehículo
    void mostrar() {
        std::cout << "--- Información del Vehículo ---" << std::endl;
        std::cout << "Marca: " << marca << std::endl;
        std::cout << "Modelo: " << modelo << std::endl;
        std::cout << "Año: " << anio << std::endl;
        std::cout << "--------------------------------" << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase Vehiculo
    // Se inicializa con: marca "Toyota", modelo "Corolla", año 2022
    Vehiculo miCoche("Toyota", "Corolla", 2022);

    // Llamar al método mostrar para imprimir la información del vehículo
    miCoche.mostrar();

    return 0; // Indica que el programa terminó correctamente
}