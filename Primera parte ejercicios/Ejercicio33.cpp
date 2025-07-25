//33. Ordenar descendente (Selección): Método de selección para ordenar de mayor a menor //
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void imprimirVector(const vector<int>& arr) {
    cout << "{ ";
    for (size_t i = 0; i < arr.size(); ++i) {
        cout << arr[i] << (i == arr.size() - 1 ? "" : ", ");
    }
    cout << " }" << endl;
}

void ordenarPorSeleccionDescendente(vector<int>& arr) {
    int n = arr.size(); // Obtener el tamaño del vector

    for (int i = 0; i < n - 1; ++i) {
        int indiceDelMaximo = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[indiceDelMaximo]) {
                indiceDelMaximo = j;
            }
        }


        if (indiceDelMaximo != i) {
            swap(arr[i], arr[indiceDelMaximo]);
        }
    }
}

int main() {
    // lista de números //
    vector<int> numeros = {64, 25, 12, 22, 11, 88, 7, 33};

    cout << "Lista original: ";
    imprimirVector(numeros);


    ordenarPorSeleccionDescendente(numeros);

    cout << "Lista ordenada descendente: ";
    imprimirVector(numeros);


    return 0;
}
