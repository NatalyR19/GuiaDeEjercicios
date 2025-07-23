//33. Ordenar descendente (Selección): Método de selección para ordenar de mayor a menor //
#include <iostream>
#include <vector>
#include <algorithm>


void imprimirVector(const std::vector<int>& arr) {
    std::cout << "{ ";
    for (size_t i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << (i == arr.size() - 1 ? "" : ", ");
    }
    std::cout << " }" << std::endl;
}

void ordenarPorSeleccionDescendente(std::vector<int>& arr) {
    int n = arr.size(); // Obtener el tamaño del vector

    for (int i = 0; i < n - 1; ++i) {
        int indiceDelMaximo = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] > arr[indiceDelMaximo]) {
                indiceDelMaximo = j;
            }
        }


        if (indiceDelMaximo != i) {
            std::swap(arr[i], arr[indiceDelMaximo]);
        }
    }
}

int main() {
    // lista de números //
    std::vector<int> numeros = {64, 25, 12, 22, 11, 88, 7, 33};

    std::cout << "Lista original: ";
    imprimirVector(numeros);


    ordenarPorSeleccionDescendente(numeros);

    std::cout << "Lista ordenada descendente: ";
    imprimirVector(numeros);


    return 0;
}