//62. Función push para pila: Agregar un elemento a la pila (validar si está llena).//
#include <iostream>
#include <string>

using namespace std;

//Estructura de la Pila//
const int MAX_SIZE = 5;

struct Pila {
    int elementos[MAX_SIZE];
    int top;

    // Constructor//
    Pila() {
        top = -1;
        cout << "Pila inicializada con capacidad maxima de " << MAX_SIZE << " elementos." << endl;
    }


    bool estaLlena() const {
        return top == MAX_SIZE - 1;
    }


    bool estaVacia() const {
        return top == -1;
    }

    void push(int valor) {
        cout << "\nIntentando agregar el elemento: " << valor << endl;

        if (estaLlena()) {
            cout << "ERROR: La pila esta llena. No se puede agregar " << valor << "." << endl;
            return;
        }

        top++;
        elementos[top] = valor;

        cout << "Elemento " << valor << " agregado a la pila. Top actual: " << top << endl;
    }


    void mostrarPila() const {
        if (estaVacia()) {
            cout << "La pila esta vacia." << endl;
            return;
        }

        cout << "Contenido de la pila (del top al fondo):" << endl;
        for (int i = top; i >= 0; --i) {
            cout << "| " << elementos[i] << " |" << endl;
            if (i == top) {
                cout << "-----(Top)-----" << endl;
            } else if (i == 0) {
                cout << "----(Fondo)----" << endl;
            }
        }
    }
};

int main() {
    Pila pila;

    pila.mostrarPila();


    pila.push(10);
    pila.push(20);
    pila.push(30);
    pila.push(40);
    pila.push(50);

    pila.mostrarPila(); // Mostrar la pila llena//

    pila.push(60);

    pila.mostrarPila();


    return 0;
}