#include <iostream>
#include <vector>
using namespace std;
double calcularMedia(const vector<double>& datos) {
    double suma = 0.0;
    for (int i = 0; i < datos.size(); i++) {
        suma += datos[i];
    }
    return suma / datos.size();
}
double calcularCovarianza(const vector<double>& x, const vector<double>& y) {
    double mediaX = calcularMedia(x);
    double mediaY = calcularMedia(y);
    double suma = 0.0;
    for (int i = 0; i < x.size(); i++) {
        suma += (x[i] - mediaX) * (y[i] - mediaY);
    }
    return suma / x.size();
}
int main() {
    int n;
    cout << "Ingrese el tamano de los conjuntos: ";
    cin >> n;
    if (n <= 0) {
        cout << "Error: El tamaño debe ser mayor que cero." << endl;
        return 1;
    }
    vector<double> x(n), y(n);
    cout << "\nIngrese los valores del conjunto X:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "X[" << (i + 1) << "]: ";
        cin >> x[i];
    }
    cout << "\nIngrese los valores del conjunto Y:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Y[" << (i + 1) << "]: ";
        cin >> y[i];
    }
    if (x.size() != y.size()) {
        cout << "Error: Los conjuntos no tienen el mismo tamaño." << endl;
        return 1;
    }
    double covarianza = calcularCovarianza(x, y);
    cout << "\nLa covarianza entre los dos conjuntos es: " << covarianza << endl;
    return 0;
}
