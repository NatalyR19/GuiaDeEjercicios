//94.   Calcular cuartiles: Dividir un conjunto ordenado en cuatro partes iguales (Q1, Q2, Q3).//
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Función para calcular los cuartiles
void calcularCuartiles(vector<double>& datos) {
    sort(datos.begin(), datos.end()); // Ordenar los datos

    int n = datos.size();
    double Q1, Q2, Q3;

    // Cálculo de Q2 (Mediana)
    if (n % 2 == 0) {
        Q2 = (datos[n/2 - 1] + datos[n/2]) / 2.0;
    } else {
        Q2 = datos[n/2];
    }

    // Cálculo de Q1 (Mediana de la primera mitad)
    int mitadInferior = n / 2;
    if (mitadInferior % 2 == 0) {
        Q1 = (datos[mitadInferior/2 - 1] + datos[mitadInferior/2]) / 2.0;
    } else {
        Q1 = datos[mitadInferior/2];
    }

    // Cálculo de Q3 (Mediana de la segunda mitad)
    int mitadSuperior = n / 2 + (n % 2 != 0);
    if ((n - mitadSuperior) % 2 == 0) {
        Q3 = (datos[mitadSuperior + (n - mitadSuperior)/2 - 1] + datos[mitadSuperior + (n - mitadSuperior)/2]) / 2.0;
    } else {
        Q3 = datos[mitadSuperior + (n - mitadSuperior)/2];
    }

    // Mostrar resultados
    cout << "Datos ordenados: ";
    for (double num : datos) {
        cout << num << " ";
    }
    cout << "\nQ1 (Primer cuartil): " << Q1 << endl;
    cout << "Q2 (Segundo cuartil/Mediana): " << Q2 << endl;
    cout << "Q3 (Tercer cuartil): " << Q3 << endl;
}

// Función principal
int main() {
    vector<double> datos = {12, 5, 7, 3, 15, 10, 20, 8, 9, 6, 11};

    calcularCuartiles(datos);

    return 0;
}