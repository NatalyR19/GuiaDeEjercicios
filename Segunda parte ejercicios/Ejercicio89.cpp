#include <iostream> // Para entrada/salida (como std::cout)
#include <string>   // Para usar std::string

// Definición de la clase Estudiante
class Estudiante {
private:
    // Atributos privados
    std::string nombre;
    double promedio;

public:
    // Constructor que inicializa los atributos
    Estudiante(std::string nom, double prom) {
        nombre = nom;
        promedio = prom;
    }

    // Método público para verificar si el estudiante aprueba
    void verificarAprobacion() {
        std::cout << "--- Resultado de Aprobación para " << nombre << " ---" << std::endl;
        if (promedio >= 70) {
            std::cout << "¡Felicidades! " << nombre << " ha APROBADO con un promedio de " << promedio << "." << std::endl;
        } else {
            std::cout << "Lo siento, " << nombre << " NO ha APROBADO. Su promedio es " << promedio << "." << std::endl;
        }
        std::cout << "---------------------------------------------------" << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase Estudiante
    // Estudiante que aprueba
    Estudiante estudiante1("Ana Garcia", 85.5);
    estudiante1.verificarAprobacion();

    std::cout << std::endl; // Salto de línea para separar resultados

    // Estudiante que no aprueba
    Estudiante estudiante2("Luis Hernandez", 68.0);
    estudiante2.verificarAprobacion();

    return 0; // Indica que el programa terminó correctamente
}