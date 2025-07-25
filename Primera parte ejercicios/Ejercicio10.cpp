//10.	Suma primeros n naturales: Función que sume todos los números desde 1 hasta n. //
#include <iostream>
using namespace std;

long long sumarPrimerosN_Bucle(int n) {
    long long suma = 0;


    for (int i = 1; i <= n; ++i) {
        suma = suma + i;
    }

    return suma;
}

int main() {
    int numero;
    long long resultadoSuma;


    cout << "Ingresa un numero entero positivo (n) para sumar los primeros n naturales: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "Por favor, ingresa un numero entero positivo." << endl;
        return 1;
    }

    resultadoSuma = sumarPrimerosN_Bucle(numero);

    cout << "La suma de los primeros " << numero
              << " numeros naturales es: " << resultadoSuma << endl;

    return 0;
}
