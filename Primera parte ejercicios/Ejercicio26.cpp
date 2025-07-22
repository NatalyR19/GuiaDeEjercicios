//26. Sumar fila específica de matriz: Función que sume los elementos de una fila dada. //
#include <iostream>
#include <vector>

int sumarFilaEspecifica(const std::vector<std::vector<int>>& matriz, int filaDeseada, int numColumnas) {

    if (matriz.empty()) {
        std::cerr << "Error: La matriz esta vacia." << std::endl;
        return 0;
    }

    if (filaDeseada < 0 || filaDeseada >= matriz.size()) {
        std::cerr << "Error: La fila " << filaDeseada << " esta fuera de los limites de la matriz." << std::endl;
        return 0;
    }

    int sumaFila = 0;

    for (int j = 0; j < numColumnas; ++j) {
        sumaFila += matriz[filaDeseada][j];
    }

    return sumaFila;
}

int main() {

    std::vector<std::vector<int>> matrizEspecifica = {
        {10, 20, 30, 40},  // Fila 0 //
        {5,  15, 25, 35},  // Fila 1 //
        {1,  2,  3,  4}    // Fila 2 //
    };

    int numFilas = matrizEspecifica.size();
    int numColumnas = matrizEspecifica.empty() ? 0 : matrizEspecifica[0].size();
    int filaASumar = 1; // Sumaremos la fila: {5, 15, 25, 35}
    int totalFila;


    std::cout << "Matriz creada:" << std::endl;
    for (int i = 0; i < numFilas; ++i) {
        for (int j = 0; j < numColumnas; ++j) {
            std::cout << matrizEspecifica[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // Suma a la fila 1 //
    totalFila = sumarFilaEspecifica(matrizEspecifica,filaASumar, numColumnas);

    std::cout << "Sumando los elementos de la Fila " << filaASumar << ":" << std::endl;
    std::cout << "El valor total de la Fila " << filaASumar << " es: " << totalFila << std::endl;

    return 0;
}