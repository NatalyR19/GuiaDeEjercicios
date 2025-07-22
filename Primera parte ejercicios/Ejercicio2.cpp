//2.	Resta de dos números: Leer dos números, restar el segundo al primero y mostrar el resultado.//
#include <iostream>

int main() {
    int numero1;
    int numero2;
    int resultado;


    std::cout << "Por favor, ingresa el primer numero: ";
    std::cin >> numero1;

    std::cout << "Por favor, ingresa el segundo numero: ";
    std::cin >> numero2;

    resultado = numero2 - numero1;
    std::cout << "El resultado de la resta es: " << resultado << std::endl;

    return 0;
}