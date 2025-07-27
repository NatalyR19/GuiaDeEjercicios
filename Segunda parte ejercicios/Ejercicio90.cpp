//90. Calcular desviación estándar: Función que mida la dispersión de los datos respecto a la media.//
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Estructura del nodo del árbol
struct Nodo {
    int dato;
    Nodo* izquierda;
    Nodo* derecha;
    Nodo(int valor) : dato(valor), izquierda(nullptr), derecha(nullptr) {}
};

// Función para insertar un nodo en el árbol (BST)
Nodo* insertar(Nodo* raiz, int valor) {
    if (raiz == nullptr) {
        return new Nodo(valor);
    }
    if (valor < raiz->dato) {
        raiz->izquierda = insertar(raiz->izquierda, valor);
    } else if (valor > raiz->dato) {
        raiz->derecha = insertar(raiz->derecha, valor);
    }
    return raiz;
}

// Función para recorrer el árbol en inorden y guardar los datos en un vector
void inorden(Nodo* raiz, vector<double>& datos) {
    if (raiz == nullptr) return;
    inorden(raiz->izquierda, datos);
    datos.push_back(raiz->dato);
    inorden(raiz->derecha, datos);
}

// Función para calcular la media (promedio) de los datos
double calcularMedia(const vector<double>& datos) {
    double suma = 0.0;
    for (double dato : datos) {
        suma += dato;
    }
    return suma / datos.size();
}

// Función para calcular la desviación estándar
double calcularDesviacionEstandar(const vector<double>& datos, double media) {
    double sumaCuadrados = 0.0;
    for (double dato : datos) {
        sumaCuadrados += pow(dato - media, 2);
    }
    double varianza = sumaCuadrados / datos.size();
    return sqrt(varianza);
}

// Función principal
int main() {
    Nodo* raiz = nullptr;
    vector<double> datos;

    // Insertar datos en el árbol (ejemplo)
    raiz = insertar(raiz, 10);
    raiz = insertar(raiz, 5);
    raiz = insertar(raiz, 15);
    raiz = insertar(raiz, 3);
    raiz = insertar(raiz, 7);
    raiz = insertar(raiz, 12);
    raiz = insertar(raiz, 20);

    // Obtener datos del árbol (inorden)
    inorden(raiz, datos);

    // Calcular media y desviación estándar
    double media = calcularMedia(datos);
    double desviacion = calcularDesviacionEstandar(datos, media);

    // Mostrar resultados
    cout << "Datos en el árbol (inorden): ";
    for (double dato : datos) {
        cout << dato << " ";
    }
    cout << "\nMedia: " << media << endl;
    cout << "Desviacion estandar: " << desviacion << endl;

    return 0;
}