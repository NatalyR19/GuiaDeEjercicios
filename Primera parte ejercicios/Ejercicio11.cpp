#include <iostream>
using namespace std;
int main() {
    int n;

    cout << "Ingrese el tamano del arreglo: ";
    cin >> n;

    if (n <= 0) {
        cout << "El tamaño del arreglo tiene que ser mayor que cero." << endl;
        return 1;
    }

    int arreglo[n];

    cout << "Ingrese los elementos del arreglo:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento [" << i << "]: ";
        cin >> arreglo[i];
    }

    int menor = arreglo[0];
    for (int i = 1; i < n; i++) {
        if (arreglo[i] < menor) {
            menor = arreglo[i];
        }
    }
    cout << "El menor elemento del arreglo es: " << menor << endl;
    return 0;
}

