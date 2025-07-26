//46. Struct para estudiante: Definir un struct con campos: nombre, carné, carrera y promedio//
#include <iostream>
#include <string>
using namespace std;

// Definición del struct //
struct Estudiante {
    string nombre;
    string carne;
    string carrera;
    double promedio;
};

int main() {
    Estudiante estudiante1;
    estudiante1.nombre = "Juan Perez Lopez";
    estudiante1.carne = "202300123";
    estudiante1.carrera = "Ingenieria en Sistemas";
    estudiante1.promedio = 8.75;

    cout << "--- Informacion del Estudiante 1 ---" << endl;
    cout << "Nombre: " << estudiante1.nombre << endl;
    cout << "Carne: " << estudiante1.carne << endl;
    cout << "Carrera: " << estudiante1.carrera << endl;
    cout << "Promedio: " << estudiante1.promedio << endl;
    cout << endl;

    return 0;
}