#include <iostream>
using namespace std;

const int MAX_NODOS = 100;

struct Nodo {
    int dato;
    int izquierdo;
    int derecho;
};

Nodo arbol[MAX_NODOS];
int totalNodos = 0;

int crearNodo(int dato) {
    if (totalNodos >= MAX_NODOS) {
        cout << "Error: se alcanzo el limite de nodos." << endl;
        return -1;
    }
    arbol[totalNodos] = { dato, -1, -1 };
    return totalNodos++;
}

void inorden(int indice) {
    if (indice == -1) return;

    inorden(arbol[indice].izquierdo);
    cout << arbol[indice].dato << " ";
    inorden(arbol[indice].derecho);
}

int main() {
    // Crear nodos
    int raiz = crearNodo(10);
    int nodoIzq = crearNodo(5);
    int nodoDer = crearNodo(15);
    int nodoIzqIzq = crearNodo(3);
    int nodoIzqDer = crearNodo(7);

    // Conectar nodos
    arbol[raiz].izquierdo = nodoIzq;
    arbol[raiz].derecho = nodoDer;
    arbol[nodoIzq].izquierdo = nodoIzqIzq;
    arbol[nodoIzq].derecho = nodoIzqDer;

    // Mostrar recorrido inorden
    cout << "Recorrido inorden: ";
    inorden(raiz);
    cout << endl;

    return 0;
}
