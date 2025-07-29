#include <iostream>
using namespace std;

const int MAX = 5;

struct Cola {
    int datos[MAX];
    int frente = 0;
    int final = -1;
};

void enqueue(Cola &c, int valor) {
    if (c.final < MAX - 1) {
        c.datos[++c.final] = valor;
    }
}

void dequeue(Cola &c) {
    if (c.frente <= c.final) {
        cout << "Atendiendo a persona: " << c.datos[c.frente++] << endl;
    } else {
        cout << "No hay personas en espera." << endl;
    }
}

int main() {
    Cola fila;

    enqueue(fila, 101);
    enqueue(fila, 102);
    enqueue(fila, 103);

    dequeue(fila);
    dequeue(fila);
    dequeue(fila);
    dequeue(fila);

    return 0;
}
