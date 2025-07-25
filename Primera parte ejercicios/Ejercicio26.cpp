//26. Sumar fila específica de matriz: Función que sume los elementos de una fila dada. //
#include <iostream>
#include <vector>
using namespace std;

int sumarFilaEspecifica(const vector<vector<int>>& matriz, int filaDeseada, int numColumnas) {

    if (matriz.empty()) {
        cerr << "Error: La matriz esta vacia." << endl;
        return 0;
    }

    if (filaDeseada < 0 || filaDeseada >= matriz.size()) {
        cerr << "Error: La fila " << filaDeseada << " esta fuera de los limites de la matriz." << endl;
        return 0;
    }

    int sumaFila = 0;

    for (int j = 0; j < numColumnas; ++j) {
        sumaFila += matriz[filaDeseada][j];
    }

    return sumaFila;
}

int main() {

    vector<std::vector<int>> matrizEspecifica = {
        {10, 20, 30, 40},  // Fila 0 //
        {5,  15, 25, 35},  // Fila 1 //
        {1,  2,  3,  4}    // Fila 2 //
    };

    int numFilas = matrizEspecifica.size();
    int numColumnas = matrizEspecifica.empty() ? 0 : matrizEspecifica[0].size();
    int filaASumar = 1; // Sumaremos la fila: {5, 15, 25, 35}
    int totalFila;


    cout << "Matriz creada:" << endl;
    for (int i = 0; i < numFilas; ++i) {
        for (int j = 0; j < numColumnas; ++j) {
            cout << matrizEspecifica[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;

    // Suma a la fila 1 //
    totalFila = sumarFilaEspecifica(matrizEspecifica,filaASumar, numColumnas);

    cout << "Sumando los elementos de la Fila " << filaASumar << ":" << endl;
    cout << "El valor total de la Fila " << filaASumar << " es: " << totalFila << endl;

    return 0;
}
