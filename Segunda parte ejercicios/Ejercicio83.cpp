#include <iostream>
using namespace std;
struct Nodo {
    int dato;
    Nodo *izquierda;
    Nodo *derecha;
    Nodo(int valor) {
        dato = valor;
        izquierda = NULL;
        derecha = NULL;
    }
};
Nodo* insertar(Nodo* raiz, int valor) {
    if (raiz == NULL) {
        return new Nodo(valor);
    }
    if (valor < raiz->dato) {
        raiz->izquierda = insertar(raiz->izquierda, valor);
    } else {
        raiz->derecha = insertar(raiz->derecha, valor);
    }
    return raiz;
}
void inorden(Nodo* raiz) {
    if (raiz != NULL) {
        inorden(raiz->izquierda);
        cout << raiz->dato << " ";
        inorden(raiz->derecha);
    }
}
int main() {
    Nodo* arbol = NULL;
    int n, valor;
    cout << "Cuantos numeros desea insertar? ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Ingrese un numero: ";
        cin >> valor;
        arbol = insertar(arbol, valor);
    }
    cout << "\nRecorrido Inorden: ";
    inorden(arbol);
    cout << endl;

    return 0;
}

