//6. Perímetro de un círculo: Función que reciba el radio y retorne el perímetro usando π = 3.1416. //
#include <iostream>
using namespace std;

double calcularPerimetroCirculo(double radio) {
    const double PI = 3.1416;
    double perimetro;
    perimetro = 2 * PI * radio;

    return perimetro;
}

int main() {
    double radioIngresado;
    double perimetroCalculado;

    cout << "Ingrese el radio del circulo: ";
    cin >> radioIngresado; // Leer el valor del radio
    perimetroCalculado = calcularPerimetroCirculo(radioIngresado);

    cout << "El perimetro del circulo con radio " << radioIngresado
              << " es: " << perimetroCalculado << endl;

    return 0;
}
