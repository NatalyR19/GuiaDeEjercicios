//14.	Identificar par o impar: Función que reciba un entero y retorne si es par o impar. //
#include <iostream>
#include <string>
using namespace std;

string identificarParOImpar(int num) {
    if (num % 2 == 0) {
        return "Par";
    } else {

        return "Impar";
    }
}

int main() {
    int numero;
    string resultado;

    cout << "Ingresa un numero entero: ";
    cin >> numero;

    resultado = identificarParOImpar(numero);
    cout << "El numero " << numero << " es: " << resultado << endl;

    return 0;
}
