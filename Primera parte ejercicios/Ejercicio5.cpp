#include <iostream>
using namespace std;

double areaTriangulo(double base, double altura) {
    return (base * altura) / 2;
}

int main() {
    double b, h;
    cout << "Base: ";
    cin >> b;
    cout << "Altura: ";
    cin >> h;
    cout << "Area: " << areaTriangulo(b, h) << endl;
    return 0;
}
