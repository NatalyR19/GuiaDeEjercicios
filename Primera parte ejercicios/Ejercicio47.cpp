#include <iostream>
using namespace std;
struct Punto {
    float x;
    float y;
};
int main() {
    Punto p;
    cout << "Ingrese la coordenada X del punto: ";
    cin >> p.x;
    cout << "Ingrese la coordenada Y del punto: ";
    cin >> p.y;
    cout << "\nEl punto ingresado tiene las coordenadas: (" << p.x << ", " << p.y << ")" << endl;
    return 0;
}


