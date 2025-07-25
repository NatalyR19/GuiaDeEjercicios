//18.	Mayor elemento en arreglo: Encontrar el valor máximo en un arreglo unidimensional.//
#include <iostream>
#include <limits>
using namespace std;

int encontrarMayorElemento(int arr[], int tamano) {
    if (tamano <= 0) {
        cerr << "Error: El arreglo esta vacio o tiene un tamano invalido." << endl;
        return numeric_limits<int>::min();
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


    cout << "El arreglo es: { ";
    for (int i = 0; i < tamanoArreglo; ++i) {
        cout << miArreglo[i] << (i == tamanoArreglo - 1 ? "" : ", ");
    }
    cout << " }" << endl;

    cout << "El numero mayor en el arreglo es: " << elMayorNumero << endl;

    return 0;
}
