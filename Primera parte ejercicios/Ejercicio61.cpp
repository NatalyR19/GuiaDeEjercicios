#include <iostream>
using namespace std;

const int MAX = 10;
struct Pila {
    int datos[MAX];
    int tope = -1;
};

int main() {
    Pila pila;
    pila.datos[++pila.tope] = 5;
    pila.datos[++pila.tope] = 10;
    pila.datos[++pila.tope] = 20;

    cout << "Elementos en la pila:\n";
    for (int i = pila.tope; i >= 0; i--) {
        cout << pila.datos[i] << endl;
    }

    return 0;
}
