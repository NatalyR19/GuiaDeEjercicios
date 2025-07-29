#include <iostream>
#include <cctype>
using namespace std;

bool esConsonante(char c) {
    c = tolower(c);
    return isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u';
}

int main() {
    string cadena;
    int contador = 0;

    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    for (char c : cadena) {
        if (esConsonante(c)) {
            contador++;
        }
    }

    cout << "Cantidad de consonantes: " << contador << endl;

    return 0;
}
