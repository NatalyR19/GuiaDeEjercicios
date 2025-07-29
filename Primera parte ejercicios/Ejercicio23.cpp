#include <iostream>
using namespace std;
#define FILAS 3
#define COLUMNAS 4

int sumarColumna(int matriz[FILAS][COLUMNAS], int columna) {
    int suma = 0;
    for (int i = 0; i < FILAS; i++) {
        suma += matriz[i][columna];
    }
    return suma;
}
int main() {
    int matriz[FILAS][COLUMNAS];

    cout << "Ingrese los elementos de la matriz (" << FILAS << "x" << COLUMNAS << "):" << endl;
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
    int columnaSeleccionada;
    cout << "\nIngrese el número de la columna que desea sumar (0 a " << COLUMNAS - 1 << "): ";
    cin >> columnaSeleccionada;

    if (columnaSeleccionada < 0 || columnaSeleccionada >= COLUMNAS) {
        cout << "Error: columna fuera de rango." << endl;
        return 1;
    }
    int resultado = sumarColumna(matriz, columnaSeleccionada);
    cout << "\nLa suma de los elementos en la columna " << columnaSeleccionada << " es: " << resultado << endl;
    return 0;
}

