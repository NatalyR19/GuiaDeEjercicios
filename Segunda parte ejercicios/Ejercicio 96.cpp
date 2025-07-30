#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string texto;
    cout << "Ingrese una cadena de texto: ";
    getline(cin, texto);

    map<char, int> frecuencia;

    for (char c : texto) {
        frecuencia[c]++;
    }

    cout << "\nFrecuencia de caracteres:\n";
    for (const auto& par : frecuencia) {
        cout << "'" << par.first << "' : " << par.second << endl;
    }

    return 0;
}
