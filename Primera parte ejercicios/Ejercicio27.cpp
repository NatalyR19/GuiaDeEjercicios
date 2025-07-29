#include <iostream>
using namespace std;
#define Tamano 6

int main() {
    int arreglo[Tamano];

    cout << "Ingrese " << Tamano << " numeros enteros:" << endl;
    for (int i = 0; i < Tamano; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> arreglo[i];
    }
    for (int i = 0; i < Tamano - 1; i++) {
        for (int j = 0; j < Tamano - 1 - i; j++) {
            if (arreglo[j] > arreglo[j + 1]) {
                int temp = arreglo[j];
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = temp;
            }
        }
    }
    cout << "\nArreglo ordenado en forma ascendente:" << endl;
    for (int i = 0; i < Tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    return 0;
}

