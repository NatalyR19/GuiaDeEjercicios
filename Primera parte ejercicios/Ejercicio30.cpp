//30. Ordenar fila de matriz: Ordenar en forma ascendente o descendente los elementos de una fila específica//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

enum class TipoOrdenacion {
    ASCENDENTE,
    DESCENDENTE
};

void ordenarFilaEspecifica(vector<vector<int>>& matriz, int filaDeseada, TipoOrdenacion tipo) {
    if (matriz.empty()) {
        cerr << "Error: La matriz esta vacia. No se puede ordenar." << endl;
        return;
    }

    if (filaDeseada < 0 || filaDeseada >= matriz.size()) {
        cerr << "Error: La fila " << filaDeseada << " esta fuera de los limites de la matriz. No se puede ordenar." << endl;
        return;
    }

    vector<int>& filaAOrdenar = matriz[filaDeseada];

    if (tipo == TipoOrdenacion::ASCENDENTE) {
        sort(filaAOrdenar.begin(), filaAOrdenar.end());
    } else {
        sort(filaAOrdenar.begin(), filaAOrdenar.end(), greater<int>());
    }

    cout << "Fila " << filaDeseada << " ordenada "
              << (tipo == TipoOrdenacion::ASCENDENTE ? "ASCENDENTE" : "DESCENDENTE") << "." << endl;
}

void imprimirMatriz(const vector<vector<int>>& matriz) {
    if (matriz.empty()) {
        cout << "La matriz esta vacia." << endl;
        return;
    }
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            cout << elemento << "\t";
        }
        cout << endl;
    }
}

int main() {
    std::vector<std::vector<int>> miMatriz = {
        {9, 2, 7, 5, 1},   // Fila 0
        {15, 8, 22, 4, 30}, // Fila 1
        {100, 50, 200, 10, 150}, // Fila 2
        {6, 3, 8, 2, 1}    // Fila 3
    };

    cout << "Matriz original:" << endl;
    imprimirMatriz(miMatriz);
    cout << endl;

    int filaElegidaPorUsuario;
    int opcionOrdenacion;
    TipoOrdenacion tipoSeleccionado;

    // Pedir al usuario qué fila quiere ordenar//
    cout << "Ingresa el indice de la fila que deseas ordenar (0 para la primera, 1 para la segunda, etc.): ";
    cin >> filaElegidaPorUsuario;

    // Pedir al usuario el tipo de ordenación//
    cout << "Elige el tipo de ordenacion:" << endl;
    cout << "1. Ascendente" << endl;
    cout << "2. Descendente" << endl;
    cout << "Opcion: ";
    cin >> opcionOrdenacion;

    if (opcionOrdenacion == 1) {
        tipoSeleccionado = TipoOrdenacion::ASCENDENTE;
    } else if (opcionOrdenacion == 2) {
        tipoSeleccionado = TipoOrdenacion::DESCENDENTE;
    } else {
        cout << "Opcion de ordenacion invalida. Se usara ascendente por defecto." << endl;
        tipoSeleccionado = TipoOrdenacion::ASCENDENTE;
    }

    ordenarFilaEspecifica(miMatriz, filaElegidaPorUsuario, tipoSeleccionado);

    cout << "\nMatriz despues de la ordenacion:" << endl;
    imprimirMatriz(miMatriz);
    cout << endl;

    return 0;
}
