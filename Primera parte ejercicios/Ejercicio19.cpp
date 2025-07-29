#include <iostream>
using namespace std;
#define FILAS 3
#define COLUMNAS 3

int main() {
    int matrizA[FILAS][COLUMNAS];
    int matrizB[FILAS][COLUMNAS];
    int matrizSuma[FILAS][COLUMNAS];

    cout << "Ingrese los elementos de la primera matriz:" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> matrizA[i][j];
        }
    }
    cout << "\nIngrese los elementos de la segunda matriz:" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> matrizB[i][j];
        }
    }
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            matrizSuma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
    cout << "\nLa matriz resultante de la suma es:" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << matrizSuma[i][j] << "\t";
        }
        cout << endl;
    }
    return 0;
}
