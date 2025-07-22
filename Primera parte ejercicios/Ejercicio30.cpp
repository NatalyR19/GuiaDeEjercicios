//30. Ordenar fila de matriz: Ordenar en forma ascendente o descendente los elementos de una fila específica//
#include <iostream>
#include <vector>
#include <algorithm>
enum class TipoOrdenacion {
    ASCENDENTE,
    DESCENDENTE
};

void ordenarFilaEspecifica(std::vector<std::vector<int>>& matriz, int filaDeseada, TipoOrdenacion tipo) {
    if (matriz.empty()) {
        std::cerr << "Error: La matriz esta vacia. No se puede ordenar." << std::endl;
        return;
    }

    if (filaDeseada < 0 || filaDeseada >= matriz.size()) {
        std::cerr << "Error: La fila " << filaDeseada << " esta fuera de los limites de la matriz. No se puede ordenar." << std::endl;
        return;
    }

    std::vector<int>& filaAOrdenar = matriz[filaDeseada];

    if (tipo == TipoOrdenacion::ASCENDENTE) {
        std::sort(filaAOrdenar.begin(), filaAOrdenar.end());
    } else {
        std::sort(filaAOrdenar.begin(), filaAOrdenar.end(), std::greater<int>());
    }

    std::cout << "Fila " << filaDeseada << " ordenada "
              << (tipo == TipoOrdenacion::ASCENDENTE ? "ASCENDENTE" : "DESCENDENTE") << "." << std::endl;
}

void imprimirMatriz(const std::vector<std::vector<int>>& matriz) {
    if (matriz.empty()) {
        std::cout << "La matriz esta vacia." << std::endl;
        return;
    }
    for (const auto& fila : matriz) {
        for (int elemento : fila) {
            std::cout << elemento << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> miMatriz = {
        {9, 2, 7, 5, 1},   // Fila 0
        {15, 8, 22, 4, 30}, // Fila 1
        {100, 50, 200, 10, 150}, // Fila 2
        {6, 3, 8, 2, 1}    // Fila 3
    };

    std::cout << "Matriz original:" << std::endl;
    imprimirMatriz(miMatriz);
    std::cout << std::endl;

    int filaElegidaPorUsuario;
    int opcionOrdenacion;
    TipoOrdenacion tipoSeleccionado;

    // Pedir al usuario qué fila quiere ordenar//
    std::cout << "Ingresa el indice de la fila que deseas ordenar (0 para la primera, 1 para la segunda, etc.): ";
    std::cin >> filaElegidaPorUsuario;

    // Pedir al usuario el tipo de ordenación//
    std::cout << "Elige el tipo de ordenacion:" << std::endl;
    std::cout << "1. Ascendente" << std::endl;
    std::cout << "2. Descendente" << std::endl;
    std::cout << "Opcion: ";
    std::cin >> opcionOrdenacion;

    if (opcionOrdenacion == 1) {
        tipoSeleccionado = TipoOrdenacion::ASCENDENTE;
    } else if (opcionOrdenacion == 2) {
        tipoSeleccionado = TipoOrdenacion::DESCENDENTE;
    } else {
        std::cout << "Opcion de ordenacion invalida. Se usara ascendente por defecto." << std::endl;
        tipoSeleccionado = TipoOrdenacion::ASCENDENTE;
    }

    ordenarFilaEspecifica(miMatriz, filaElegidaPorUsuario, tipoSeleccionado);

    std::cout << "\nMatriz despues de la ordenacion:" << std::endl;
    imprimirMatriz(miMatriz);
    std::cout << std::endl;

    return 0;
}