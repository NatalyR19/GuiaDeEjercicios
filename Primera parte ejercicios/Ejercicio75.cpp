#include <iostream>
using namespace std;
const int MAX = 5;
class ColaCircular {
private:
    int datos[MAX];
    int frente;
    int final;
    int contador;
public:
    ColaCircular() {
        frente = 0;
        final = -1;
        contador = 0;
    }
    bool estaVacia() {
        return contador == 0;
    }
    bool estaLlena() {
        return contador == MAX;
    }
    void encolar(int valor) {
        if (!estaLlena()) {
            final = (final + 1) % MAX;
            datos[final] = valor;
            contador++;
        } else {
            cout << "La cola está llena." << endl;
        }
    }
    void desencolar() {
        if (!estaVacia()) {
            frente = (frente + 1) % MAX;
            contador--;
        } else {
            cout << "La cola está vacía." << endl;
        }
    }
    void mostrar() {
        if (estaVacia()) {
            cout << "La cola está vacía." << endl;
        } else {
            cout << "Elementos en la cola circular:" << endl;
            int i = frente;
            for (int c = 0; c < contador; c++) {
                cout << datos[i] << " ";
                i = (i + 1) % MAX;
            }
            cout << endl;
        }
    }
};
int main() {
    ColaCircular cola;
    cola.encolar(10);
    cola.encolar(20);
    cola.encolar(30);
    cola.encolar(40);
    cola.encolar(50); // aquí se llena
    cola.mostrar();
    cola.desencolar();
    cola.desencolar();
    cola.mostrar();
    cola.encolar(60);
    cola.encolar(70); // se reutilizan espacios
    cola.mostrar();
    return 0;
}

