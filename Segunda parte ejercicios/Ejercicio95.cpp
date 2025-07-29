#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double calcularCuartil(const vector<double>& datos, double cuartil) {
    int n = datos.size();
    double pos = cuartil * (n + 1);
    int idx = (int)pos;
    double frac = pos - idx;
    if (idx <= 0) return datos[0];
    if (idx >= n) return datos[n - 1];
    return datos[idx - 1] + frac * (datos[idx] - datos[idx - 1]);
}
int main() {
    int n;
    cout << "Ingrese la cantidad de datos: ";
    cin >> n;
    if (n <= 0) {
        cout << "Error: la cantidad de datos debe ser mayor que cero." << endl;
        return 1;
    }
    vector<double> datos(n);
    cout << "\nIngrese los datos:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Dato #" << (i + 1) << ": ";
        cin >> datos[i];
    }
    sort(datos.begin(), datos.end());
    double Q1 = calcularCuartil(datos, 0.25);
    double Q3 = calcularCuartil(datos, 0.75);
    double RIQ = Q3 - Q1;
    cout << "\nQ1 (primer cuartil): " << Q1 << endl;
    cout << "Q3 (tercer cuartil): " << Q3 << endl;
    cout << "Rango intercuartílico (Q3 - Q1): " << RIQ << endl;
    return 0;
}
