#include <iostream>
using namespace std;

// Estructura de un nodo
struct Nodo {
    int dato;
    Nodo *izq;
    Nodo *der;
};

// Función para crear un nuevo nodo
Nodo* crearNodo(int valor) {
    Nodo* nuevo = new Nodo();
    nuevo->dato = valor;
    nuevo->izq = NULL;
    nuevo->der = NULL;
    return nuevo;
}

// Función para imprimir en inorden (izquierda - raiz - derecha)
void inorden(Nodo* raiz) {
    if (raiz != NULL) {
        inorden(raiz->izq);          // primero lado izquierdo
        cout << raiz->dato << " ";   // luego el nodo raíz
        inorden(raiz->der);          // después lado derecho
    }
}

int main() {
    // Crear un árbol manualmente
    Nodo* raiz = crearNodo(4);
    raiz->izq = crearNodo(2);
    raiz->der = crearNodo(6);
    raiz->izq->izq = crearNodo(1);
    raiz->izq->der = crearNodo(3);
    raiz->der->izq = crearNodo(5);
    raiz->der->der = crearNodo(7);

    cout << "Recorrido inorden: ";
    inorden(raiz);

    cout << endl;
    return 0;
}

