#include <iostream>
#include <string>
using namespace std;

string reemplazarSubcadena(string texto, string subvieja, string subnueva) {
    size_t pos = texto.find(subvieja);

    while (pos != string::npos) {
        texto.replace(pos, subvieja.length(), subnueva);
        pos = texto.find(subvieja, pos + subnueva.length());
    }

    return texto;
}
int main() {
    string texto, subvieja, subnueva;

    cout << "Ingrese texto principal: ";
    getline(cin, texto);

    cout << "Subcadena a reemplazar: ";
    getline(cin, subvieja);

    cout << "Subcadena nueva: ";
    getline(cin, subnueva);

    string resultado = reemplazarSubcadena(texto, subvieja, subnueva);
    cout << "Texto modificado:" << resultado << endl;

    return 0;
}
