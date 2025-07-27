//82. Contar nodos en árbol: Función que retorne el número total de nodos.//
#include <iostream>
using namespace std;

// Definición de la estructura de un nodo
struct Nodo {
    int dato;         // Valor almacenado en el nodo
    Nodo* izquierda;  // Puntero al hijo izquierdo
    Nodo* derecha;    // Puntero al hijo derecho

    // Constructor para facilitar la creación de nodos
    Nodo(int valor) : dato(valor), izquierda(nullptr), derecha(nullptr) {}
};

// Función para contar el total de nodos en el árbol (recursiva)
int contarNodos(Nodo* raiz) {
    if (raiz == nullptr) { // Caso base: árbol vacío
        return 0;
    }
    // Suma: 1 (nodo actual) + nodos izquierda + nodos derecha
    return 1 + contarNodos(raiz->izquierda) + contarNodos(raiz->derecha);
}

// Función principal para probar el conteo de nodos
int main() {
    // Creación de un árbol de ejemplo
    Nodo* raiz = new Nodo(10);
    raiz->izquierda = new Nodo(5);
    raiz->derecha = new Nodo(20);
    raiz->izquierda->izquierda = new Nodo(3);
    raiz->izquierda->derecha = new Nodo(7);
    raiz->derecha->derecha = new Nodo(25);

    cout << "Total de nodos en el arbol: " << contarNodos(raiz) << endl; // Salida esperada: 6

    return 0;
}