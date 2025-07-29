#include <iostream>
using namespace std;

int main() {
    const int tam = 6;
    int arreglo[tam] = {45, 12, 67, 34, 89, 23};

    for (int i = 0; i < tam - 1; i++) {
        int menor = i;
        for (int j = i + 1; j < tam; j++) {
            if (arreglo[j] < arreglo[menor]) {
                menor = j;
            }
        }
        int temp = arreglo[i];
        arreglo[i] = arreglo[menor];
        arreglo[menor] = temp;
    }

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < tam; i++) {
        cout << arreglo[i] << " ";
    }

    cout << endl;
    return 0;
}
