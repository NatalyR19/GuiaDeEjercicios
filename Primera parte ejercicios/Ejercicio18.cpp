//18.	Mayor elemento en arreglo: Encontrar el valor máximo en un arreglo unidimensional.//
#include <iostream>
#include <limits>

int encontrarMayorElemento(int arr[], int tamano) {
    if (tamano <= 0) {
        std::cerr << "Error: El arreglo esta vacio o tiene un tamano invalido." << std::endl;
        return std::numeric_limits<int>::min();
    }

    int maximoEncontrado = arr[0];


    for (int i = 1; i < tamano; ++i) {
        if (arr[i] > maximoEncontrado) {
            maximoEncontrado = arr[i];
        }
    }

    return maximoEncontrado;
}

int main() {
    int miArreglo[] = {10, 5, 20, 99, 15, 30, 8};
    int tamanoArreglo = sizeof(miArreglo) / sizeof(miArreglo[0]);
    int elMayorNumero;

    elMayorNumero = encontrarMayorElemento(miArreglo, tamanoArreglo);


    std::cout << "El arreglo es: { ";
    for (int i = 0; i < tamanoArreglo; ++i) {
        std::cout << miArreglo[i] << (i == tamanoArreglo - 1 ? "" : ", ");
    }
    std::cout << " }" << std::endl;

    std::cout << "El numero mayor en el arreglo es: " << elMayorNumero << std::endl;

    return 0;
}