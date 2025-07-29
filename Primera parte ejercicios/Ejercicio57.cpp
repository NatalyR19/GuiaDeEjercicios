#include <iostream>
using namespace std;

struct Fraccion {
    int numerador;
    int denominador;
};

int main() {
    Fraccion f;

    cout << "Ingrese el numerador: ";
    cin >> f.numerador;
    cout << "Ingrese el denominador: ";
    cin >> f.denominador;

    cout << "La fracción ingresada es: " << f.numerador << "/" << f.denominador << endl;

    return 0;
}
