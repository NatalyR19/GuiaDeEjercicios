//50. Estudiante con promedio más alto: Función que identifique al estudiante con el mejor promedio.//
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Estudiante {
    string nombre;
    double promedio;
};

Estudiante identificarEstudianteConMejorPromedio(const vector<Estudiante>& listaEstudiantes) {
    double mejorPromedioActual = listaEstudiantes[0].promedio;
    Estudiante estudianteConMejorPromedio = listaEstudiantes[0];

    for (size_t i = 1; i < listaEstudiantes.size(); ++i) {
        const Estudiante& estudiante = listaEstudiantes[i];

        if (estudiante.promedio > mejorPromedioActual) {
            mejorPromedioActual = estudiante.promedio;
            estudianteConMejorPromedio = estudiante;
        }
    }

    return estudianteConMejorPromedio;
}


int main() {
    vector<Estudiante> grupoEstudiantes = {
        {"Ana Lopez", 9.5},
        {"Carlos Ruiz", 8.9},
        {"Elena Diaz", 9.9}, // mejor promedio//
        {"David Mora", 8.7},
        {"Laura Soto", 7.2},
        {"Miguel Gomez", 9.8}
    };


    cout << "--- Lista de Estudiantes ---" << endl;
    for (const Estudiante& est : grupoEstudiantes) {
        cout << "Nombre: " << est.nombre << ", Promedio: " << est.promedio << endl;
    }
    cout << endl;

    Estudiante elMejorEstudiante = identificarEstudianteConMejorPromedio(grupoEstudiantes);

    cout << "--- Estudiante con el Promedio Mas Alto ---" << endl;
    cout << "Nombre: " << elMejorEstudiante.nombre << endl;
    cout << "Promedio: " << elMejorEstudiante.promedio << endl;

    return 0;
}