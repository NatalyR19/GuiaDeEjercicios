#include <iostream>
using namespace std;

int main() {
    const int tam = 8;
    int arreglo[tam] = {3, 8, 15, 21, 34, 55, 68, 90};
    int buscar;

    cout << "Ingrese el número que desea buscar: ";
    cin >> buscar;

    int inicio = 0, fin = tam - 1, medio;
    bool encontrado = false;

    while (inicio <= fin) {
        medio = (inicio + fin) / 2;

        if (arreglo[medio] == buscar) {
            encontrado = true;
            break;
        } else if (buscar < arreglo[medio]) {
            fin = medio - 1;
        } else {
            inicio = medio + 1;
        }
    }

    if (encontrado) {
        cout << "Número encontrado en la posición " << medio << endl;
    } else {
        cout << "Número no encontrado en el arreglo." << endl;
    }

    return 0;
}
