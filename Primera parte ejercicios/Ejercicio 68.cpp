#include <iostream>
using namespace std;

const int MAX = 5;
int cola[MAX];
int frente = 0;
int final = -1;
int cantidad = 0;

bool estaVacia() {
    return cantidad == 0;
}


bool estaLlena() {
    return cantidad == MAX;
}
void encolar(int valor) {
    if (estaLlena()) {
        cout << "Cola llena. No se puede encolar.";
        return;
    }
    final = (final + 1) % MAX;
    cola[final] = valor;
    cantidad++;
}


void desencolar() {
    if (estaVacia()) {
        cout << "Cola vacía. No se puede desencolar.";
        return;
    }
    frente = (frente + 1) % MAX;
    cantidad--;
}
void mostrar() {
    if (estaVacia()) {
        cout << "La cola está vacía.";
        return;
    }
    cout << "Elementos en la cola: ";
    for (int i = 0; i < cantidad; i++) {
        int indice = (frente + i) % MAX;
        cout << cola[indice] << " ";
    }
    cout << endl;
}
int main() {

    encolar(10);
    encolar(20);
    encolar(30);
    mostrar();

    desencolar();
    mostrar();

    encolar(40);
    encolar(50);
    encolar(60);
    mostrar();

    encolar(70);

    return 0;
}
