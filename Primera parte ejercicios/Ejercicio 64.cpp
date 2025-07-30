#include <iostream>
#include <stack>
using namespace std;

bool estaVacia(stack<int> pila) {
    return pila.empty();  
}

int main() {
    stack<int> pilaEjemplo;

    // Verificar pila recién creada
    cout << "Pila vacia? " << (estaVacia(pilaEjemplo) ? "Si" : "No") << endl;

    // Agregar elemento y volver a verificar
    pilaEjemplo.push(10);
    cout << "Pila vacia? " << (estaVacia(pilaEjemplo) ? "Si" : "No") << endl;

    return 0;
}
