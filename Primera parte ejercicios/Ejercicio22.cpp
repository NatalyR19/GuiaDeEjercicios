//22.	Frecuencia de un elemento: Contar cuántas veces aparece un valor en el arreglo. //
#include <iostream>
using namespace std;

int contarFrecuencia(int arr[], int tamano, int valorBuscado) {

    int contador = 0;

    for (int i = 0; i < tamano; ++i) {
        if (arr[i] == valorBuscado) {
            contador++;
        }
    }

    return contador;
}

int main() {

    int arreglo[] = {5, 10, 3, 5, 8, 10, 5, 10};
    int tamanoArreglo = sizeof(arreglo) / sizeof(arreglo[0]);
    int valorACoincidir = 5;
    int valorACoincidir2 = 10;
    int valorACoincidir3 = 3;
    int valorACoincidir4 = 8;
    int frecuenciaEncontrada;


    cout << "El arreglo es: { ";
    for (int i = 0; i < tamanoArreglo; ++i) {
        std::cout << arreglo[i] << (i == tamanoArreglo - 1 ? "" : ", ");
    }
    cout << " }" << std::endl;

    // resultados //
    frecuenciaEncontrada = contarFrecuencia(arreglo, tamanoArreglo, valorACoincidir);
    cout << "El valor " << valorACoincidir << " aparece "
              << frecuenciaEncontrada << " veces en el arreglo." << endl;

    frecuenciaEncontrada = contarFrecuencia(arreglo, tamanoArreglo, valorACoincidir2);
    cout << "El valor " << valorACoincidir2 << " aparece "
              << frecuenciaEncontrada << " veces en el arreglo." << endl;

    frecuenciaEncontrada = contarFrecuencia(arreglo, tamanoArreglo, valorACoincidir3);
    cout << "El valor " << valorACoincidir3 << " aparece "
              << frecuenciaEncontrada << " veces en el arreglo." << endl;

    frecuenciaEncontrada = contarFrecuencia(arreglo, tamanoArreglo, valorACoincidir4);
    cout << "El valor " << valorACoincidir4 << " aparece "
              << frecuenciaEncontrada << " veces en el arreglo." << endl;

return 0;
}
