#include <iostream>
#include <stack>
#include <cctype>
using namespace std;
int precedencia(char op) {
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}
string infijoAPostfijo(string infijo) {
    stack<char> pila;
    string postfijo = "";

    for (int i = 0; i < infijo.length(); i++) {
        char c = infijo[i];

        if (isalnum(c)) {
            postfijo += c;
        }
        else if (c == '(') {
            pila.push(c);
        }
        else if (c == ')') {
            while (!pila.empty() && pila.top() != '(') {
                postfijo += pila.top();
                pila.pop();
            }
            if (!pila.empty()) pila.pop();
        }
        else {
            while (!pila.empty() && precedencia(pila.top()) >= precedencia(c)) {
                postfijo += pila.top();
                pila.pop();
            }
            pila.push(c);
        }
    }
    while (!pila.empty()) {
        postfijo += pila.top();
        pila.pop();
    }

    return postfijo;
}
int main() {
    string expresion;
    cout << "Ingrese la expresion infija (sin espacios): ";
    cin >> expresion;
    string resultado = infijoAPostfijo(expresion);
    cout << "Expresion en postfijo: " << resultado << endl;
    return 0;
}

