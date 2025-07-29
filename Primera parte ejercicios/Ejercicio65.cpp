#include <iostream>
using namespace std;

const int MAX = 5;

struct Pila {
    int datos[MAX];
    int tope = -1;
};

bool pilaLlena(Pila p) {
    return p.tope == MAX - 1;
}

int main() {
    Pila pila;
    pila.tope = 4;

    if (pilaLlena(pila)) {
        cout << "La pila está llena." << endl;
    } else {
        cout << "La pila no está llena." << endl;
    }

    return 0;
}
