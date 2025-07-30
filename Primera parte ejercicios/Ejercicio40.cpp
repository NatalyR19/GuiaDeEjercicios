#include <iostream>
#include <string> 
using namespace std;

int main() {
    string cadena;
    int contador = 0;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena);

    for (int i = 0; i < cadena.length(); i++) {
        char c = tolower(cadena[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }
    cout << "Total de vocales: " << contador << endl;
    return 0;
}
