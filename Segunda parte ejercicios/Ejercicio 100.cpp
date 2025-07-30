#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    const int LANZAMIENTOS = 1000; // Puedes cambiar esta cantidad
    int frecuencias[7] = { 0 }; // Índice 0 no se usa; usamos del 1 al 6

    srand(time(0)); // Semilla para números aleatorios (una sola vez)

    // Lanzar el dado varias veces
    for (int i = 0; i < LANZAMIENTOS; ++i) {
        int dado = rand() % 6 + 1; // Número aleatorio entre 1 y 6
        frecuencias[dado]++;
    }

    // Mostrar resultados
    cout << "Resultados de " << LANZAMIENTOS << " lanzamientos:\n";
    for (int i = 1; i <= 6; ++i) {
        cout << "Cara " << i << ": " << frecuencias[i] << " veces\n";
    }

    return 0;
}
