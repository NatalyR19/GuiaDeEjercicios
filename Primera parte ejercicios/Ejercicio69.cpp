#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream archivo("numeros.txt");
    double numero, suma = 0;
    int cantidad = 0;

    if (!archivo) {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    while (archivo >> numero) {
        suma += numero;
        cantidad++;
    }

    if (cantidad > 0)
        cout << "El promedio es: " << suma / cantidad << endl;
    else
        cout << "No se encontraron números válidos." << endl;

    archivo.close();
    return 0;
}
