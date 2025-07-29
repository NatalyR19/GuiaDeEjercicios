#include <iostream>
using namespace std;

struct Libro {
    string titulo;
    string autor;
    string editorial;
    int anio;
};

int main() {
    Libro l;

    cout << "Ingrese el título del libro: ";
    getline(cin, l.titulo);
    cout << "Ingrese el autor: ";
    getline(cin, l.autor);
    cout << "Ingrese la editorial: ";
    getline(cin, l.editorial);
    cout << "Ingrese el año de publicación: ";
    cin >> l.anio;

    cout << "\nDatos del libro:\n";
    cout << "Título: " << l.titulo << endl;
    cout << "Autor: " << l.autor << endl;
    cout << "Editorial: " << l.editorial << endl;
    cout << "Año: " << l.anio << endl;

    return 0;
}
