#include <iostream>
using namespace std;
#define Tamano 8

int main() {
    int arreglo[Tamano];

    cout << "Ingrese " << Tamano << " numeros enteros:" << endl;
    for (int i = 0; i < Tamano; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> arreglo[i];
    }
    for (int i = 1; i < Tamano; i++) {
        int actual = arreglo[i];
        int j = i - 1;
        while (j >= 0 && arreglo[j] > actual) {
            arreglo[j + 1] = arreglo[j];
            j--;
        }
        arreglo[j + 1] = actual;
    }
    cout << "\nArreglo ordenado en forma ascendente:" << endl;
    for (int i = 0; i < Tamano; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
    return 0;
}

