#include <iostream>
using namespace std;
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};
#define NUM_ESTUDIANTES 3
int main() {
    Estudiante alumnos[NUM_ESTUDIANTES];
    cout << "Ingrese los datos de " << NUM_ESTUDIANTES << " estudiantes:" << endl;
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "\nEstudiante #" << i + 1 << endl;
        cout << "Nombre: ";
        cin.ignore();  // Para evitar problemas si hay saltos de línea previos
        cin.getline(alumnos[i].nombre, 50);
        cout << "Edad: ";
        cin >> alumnos[i].edad;
        cout << "Promedio: ";
        cin >> alumnos[i].promedio;
    }
    cout << "\nDatos ingresados:" << endl;
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "\nEstudiante #" << i + 1 << endl;
        cout << "Nombre: " << alumnos[i].nombre << endl;
        cout << "Edad: " << alumnos[i].edad << endl;
        cout << "Promedio: " << alumnos[i].promedio << endl;
    }
    return 0;
}


