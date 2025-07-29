#include <iostream>
using namespace std;
const int MAX = 100;
class Pila {
private:
    int datos[MAX];
    int tope;
public:
    Pila() {
        tope = -1;
    }
    bool estaVacia() {
        return tope == -1;
    }
    bool estaLlena() {
        return tope == MAX - 1;
    }
    void push(int valor) {
        if (!estaLlena()) {
            tope++;
            datos[tope] = valor;
        } else {
            cout << "La pila está llena." << endl;
        }
    }
    int pop() {
        if (!estaVacia()) {
            int valor = datos[tope];
            tope--;
            return valor;
        } else {
            cout << "La pila está vacía. No se puede eliminar." << endl;
            return -1;
        }
    }
    void mostrar() {
        if (estaVacia()) {
            cout << "La pila está vacía." << endl;
        } else {
            cout << "Elementos en la pila:" << endl;
            for (int i = tope; i >= 0; i--) {
                cout << datos[i] << endl;
            }
        }
    }
};
int main() {
    Pila miPila;
    miPila.push(10);
    miPila.push(20);
    miPila.push(30);
    miPila.mostrar();
    cout << "Elemento eliminado: " << miPila.pop() << endl;
    miPila.mostrar();
    return 0;
}

