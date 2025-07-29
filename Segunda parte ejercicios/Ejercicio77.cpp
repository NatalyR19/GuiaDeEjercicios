#include <iostream>
#include <string>

class Empleado {
private:
    // Atributos privados
    std::string nombre;
    std::string ID;
    double salario;

public:
    // Constructor que recibe los tres datos e inicializa los atributos
    Empleado(std::string nom, std::string id, double sal) {
        nombre = nom;
        ID = id;
        salario = sal;
    }

    // Método público para mostrar los datos del empleado
    void mostrarDatos() {
        std::cout << "--- Datos del Empleado ---" << std::endl;
        std::cout << "Nombre: " << nombre << std::endl;
        std::cout << "ID: " << ID << std::endl;
        std::cout << "Salario: $" << salario << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase Empleado
    // Se inicializa con: nombre "Juan Perez", ID "EMP001", salario 50000.0
    Empleado empleado1("Juan Perez", "EMP001", 50000.0);

    // Llamar al método mostrarDatos para imprimir la información del empleado
    empleado1.mostrarDatos();

    return 0;
}