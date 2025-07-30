#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Calcular la media
double media(const vector<double>& datos) {
    double suma = 0;
    for (double x : datos)
        suma += x;
    return suma / datos.size();
}

// Calcular la desviación estándar
double desviacionEstandar(const vector<double>& datos, double promedio) {
    double suma = 0;
    for (double x : datos)
        suma += (x - promedio) * (x - promedio);
    return sqrt(suma / datos.size());
}

// Calcular la covarianza
double covarianza(const vector<double>& X, const vector<double>& Y, double promX, double promY) {
    double suma = 0;
    for (size_t i = 0; i < X.size(); ++i)
        suma += (X[i] - promX) * (Y[i] - promY);
    return suma / X.size();
}

int main() {
    int n;
    cout << "Ingrese la cantidad de datos: ";
    cin >> n;

    vector<double> X(n), Y(n);

    cout << "Ingrese los datos de X:\n";
    for (int i = 0; i < n; ++i) {
        cout << "X[" << i + 1 << "]: ";
        cin >> X[i];
    }

    cout << "Ingrese los datos de Y:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Y[" << i + 1 << "]: ";
        cin >> Y[i];
    }

    double promX = media(X);
    double promY = media(Y);
    double stdX = desviacionEstandar(X, promX);
    double stdY = desviacionEstandar(Y, promY);
    double covar = covarianza(X, Y, promX, promY);
    double r = covar / (stdX * stdY);

    cout << "\nCoeficiente de correlacion de Pearson (r): " << r << endl;

    return 0;
}
