#include <iostream>
using namespace std;

int main() {
    const int filas = 3, columnas = 3;
    int matriz[filas][columnas];

    cout << "Ingrese los elementos de la matriz 3x3:\n";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "\nMenor valor por columna:\n";
    for (int j = 0; j < columnas; j++) {
        int menor = matriz[0][j];
        for (int i = 1; i < filas; i++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
        cout << "Columna " << j << ": " << menor << endl;
    }

    return 0;
}
