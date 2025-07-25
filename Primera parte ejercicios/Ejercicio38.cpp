//38. Concatenar dos cadenas: Unir dos cadenas de caracteres en una sola sin usar funciones de biblioteca.//
#include <iostream>
using namespace std;

int obtenerLongitudCadena(const char* str) {
    int longitud = 0;
    // Recorre la cadena hasta encontrar el carácter nulo terminador '\0'//
    while (str[longitud] != '\0') {
        longitud++;
    }
    return longitud;
}

void concatenarCadenas(char* destino, const char* cadena1, const char* cadena2) {
    int longitud1 = obtenerLongitudCadena(cadena1);
    int i = 0;

    while (i < longitud1) {
        destino[i] = cadena1[i];
        i++;
    }

    int longitud2 = obtenerLongitudCadena(cadena2);

    int j = 0;
    while (j < longitud2) {
        destino[i + j] = cadena2[j];
        j++;
    }

    destino[longitud1 + longitud2] = '\0';
}

int main() {
    char cad1[] = "Hola";
    char cad2[] = " Mundo!";
    char resultado[100]; // Un tamaño seguro para este ejemplo

    cout << "Cadena 1: " << cad1 << endl;
    cout << "Cadena 2: " << cad2 << endl;

    // Llamar a la función para concatenar//
    concatenarCadenas(resultado, cad1, cad2);

    cout << "Cadena concatenada: " << resultado << endl;


    return 0;
}
