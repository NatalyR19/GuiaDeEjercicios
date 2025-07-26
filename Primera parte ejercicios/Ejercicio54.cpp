//54. Arreglo de libros (biblioteca): Crear un arreglo de structs para almacenar datos de libros. //
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Libro {
    string titulo;
    string autor;
    string isbn;
    int anoPublicacion;
    string genero;
};


void mostrarDetallesLibro(const Libro& libro) {
    cout << "  Titulo: " << libro.titulo << endl;
    cout << "  Autor: " << libro.autor << endl;
    cout << "  ISBN: " << libro.isbn << endl;
    cout << "  Ano de Publicacion: " << libro.anoPublicacion << endl;
    cout << "  Genero: " << libro.genero << endl;
}


int main() {
    vector<Libro> miBiblioteca;

    // Libro 1//
    Libro libro1;
    libro1.titulo = "Cien anos de soledad";
    libro1.autor = "Gabriel Garcia Marquez";
    libro1.isbn = "978-0307474728";
    libro1.anoPublicacion = 1967;
    libro1.genero = "Realismo Magico";
    miBiblioteca.push_back(libro1);

    // Libro 2 (inicialización directa al añadir)//
    miBiblioteca.push_back({
        "1984",
        "George Orwell",
        "978-0451524935",
        1949,
        "Distopia"
    });

    // Libro 3//
    Libro libro3 = {
        "El Senor de los Anillos",
        "J.R.R. Tolkien",
        "978-0618053267",
        1954,
        "Fantasia Epica"

    };

    miBiblioteca.push_back(libro3);

    // Acceder y mostrar la información de los libros //
    cout << "--- Libros en  Biblioteca ---" << endl;

    for (const Libro& libroActual : miBiblioteca) {
        cout << "------------------------------------" << endl;
        mostrarDetallesLibro(libroActual);
    }
    cout << "------------------------------------" << endl;


    return 0;
}