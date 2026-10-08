#include "Libro.h"

void Libro::establecerTitulo(string titulo) {
    this->titulo = titulo;
}

void Libro::establecerAutor(string autor) {
    this->autor = autor;
}

string Libro::obtenerTitulo() {
    return titulo;
}

string Libro::obtenerAutor() {
    return autor;
}