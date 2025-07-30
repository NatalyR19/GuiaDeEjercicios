#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int suma = 0;

    cout << "Ingrese la cantidad del arreglo: ";
    cin >> n;
    if (n <= 0) {
        cout << "Error: cantidad inválida." << endl;
        return 1;
    }

    vector<int> arreglo(n);

    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo[i];
        suma += arreglo[i];
    }

    cout << "La suma de los elementos del arreglo es: " << suma << endl;

    return 0;
}

