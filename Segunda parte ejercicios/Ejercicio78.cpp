//Recorrido preorden: Función que imprima los nodos en orden raíz-izquierda-derecha.//
#include <iostream>
using namespace std;

// Definición de la estructura de un nodo
struct Nodo {
    int dato;         // Valor almacenado en el nodo
    Nodo* izquierda; // Puntero al hijo izquierdo
    Nodo* derecha;   // Puntero al hijo derecho

    // Constructor para facilitar la creación de nodos
    Nodo(int valor) : dato(valor), izquierda(nullptr), derecha(nullptr) {}
};

// Función para recorrido en preorden (Raíz → Izquierda → Derecha)
void preorden(Nodo* raiz) {
    if (raiz == nullptr) { // Caso base: si el nodo es nulo, termina la recursión
        return;
    }

    // Paso 1: Procesar la raíz (imprimir el valor)
    cout << raiz->dato << " ";

    // Paso 2: Recorrer el subárbol izquierdo
    preorden(raiz->izquierda);

    // Paso 3: Recorrer el subárbol derecho
    preorden(raiz->derecha);
}

// Función principal para probar el recorrido
int main() {
    // Creación de un árbol de ejemplo
    Nodo* raiz = new Nodo(10);
    raiz->izquierda = new Nodo(5);
    raiz->derecha = new Nodo(20);
    raiz->izquierda->izquierda = new Nodo(3);
    raiz->izquierda->derecha = new Nodo(7);
    raiz->derecha->derecha = new Nodo(25);

    cout << "Recorrido en Preorden: ";
    preorden(raiz); // Salida esperada: 10 5 3 7 20 25

    return 0;
}