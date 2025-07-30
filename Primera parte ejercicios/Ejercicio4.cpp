#include <iostream>
using namespace std;

int main() {
    float num1, num2, resultado;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num2 == 0) {
        cout << "Error: No se puede dividir por cero." << endl;
    }
    else {
        resultado = num1 / num2;
        cout << "Resultado: " << resultado << endl;
    }

    return 0;
}
