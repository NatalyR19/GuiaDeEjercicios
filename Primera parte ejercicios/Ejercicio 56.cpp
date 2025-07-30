#include <iostream>
#include <string>
using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anio;
};

void buscarLibros(Libro libros[], int total, string autorBuscar) {
    bool existe = false;
    cout << "Libros de '" << autorBuscar << "':";

    for (int i = 0; i < total; i++) {
        if (libros[i].autor == autorBuscar) {
            cout << "- " << libros[i].titulo
                << " (" << libros[i].anio << ")";
            existe = true;
        }
    }

    if (!existe) {
        cout << "No hay libros de este autor.";
    }
}

int main() {
    Libro biblioteca[11] = {
        {"Cien anos de soledad", "Gabriel  Marquez", 1967},
        {"El principito", "Antoine de Saint-Exupery", 1943},
        {"Harry Potter y la piedra filosofal", "J.K. Rowling", 1997 },
        {"Los juegos del hambre", "Suzanne Collins", 2008},
        {"Cazadores de sombras", "Cassandra Clare", 2007},
        {"Ready Player One", "Ernest Cline", 2011},
        {"El nombre del viento", "Patrick Rothfuss", 2007},
        {"Cancion de hielo y fuego", "George  Martin", 1996},
        {"The Martian", "Andy Weir", 2011},
        {"Dune", "Frank Herbert", 1965},
        {"Neuromante", "William Gibson", 1984},
    };

    string autor;
    cout << "Autor a buscar: ";
    getline(cin, autor);

    buscarLibros(biblioteca, 3, autor);

    return 0;
}
