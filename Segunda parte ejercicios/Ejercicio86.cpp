//86. Eliminar nodo en ABB: Función que elimine un nodo manteniendo la estructura del ABB.//
#include <iostream>
using namespace std;

// Estructura de un nodo
struct Nodo {
    int dato;
    Nodo* izquierda;
    Nodo* derecha;
    Nodo(int valor) : dato(valor), izquierda(nullptr), derecha(nullptr) {}
};

// Función para encontrar el nodo con el valor mínimo (sucesor)
Nodo* encontrarMinimo(Nodo* raiz) {
    while (raiz->izquierda != nullptr) {
        raiz = raiz->izquierda;
    }
    return raiz;
}

// Función para eliminar un nodo
Nodo* eliminarNodo(Nodo* raiz, int valor) {
    if (raiz == nullptr) return raiz; // Árbol vacío

    // Búsqueda del nodo a eliminar
    if (valor < raiz->dato) {
        raiz->izquierda = eliminarNodo(raiz->izquierda, valor);
    } else if (valor > raiz->dato) {
        raiz->derecha = eliminarNodo(raiz->derecha, valor);
    } else {
        // Caso 1: Nodo sin hijos o con un hijo
        if (raiz->izquierda == nullptr) {
            Nodo* temp = raiz->derecha;
            delete raiz;
            return temp;
        } else if (raiz->derecha == nullptr) {
            Nodo* temp = raiz->izquierda;
            delete raiz;
            return temp;
        }
        // Caso 2: Nodo con dos hijos (usamos el sucesor)
        Nodo* temp = encontrarMinimo(raiz->derecha);
        raiz->dato = temp->dato; // Copiamos el dato del sucesor
        raiz->derecha = eliminarNodo(raiz->derecha, temp->dato); // Eliminamos el sucesor
    }
    return raiz;
}

// Función auxiliar para imprimir el árbol (inorden)
void inorden(Nodo* raiz) {
    if (raiz == nullptr) return;
    inorden(raiz->izquierda);
    cout << raiz->dato << " ";
    inorden(raiz->derecha);
}

// Función principal
int main() {
    Nodo* raiz = new Nodo(50);
    raiz->izquierda = new Nodo(30);
    raiz->derecha = new Nodo(70);
    raiz->izquierda->izquierda = new Nodo(20);
    raiz->izquierda->derecha = new Nodo(40);
    raiz->derecha->izquierda = new Nodo(60);
    raiz->derecha->derecha = new Nodo(80);

    cout << "Arbol antes de eliminar (inorden): ";
    inorden(raiz); // 20 30 40 50 60 70 80

    raiz = eliminarNodo(raiz, 50); // Eliminamos la raíz (caso con dos hijos)

    cout << "\nArbol despues de eliminar 50 (inorden): ";
    inorden(raiz); // 20 30 40 60 70 80

    return 0;
}