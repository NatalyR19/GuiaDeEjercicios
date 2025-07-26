//58. Sumar dos fracciones: Función que reciba dos fracciones y retorne su suma simplificada.//
#include <iostream>
#include <numeric>
using namespace std;


struct Fraccion {
    int numerador;
    int denominador;

    Fraccion(int num = 0, int den = 1) : numerador(num), denominador(den) {

        if (denominador == 0) {
            cerr << "Error: El denominador no puede ser cero. Se establecera a 1." << endl;
            this->denominador = 1;
        }
    }


    void imprimir() const {
        cout << numerador << "/" << denominador;
    }
};

int calcularMCD(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplificarFraccion(Fraccion& frac) {
    cout << "\n--- Paso de Simplificacion ---" << endl;
    cout << "Fraccion a simplificar: "; frac.imprimir(); cout << endl;

    int mcd = calcularMCD(frac.numerador, frac.denominador);
    cout << "Calculando MCD de " << frac.numerador << " y " << frac.denominador << ": " << mcd << endl;

    if (mcd != 0) {
        frac.numerador /= mcd;
        frac.denominador /= mcd;
    }


    if (frac.denominador < 0) {
        frac.numerador *= -1;
        frac.denominador *= -1;
    }
    cout << "Fraccion simplificada: "; frac.imprimir(); cout << endl;
}


Fraccion sumarFracciones(const Fraccion& f1, const Fraccion& f2) {
    cout << "\n--- Proceso de Suma de Fracciones ---" << endl;
    cout << "Sumando: "; f1.imprimir(); cout << " + "; f2.imprimir(); cout << endl;


    // Formula: (a/b) + (c/d) = (a*d + c*b) / (b*d)//
    int nuevoNumerador = (f1.numerador * f2.denominador) + (f2.numerador * f1.denominador);
    int nuevoDenominador = f1.denominador * f2.denominador;

    cout << "Numerador comun: (" << f1.numerador << " * " << f2.denominador << ") + ("
         << f2.numerador << " * " << f1.denominador << ") = " << nuevoNumerador << endl;
    cout << "Denominador comun: " << f1.denominador << " * " << f2.denominador << " = " << nuevoDenominador << endl;

    Fraccion resultadoSuma(nuevoNumerador, nuevoDenominador);
    cout << "Resultado inicial de la suma: "; resultadoSuma.imprimir(); cout << endl;

    // Simplificar la fracción resultante//
    simplificarFraccion(resultadoSuma);

    return resultadoSuma;
}

int main() {
    // Sumar 1/2 + 1/4//
    Fraccion frac1(1, 2);
    Fraccion frac2(1, 4);
    Fraccion suma1 = sumarFracciones(frac1, frac2);
    cout << "\nResultado final (1/2 + 1/4): "; suma1.imprimir(); cout << endl;

    cout << "\n====================================\n";

    return 0;
}
