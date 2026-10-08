#include <iostream>
#include "Libro.h"

using namespace std;

int main() {
    Libro libro;

    libro.establecerTitulo("The 48 Laws of Power");
    libro.establecerAutor("Robert Greene");

    cout << "Titulo: " << libro.obtenerTitulo() << endl;
    cout << "Autor: " << libro.obtenerAutor() << endl;

    return 0;
}