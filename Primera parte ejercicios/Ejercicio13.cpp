#include <iostream>
using namespace std;

int main() {
    double a, b, c;

    cout << "Ingrese tres numeros: ";
    cout <<"ingrese el primer numero"; cin >> a;
    cout << "Ingrese el segundo numero"; cin >> b;
     cout << "Ingrese el tercer numero"; cin >> c;

    double menor = a;

    if (b < menor) menor = b;
    if (c < menor) menor = c;

    cout << "El numero menor es: " << menor << endl;

    return 0;
}
