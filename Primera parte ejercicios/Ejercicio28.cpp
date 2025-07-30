#include <iostream>
#include <vector>
using namespace std;

int main() {
    int filas, columnas;

    cout << "Ingrese filas y columnas de la matriz (m n): ";
    cin >> filas >> columnas;

    vector<vector<int>> matriz(filas, vector<int>(columnas));

    cout << "Ingrese elementos de la matriz:";
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << "Fila " << i + 1 << ", Columna " << j + 1 << ": ";
            cin >> matriz[i][j];
        }
    }

  
    cout << "Mayor elemento por fila:";
    for (int i = 0; i < filas; i++) {
        int maximo = matriz[i][0]; 
        for (int j = 1; j < columnas; j++) {
            if (matriz[i][j] > maximo) {
                maximo = matriz[i][j];
            }
        }
        cout << "Fila " << i + 1 << ": " << maximo << endl;
    }

    return 0;
}
