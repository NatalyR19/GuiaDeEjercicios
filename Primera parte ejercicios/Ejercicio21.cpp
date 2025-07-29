#include <iostream>
using namespace std;

int main() {
    const int tam = 6;
    int arreglo[tam], buscar;
    bool encontrado = false;

    cout << "Ingrese " << tam << " números enteros:\n";
    for (int i = 0; i < tam; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> arreglo[i];
    }

    cout << "Ingrese el número a buscar: ";
    cin >> buscar;

    for (int i = 0; i < tam; i++) {
        if (arreglo[i] == buscar) {
            cout << "Número encontrado en la posición " << i << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Número no encontrado en el arreglo." << endl;
    }

    return 0;
}
