#include <iostream>
#include <algorithm>
#include <cctype> // Para tolower
using namespace std;

bool esPalindromo(string cadena) {
    // Normalizar la cadena: eliminar espacios y convertir a minúsculas
    string copia;
    for (char c : cadena) {
        if (isalpha(c)) { // Solo considerar caracteres alfabéticos
            copia += tolower(c);
        }
    }

    // Invertir la cadena normalizada
    string copiaInvertida = copia;
    reverse(copiaInvertida.begin(), copiaInvertida.end());

    // Comparar la cadena normalizada con su versión invertida
    return copia == copiaInvertida;
}

int main() {
    string cadena;
    cout << "Ingrese una palabra o frase: ";
    getline(cin, cadena); // Permitir espacios en la entrada

    if (esPalindromo(cadena)) {
        cout << "La cadena es un palíndromo." << endl;
    } else {
        cout << "La cadena no es un palíndromo." << endl;
    }

    return 0;
}
