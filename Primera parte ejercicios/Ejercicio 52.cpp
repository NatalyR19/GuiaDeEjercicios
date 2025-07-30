#include <iostream>
#include <cmath> 
using namespace std;

struct Punto {
    float x, y;
};

float calcularDistancia(Punto a, Punto b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2));
}

int main() {
    Punto p1, p2;

    cout << "Coordenadas del Punto 1 (x y): ";
    cin >> p1.x >> p1.y;

    cout << "Coordenadas del Punto 2 (x y): ";
    cin >> p2.x >> p2.y;

    float distancia = calcularDistancia(p1, p2);
    cout << "Distancia: " << distancia << endl;

    return 0;
}
