#include <iostream>
using namespace std;

int main() {
    int arreglo[] = { 1, 2, 3, 4, 5 };
    int n = 5;

    cout << "Arreglo original: ";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }

    cout << "\nArreglo invertido: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << arreglo[i] << " ";
    }

    return 0;
}