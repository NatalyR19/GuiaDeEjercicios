#include <iostream>
using namespace std;
struct Fraccion {
    int numerador;
    int denominador;
};
Fraccion multiplicarFracciones(Fraccion f1, Fraccion f2) {
    Fraccion resultado;
    resultado.numerador = f1.numerador * f2.numerador;
    resultado.denominador = f1.denominador * f2.denominador;
    return resultado;
}
int main() {
    Fraccion fraccion1, fraccion2, producto;
    cout << "Ingrese la primera fraccion:" << endl;
    cout << "Numerador: ";
    cin >> fraccion1.numerador;
    cout << "Denominador: ";
    cin >> fraccion1.denominador;
    cout << "\nIngrese la segunda fraccion:" << endl;
    cout << "Numerador: ";
    cin >> fraccion2.numerador;
    cout << "Denominador: ";
    cin >> fraccion2.denominador;
    if (fraccion1.denominador == 0 || fraccion2.denominador == 0) {
        cout << "\nError: el denominador no puede ser cero." << endl;
        return 1;
    }
    producto = multiplicarFracciones(fraccion1, fraccion2);
    cout << "\nEl producto de las dos fracciones es: ";
    cout << producto.numerador << "/" << producto.denominador << endl;
    return 0;
}

