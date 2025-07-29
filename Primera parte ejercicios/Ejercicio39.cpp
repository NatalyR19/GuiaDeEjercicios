#include <iostream>
#include <string.h>
using namespace std;
int main() {
    char cadena[100], sinEspacios[100];
    int j = 0;
    cout << "Ingrese una cadena con espacios: ";
    cin.getline(cadena, 100);
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] != ' ') {
            sinEspacios[j] = cadena[i];
            j++;
        }
    }
    sinEspacios[j] = '\0';
    cout << "\nCadena sin espacios: " << sinEspacios << endl;
    return 0;
}

