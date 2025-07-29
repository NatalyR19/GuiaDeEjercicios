#include <iostream>
using namespace std;
const int MAX = 100;
class Cola {
private:
    int datos[MAX];
    int frente;
    int final;

public:
    Cola() {
        frente = 0;
        final = -1;
    }
    bool estaVacia() {
        return frente > final;
    }
    void encolar(int valor) {
        if (final < MAX - 1) {
            final++;
            datos[final] = valor;
        } else {
            cout << "La cola esta llena." << endl;
        }
    }
    void mostrar() {
        if (estaVacia()) {
            cout << "La cola esta vacia." << endl;
        } else {
            cout << "Elementos en la cola:" << endl;
            for (int i = frente; i <= final; i++) {
                cout << datos[i] << " ";
            }
            cout << endl;
        }
    }
};
int main() {
    Cola miCola;
    if (miCola.estaVacia()) {
        cout << "La cola esta vacia al inicio." << endl;
    }
    miCola.encolar(5);
    miCola.encolar(10);
    miCola.mostrar();
    if (miCola.estaVacia()) {
        cout << "La cola esta vacia." << endl;
    } else {
        cout << "La cola NO esta vacia." << endl;
    }
    return 0;
}

