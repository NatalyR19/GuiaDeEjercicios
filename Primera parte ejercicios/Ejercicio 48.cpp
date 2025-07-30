#include <iostream>
#include <string>
using namespace std;


struct Estudiante {
    string nombre;
    string carnet;
    string carrera;
    float promedio;
};

void imprimirEstudiante(Estudiante alumno) {
    cout << "\n--- Datos del Estudiante ---\n";
    cout << "Nombre: " << alumno.nombre << endl;
    cout << "Carnet: " << alumno.carnet << endl;
    cout << "Carrera: " << alumno.carrera << endl;
    cout << "Promedio: " << alumno.promedio << endl;
}

int main() {
    Estudiante estudiante1;

    cout << "Ingrese nombre del estudiante: ";
    getline(cin, estudiante1.nombre);

    cout << "Ingrese numero de carnet: ";
    getline(cin, estudiante1.carnet);

    cout << "Ingrese carrera: ";
    getline(cin, estudiante1.carrera);

    cout << "Ingrese promedio: ";
    cin >> estudiante1.promedio;


    imprimirEstudiante(estudiante1);

    return 0;
}
