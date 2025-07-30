#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m, n, p, q;

    cout << "Ingrese filas y columnas de la matriz A (m n): ";
    cin >> m >> n;
    cout << "Ingrese filas y columnas de la matriz B (p q): ";
    cin >> p >> q;

    if (n != p) {
        cout << "Error: Las matrices no se pueden multiplicar.";
        cout << "El numero de columnas de A debe ser igual al de filas de B.";
        return 1;
    }

    vector<vector<int>> A(m, vector<int>(n));
    vector<vector<int>> B(p, vector<int>(q));
    vector<vector<int>> resultado(m, vector<int>(q, 0));

    cout << "Ingrese elementos de la matriz A:";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "A[" << i << "][" << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << "Ingrese elementos de la matriz B:";
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            cout << "B[" << i << "][" << j << "]: ";
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < n; k++) {
                resultado[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    
    cout << "Matriz resultante (A x B):";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            cout << resultado[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}