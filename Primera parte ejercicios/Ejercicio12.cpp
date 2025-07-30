#include <iostream>
using namespace std;
int main() {
    float num1, num2, num3;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;
    float nmayor = num1;

    if (num2 > nmayor) {
        nmayor = num2;
    }
    if (num3 > nmayor) {
        nmayor = num3;
    }
    cout << "El numero mayor es: " << nmayor << endl;
    return 0;
}
