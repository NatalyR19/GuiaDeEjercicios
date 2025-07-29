#include <iostream>
using namespace std;

int main() {
    const int filas = 3, columnas = 3;
    int matriz[filas][columnas], transpuesta[columnas][filas];

    cout << "Ingrese los elementos de la matriz 3x3:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            transpuesta[j][i] = matriz[i][j];
        }
    }

    cout << "\nMatriz transpuesta:\n";
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++) {
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
