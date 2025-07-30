#include <iostream>
using namespace std;

// Estructura de un nodo del ABB
struct Nodo {
    int dato;
    Nodo* izquierda;
    Nodo* derecha;

    Nodo(int valor) : dato(valor), izquierda(nullptr), derecha(nullptr) {}
};

// Función para insertar un nodo en el ABB
Nodo* insertar(Nodo* raiz, int valor) {
    if (raiz == nullptr) {
        return new Nodo(valor);
    }

    if (valor < raiz->dato) {
        raiz->izquierda = insertar(raiz->izquierda, valor);
    }
    else if (valor > raiz->dato) {
        raiz->derecha = insertar(raiz->derecha, valor);
    }

    return raiz;
}

// Función para recorrido inorden (izquierda, raíz, derecha)
void inorden(Nodo* raiz) {
    if (raiz == nullptr) return;

    inorden(raiz->izquierda);
    cout << raiz->dato << " ";
    inorden(raiz->derecha);
}

// Función para recorrido postorden (izquierda, derecha, raíz)
void postorden(Nodo* raiz) {
    if (raiz == nullptr) return;

    postorden(raiz->izquierda);
    postorden(raiz->derecha);
    cout << raiz->dato << " ";
}

int main() {
    Nodo* raiz = nullptr;

    // Insertar nodos en el ABB
    raiz = insertar(raiz, 50);
    insertar(raiz, 30);
    insertar(raiz, 70);
    insertar(raiz, 20);
    insertar(raiz, 40);
    insertar(raiz, 60);
    insertar(raiz, 80);

    // Mostrar recorridos
    cout << "Recorrido inorden del ABB (ordenado): ";
    inorden(raiz);  // Salida esperada: 20 30 40 50 60 70 80
    cout << endl;

    cout << "Recorrido postorden del ABB: ";
    postorden(raiz);  // Salida esperada: 20 40 30 60 80 70 50
    cout << endl;

    return 0;
}

