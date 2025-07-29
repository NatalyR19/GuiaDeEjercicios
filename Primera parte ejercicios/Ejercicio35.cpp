#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char cadena1[100], cadena2[100];
    bool iguales = true;

    cout << "Ingrese la primera cadena: ";
    cin.getline(cadena1, 100);

    cout << "Ingrese la segunda cadena: ";
    cin.getline(cadena2, 100);
    
    int i = 0;
    while (cadena1[i] != '\0' || cadena2[i] != '\0') {
        if (cadena1[i] != cadena2[i]) {
            iguales = false;
            break;
        }
        i++;
    }
    if (iguales) {
        cout << "Las cadenas son iguales." << endl;
    } else {
        cout << "Las cadenas son diferentes." << endl;
    }
    return 0;
}

