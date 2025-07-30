#include <iostream>
using namespace std;

const int MAX = 5;  // Tamaño máximo de la cola
int cola[MAX];      // Arreglo para almacenar elementos
int frente = 0;     // Índice del primer elemento
int final = -1;     // Índice del último elemento
int cantidad = 0;   // Contador de elementos

bool estaLlena() {
    return (cantidad == MAX);
}

int main() {

    cout << "Cola llena? " << (estaLlena() ? "Sí" : "No") << endl;

    for (int i = 1; i <= MAX; i++) {
        final = (final + 1) % MAX;
        cola[final] = i * 10;
        cantidad++;
    }

    cout << "Cola llena? " << (estaLlena() ? "Si" : "No") << endl; 

        return 0;
}
