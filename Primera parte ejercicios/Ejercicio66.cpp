//66. Expresión balanceada: Usar la pila para verificar si paréntesis, corchetes y llaves están balanceados. //
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int MAX_PILA_CHARS = 100;

struct PilaChar {
    char elementos[MAX_PILA_CHARS];
    int top;

    // Constructor//
    PilaChar() {
        top = -1;
    }

    bool estaVacia() const {
        return top == -1;
    }

    bool estaLlena() const {
        return top == MAX_PILA_CHARS - 1;
    }

    // Agrega un elemento//
    void push(char valor) {
        if (estaLlena()) {
            cerr << "Error: Pila de caracteres llena, no se puede agregar '" << valor << "'." << endl;
            return;
        }
        top++;
        elementos[top] = valor;
    }


    char pop() {
        if (estaVacia()) {
            cerr << "Error: La pila esta vacia, no se puede hacer pop." << endl;
            return '\0';
        }
        char valor = elementos[top];
        top--;
        return valor;
    }

    char peek() const {
        if (estaVacia()) {
            cerr << "Error: La pila esta vacia, no se puede hacer peek." << endl;
            return '\0';
        }
        return elementos[top];
    }
};

bool verificarBalance(const string& expresion) {
    PilaChar pila;
    cout << "Verificando expresion: " << expresion << endl;

    for (char caracter : expresion) {
        //delimitador de apertura//
        if (caracter == '(' || caracter == '[' || caracter == '{') {
            pila.push(caracter);
            cout << "  Push: '" << caracter << "' | Pila: ";
            if (!pila.estaVacia()) { cout << pila.peek(); } else { cout << "Vacia"; } cout << endl;
        }
        //delimitador de cierre//
        else if (caracter == ')' || caracter == ']' || caracter == '}') {
            if (pila.estaVacia()) {
                cout << "  Error: Se encontro '" << caracter << "' pero la pila esta vacia. Desbalanceado." << endl;
                return false;
            }

            //Pila no vacía//
            char ultimoAbierto = pila.pop();
            cout << "  Pop: '" << ultimoAbierto << "' | Se encontro: '" << caracter << "' | Pila: ";
             if (!pila.estaVacia()) { cout << pila.peek(); } else { cout << "Vacia"; } cout << endl;

            if ((caracter == ')' && ultimoAbierto != '(') ||
                (caracter == ']' && ultimoAbierto != '[') ||
                (caracter == '}' && ultimoAbierto != '{')) {
                cout << "  Error: Los delimitadores '" << ultimoAbierto << "' y '" << caracter << "' no coinciden. Desbalanceado." << endl;
                return false;
            }
        }
    }


    if (pila.estaVacia()) {
        cout << "  Expresion completamente procesada. Pila vacia. Balanceado." << endl;
        return true;
    } else {
        cout << "  Expresion completamente procesada. Pila NO vacia. Desbalanceado (quedan delimitadores abiertos)." << endl;
        return false;
    }
}

int main() {

    string exp1 = "({[]})";
    string exp2 = "([)]";
    string exp3 = "{[}";
    string exp4 = "((()))";
    string exp5 = "{abc[123](xyz)}";
    string exp6 = "(((";
    string exp7 = "())";
    string exp8 = "";


    cout << "--- Prueba de Expresiones Balanceadas ---" << endl << endl;

    cout << "Resultado para '" << exp1 << "': " << (verificarBalance(exp1) ? "BALANCEADO" : "DESBALANCEADO") << endl << endl;
    cout << "Resultado para '" << exp2 << "': " << (verificarBalance(exp2) ? "BALANCEADO" : "DESBALANCEADO") << endl << endl;
    cout << "Resultado para '" << exp3 << "': " << (verificarBalance(exp3) ? "BALANCEADO" : "DESBALANCEADO") << endl << endl;
    cout << "Resultado para '" << exp4 << "': " << (verificarBalance(exp4) ? "BALANCEADO" : "DESBALANCEADO") << endl << endl;
    cout << "Resultado para '" << exp5 << "': " << (verificarBalance(exp5) ? "BALANCEADO" : "DESBALANCEADO") << endl << endl;
    cout << "Resultado para '" << exp6 << "': " << (verificarBalance(exp6) ? "BALANCEADO" : "DESBALANCEADO") << endl << endl;
    cout << "Resultado para '" << exp7 << "': " << (verificarBalance(exp7) ? "BALANCEADO" : "DESBALANCEADO") << endl << endl;
    cout << "Resultado para '" << exp8 << "': " << (verificarBalance(exp8) ? "BALANCEADO" : "DESBALANCEADO") << endl << endl;

    return 0;
}