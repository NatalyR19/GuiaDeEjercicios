//74. Imprimir cola en orden inverso: Usar una pila auxiliar para invertir y mostrar los elementos de la cola. //
#include <iostream>
#include <string>
#include <limits>

using namespace std;

const int MAX_SIZE_PILA = 100;

struct Pila {
    int elementos[MAX_SIZE_PILA];
    int top;

    Pila() : top(-1) {}

    bool estaVacia() const {
        return top == -1;
    }

    bool estaLlena() const {
        return top == MAX_SIZE_PILA - 1;
    }

    void push(int valor) {
        if (estaLlena()) {
            cout << "Pila auxiliar llena, no se puede agregar " << valor << endl;
            return;
        }
        elementos[++top] = valor;
    }

    int pop() {
        if (estaVacia()) {
            cout << "Pila auxiliar vacia, no se puede hacer pop." << endl;
            return numeric_limits<int>::min();
        }
        return elementos[top--];
    }
};

const int MAX_SIZE_COLA = 100;

struct Cola {
    int elementos[MAX_SIZE_COLA];
    int frente;
    int final;

    Cola() : frente(-1), final(-1) {}

    bool estaVacia() const {
        return frente == -1;
    }

    bool estaLlena() const {
        return final == MAX_SIZE_COLA - 1;
    }

    void enqueue(int valor) {
        if (estaLlena()) {
            cout << "Cola llena, no se puede agregar " << valor << endl;
            return;
        }
        if (estaVacia()) {
            frente = 0;
        }
        elementos[++final] = valor;
    }

    int dequeue() {
        if (estaVacia()) {
            // cout << "Cola vacia, no se puede hacer dequeue." << endl;
            return numeric_limits<int>::min(); // Valor de error
        }
        int valor = elementos[frente++];
        if (frente > final) {
            frente = -1;
            final = -1;
        }
        return valor;
    }

    void mostrarCola() const {
        if (estaVacia()) {
            cout << "La cola esta vacia." << endl;
            return;
        }
        cout << "Cola (Frente -> Final): [";
        for (int i = frente; i <= final; ++i) {
            cout << elementos[i];
            if (i < final) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
};

void imprimirColaInversa(Cola& colaOriginal) {
    cout << "\n--- Imprimiendo Cola en Orden Inverso ---" << endl;
    cout << "Estado inicial de la cola: ";
    colaOriginal.mostrarCola();

    if (colaOriginal.estaVacia()) {
        cout << "La cola esta vacia, no hay nada que invertir." << endl;
        return;
    }

    Pila pilaAux; //auxiliar//

    cout << "\n1. Transfiriendo elementos de la cola a la pila auxiliar:" << endl;
    while (!colaOriginal.estaVacia()) {
        int elemento = colaOriginal.dequeue(); // Sacar de la cola
        pilaAux.push(elemento);                // Poner en la pila
        cout << "  Desencolado: " << elemento << " -> Apilado: " << elemento << endl;
    }
    cout << "Cola original despues de la transferencia: "; colaOriginal.mostrarCola();
    cout << "Pila auxiliar despues de la transferencia (Top -> Fondo): ";
    cout << "\n2. Imprimiendo elementos en orden inverso y reconstruyendo la cola original:" << endl;
    cout << "Elementos en orden inverso: [";
    bool primerElemento = true;
    while (!pilaAux.estaVacia()) {
        int elemento = pilaAux.pop();
        if (!primerElemento) {
            cout << ", ";
        }
        cout << elemento;
        primerElemento = false;
        colaOriginal.enqueue(elemento);
        cout << " (Desapilado: " << elemento << " -> Encolado de nuevo)" << endl;
    }
    cout << "]" << endl;

    cout << "\n--- Proceso Completado ---" << endl;
    cout << "Cola original restaurada: ";
    colaOriginal.mostrarCola();
}

int main() {
    Cola miCola;
    miCola.enqueue(10);
    miCola.enqueue(20);
    miCola.enqueue(30);
    miCola.enqueue(40);
    miCola.enqueue(50);
    miCola.mostrarCola();

    imprimirColaInversa(miCola);

    cout << "\nVerificacion final: La cola original deberia estar igual que al principio." << endl;
    miCola.mostrarCola(); // Debería mostrar 10, 20, 30, 40, 50

    cout << "\n--- Prueba con cola vacia ---" << endl;
    Cola colaVacia;
    imprimirColaInversa(colaVacia);


    return 0;
}