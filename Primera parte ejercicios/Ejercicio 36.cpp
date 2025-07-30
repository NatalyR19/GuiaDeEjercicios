#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Ingrese cantidad de numeros: ";
    cin >> n;

    vector<int> arreglo(n);

    cout << "Ingrese " << n << " numeros:\n";
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }

    for (int i = 1; i < n; i++) {
        int actual = arreglo[i];
        int j = i - 1;
        while (j >= 0 && arreglo[j] < actual) {
            arreglo[j + 1] = arreglo[j];
            j--;
        }
        arreglo[j + 1] = actual;
    }

    cout << "Orden descendente:\n";
    for (int i = 0; i < n; i++) {
        cout << arreglo[i] << " ";
    }

    cout << endl;
    return 0;
}
