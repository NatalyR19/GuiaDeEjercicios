#include <iostream>
#include <algorithm> // Para sort()
#include <vector>

using namespace std;

double calculateMedian(vector<int>& data) {
    // Ordenar el vector
    sort(data.begin(), data.end());
    int n = data.size();
    double median;

    // Calcular la mediana
    if (n % 2 == 1) { // Tamaño impar
        median = data[n / 2];
    }
    else { // Tamaño par
        median = (data[(n / 2) - 1] + data[n / 2]) / 2.0;
    }
    return median;
}

int main() {
    vector<int> data1 = { 5, 2, 9, 1, 7, 6, 4 }; // Ejemplo con tamaño impar

    cout << "Datos originales: ";
    for (int num : data1) {
        cout << num << " ";
    }
    cout << endl;

    double median1 = calculateMedian(data1);

    cout << "Datos ordenados: ";
    for (int num : data1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Mediana: " << median1 << endl;

    // Ejemplo con tamaño par
    vector<int> data2 = { 5, 1, 4, 2 };
    cout << "Mediana (ejemplo par): " << calculateMedian(data2) << endl;

    return 0;
}