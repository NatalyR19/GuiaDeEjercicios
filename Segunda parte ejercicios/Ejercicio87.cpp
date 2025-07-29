#include <iostream>
using namespace std;
double calcularMedia(int datos[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += datos[i];
    }
    return (double)suma / n;
}
int main() {
    int n;
    cout << "¿Cuantos datos numericos ingresara?: ";
    cin >> n;
    int datos[n];
    for (int i = 0; i < n; i++) {
        cout << "Dato #" << (i + 1) << ": ";
        cin >> datos[i];
    }
    double media = calcularMedia(datos, n);
    cout << "La media (promedio) de los datos es: " << media << endl;
    return 0;
}

