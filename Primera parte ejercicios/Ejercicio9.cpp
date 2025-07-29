#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;

    cout << "Ingrese un número entero no negativo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El número debe ser mayor o igual a cero." << endl;
    } else {
        cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
    }

    return 0;
}
