//2.	Resta de dos números: Leer dos números, restar el segundo al primero y mostrar el resultado.//
#include <iostream>
using namespace std;

int main() {
    int numero1;
    int numero2;
    int resultado;


    cout << "Por favor, ingresa el primer numero: ";
    cin >> numero1;

    cout << "Por favor, ingresa el segundo numero: ";
    cin >> numero2;

    resultado = numero2 - numero1;
    cout << "El resultado de la resta es: " << resultado << endl;

    return 0;
}
