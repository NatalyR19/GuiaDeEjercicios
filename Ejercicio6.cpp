//6. Perímetro de un círculo: Función que reciba el radio y retorne el perímetro usando π = 3.1416. //
#include <iostream>

double calcularPerimetroCirculo(double radio) {
    const double PI = 3.1416;
    double perimetro;
    perimetro = 2 * PI * radio;

    return perimetro;
}

int main() {
    double radioIngresado;
    double perimetroCalculado;

    std::cout << "Ingrese el radio del circulo: ";
    std::cin >> radioIngresado; // Leer el valor del radio
    perimetroCalculado = calcularPerimetroCirculo(radioIngresado);

    std::cout << "El perimetro del circulo con radio " << radioIngresado
              << " es: " << perimetroCalculado << std::endl;

    return 0;
}