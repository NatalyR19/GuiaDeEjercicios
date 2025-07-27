//70. Función dequeue para cola: Eliminar y retornar el elemento del frente de la cola (validar si está vacía).//
#include <iostream>
#include <string>
#include <limits>
using namespace std;

const int MAX_QUEUE_SIZE = 5;

struct Cola {
    int elementos[MAX_QUEUE_SIZE];
    int frente;
    int final;

    // Constructor//
    Cola() {
        frente = -1;
        final = -1;
        cout << "Cola inicializada con capacidad maxima de " << MAX_QUEUE_SIZE << " elementos." << endl;
    }

    bool estaVacia() const {
        return frente == -1;
    }

    bool estaLlena() const {
        return final == MAX_QUEUE_SIZE - 1;
    }

    // Agrega elemento//
    void enqueue(int valor) {
        cout << "\nIntentando agregar el elemento: " << valor << endl;
        if (estaLlena()) {
            cout << "ERROR: La cola esta llena. No se puede agregar " << valor << "." << endl;
            return;
        }
        if (estaVacia()) {
            frente = 0;
        }
        final++;
        elementos[final] = valor;
        cout << "Elemento " << valor << " agregado a la cola. Frente: " << frente << ", Final: " << final << endl;
    }


    int dequeue() {
        cout << "\nIntentando eliminar un elemento (dequeue)..." << endl;


        if (estaVacia()) {
            cout << "ERROR: La cola esta vacia. No se puede hacer dequeue." << endl;
            return numeric_limits<int>::min();
        }

        int valorQuitado = elementos[frente];

        frente++;

        if (frente > final) {
            frente = -1;
            final = -1;
            cout << "Elemento " << valorQuitado << " eliminado. La cola ahora esta vacia." << endl;
        } else {
            cout << "Elemento " << valorQuitado << " eliminado. Nuevo frente: " << frente << ", Final: " << final << endl;
        }

        return valorQuitado;
    }


    void mostrarCola() const {
        if (estaVacia()) {
            cout << "La cola esta vacia." << endl;
            return;
        }
        cout << "Contenido de la cola (Frente -> Final): [";
        for (int i = frente; i <= final; ++i) {
            cout << elementos[i];
            if (i < final) {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
};

int main() {
    Cola miCola;

    miCola.mostrarCola();

    int elementoQuitado1 = miCola.dequeue();
    cout << "Resultado del dequeue en cola vacia: " << elementoQuitado1 << endl;
    miCola.mostrarCola();
    miCola.enqueue(10);
    miCola.enqueue(20);
    miCola.enqueue(30);
    miCola.mostrarCola();

    int elementoQuitado2 = miCola.dequeue();
    cout << "Elemento quitado: " << elementoQuitado2 << endl;
    miCola.mostrarCola();

    int elementoQuitado3 = miCola.dequeue();
    cout << "Elemento quitado: " << elementoQuitado3 << endl;
    miCola.mostrarCola();
    miCola.enqueue(40);
    miCola.mostrarCola();

    int elementoQuitado4 = miCola.dequeue();
    cout << "Elemento quitado: " << elementoQuitado4 << endl;
    miCola.mostrarCola();

    int elementoQuitado5 = miCola.dequeue();
    cout << "Elemento quitado: " << elementoQuitado5 << endl;
    miCola.mostrarCola();

    int elementoQuitado6 = miCola.dequeue();
    cout << "Resultado del dequeue en cola vacia: " << elementoQuitado6 << endl;
    miCola.mostrarCola();

    return 0;
}