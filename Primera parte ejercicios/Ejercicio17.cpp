#include <iostream>
using namespace std;

int main() {
    const int tam = 5;
    float numeros[tam], suma = 0;

    cout << "Ingrese " << tam << " números:\n";
    for (int i = 0; i < tam; i++) {
        cout << "Número " << (i + 1) << ": ";
        cin >> numeros[i];
        suma += numeros[i];
    }

    float promedio = suma / tam;
    cout << "El promedio es: " << promedio << endl;

    return 0;
}
