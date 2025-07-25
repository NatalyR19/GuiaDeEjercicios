//41. Invertir cadena: Crear una versión invertida de una cadena (ej: "hola" → "aloh")//
#include <iostream>
#include <algorithm>
using namespace std;

int obtenerLongitudCadena(const char* str) {
    int longitud = 0;
    while (str[longitud] != '\0') {
        longitud++;
    }
    return longitud;
}

void invertirCadena(char* cadena) {
    int longitud = obtenerLongitudCadena(cadena);


    if (longitud <= 1) {
        return;
    }

    int izquierda = 0;
    int derecha = longitud - 1;

    while (izquierda < derecha) {
        swap(cadena[izquierda], cadena[derecha]);

        // Mueve los índices hacia el centro//
        izquierda++;
        derecha--;
    }
}

int main() {
    // Texto que será invertido//
    char texto[] = "aloh";

    cout << "Original: " << texto << endl;
    invertirCadena(texto);
    cout << "Invertida: " << texto << endl << endl;

    return 0;
}
