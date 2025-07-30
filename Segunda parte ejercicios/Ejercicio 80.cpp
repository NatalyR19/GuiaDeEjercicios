#include <iostream>
using namespace std;

// Estructura de un nodo del árbol binario
struct Nodo {
    int dato;
    Nodo* izquierda;
    Nodo* derecha;

    Nodo(int valor) : dato(valor), izquierda(nullptr), derecha(nullptr) {}
};

// Función para recorrido postorden
void postorden(Nodo* raiz) {
    if (raiz == nullptr) return;

    postorden(raiz->izquierda);  // Recorre subárbol izquierdo
    postorden(raiz->derecha);    // Recorre subárbol derecho
    cout << raiz->dato << " ";   // Imprime la raíz
}

int main() {
    // Construyendo un árbol binario de ejemplo
    Nodo* raiz = new Nodo(10);
    raiz->izquierda = new Nodo(5);
    raiz->derecha = new Nodo(20);
    raiz->izquierda->izquierda = new Nodo(3);
    raiz->izquierda->derecha = new Nodo(8);
    raiz->derecha->derecha = new Nodo(30);

    cout << "Recorrido postorden: ";
    postorden(raiz);  // Salida esperada: 3 8 5 30 20 10

    // Liberar memoria (opcional, pero recomendado)
    delete raiz->izquierda->izquierda;
    delete raiz->izquierda->derecha;
    delete raiz->derecha->derecha;
    delete raiz->izquierda;
    delete raiz->derecha;
    delete raiz;

    return 0;
}
