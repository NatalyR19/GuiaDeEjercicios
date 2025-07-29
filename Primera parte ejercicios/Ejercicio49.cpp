#include <iostream>
using namespace std;

struct Estudiante {
    string nombre;
    float notas[3];
};

float calcularPromedio(Estudiante e) {
    float suma = 0;
    for (int i = 0; i < 3; i++) {
        suma += e.notas[i];
    }
    return suma / 3;
}

int main() {
    Estudiante est;
    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, est.nombre);

    cout << "Ingrese 3 notas:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Nota " << (i + 1) << ": ";
        cin >> est.notas[i];
    }

    float promedio = calcularPromedio(est);
    cout << "El promedio de " << est.nombre << " es: " << promedio << endl;

    return 0;
}
