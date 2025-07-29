#include <iostream>
#include <string.h>
using namespace std;
struct Libro {
    char titulo[100];
    char autor[50];
    int anio;
};
int buscarPorTitulo(Libro biblioteca[], int cantidad, const char tituloBuscado[]) {
    for (int i = 0; i < cantidad; i++) {
        if (strcmp(biblioteca[i].titulo, tituloBuscado) == 0) {
            return i;
        }
    }
    return -1;
}
#define NUM_LIBROS 3
int main() {
    Libro biblioteca[NUM_LIBROS];
    cout << "Ingrese los datos de " << NUM_LIBROS << " libros:\n";
    for (int i = 0; i < NUM_LIBROS; i++) {
        cout << "\nLibro #" << i + 1 << endl;
        cin.ignore();
        cout << "Titulo: ";
        cin.getline(biblioteca[i].titulo, 100);
        cout << "Autor: ";
        cin.getline(biblioteca[i].autor, 50);
        cout << "Ano de publicacion: ";
        cin >> biblioteca[i].anio;
    }
    char tituloBuscado[100];
    cout << "\nIngrese el título del libro que desea buscar: ";
    cin.ignore();
    cin.getline(tituloBuscado, 100);
    int posicion = buscarPorTitulo(biblioteca, NUM_LIBROS, tituloBuscado);
    if (posicion != -1) {
        cout << "\nLibro encontrado:\n";
        cout << "Titulo: " << biblioteca[posicion].titulo << endl;
        cout << "Autor: " << biblioteca[posicion].autor << endl;
        cout << "Ano: " << biblioteca[posicion].anio << endl;
    } else {
        cout << "\nEl libro no está en la biblioteca." << endl;
    }
    return 0;
}

