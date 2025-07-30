#include <iostream>
using namespace std;

struct Fraccion {
    int num;
    int den;
};

int mcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void simplificar(Fraccion& f) {
    int divisor = mcd(abs(f.num), abs(f.den));
    f.num /= divisor;
    f.den /= divisor;

    if (f.den < 0) {
        f.num *= -1;
        f.den *= -1;
    }
}

int main() {
    Fraccion f;

    cout << "Numerador: ";
    cin >> f.num;

    cout << "Denominador: ";
    cin >> f.den;

    if (f.den == 0) {
        cout << "Error: el denominador no puede ser cero." << endl;
        return 1;
    }

    simplificar(f);

    cout << "Fraccion simplificada: " << f.num << "/" << f.den << endl;

    return 0;
}
