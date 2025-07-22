//14.	Identificar par o impar: Función que reciba un entero y retorne si es par o impar. //
#include <iostream>
#include <string>

std::string identificarParOImpar(int num) {
    if (num % 2 == 0) {
        return "Par";
    } else {

        return "Impar";
    }
}

int main() {
    int numero;
    std::string resultado;

    std::cout << "Ingresa un numero entero: ";
    std::cin >> numero;

    resultado = identificarParOImpar(numero);
    std::cout << "El numero " << numero << " es: " << resultado <<     std::endl;

    return 0;
}