#ifndef LIBRO_H
#define LIBRO_H

#include <string>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;

public:
    void establecerTitulo(string titulo);
    void establecerAutor(string autor);

    string obtenerTitulo();
    string obtenerAutor();
};

#endif