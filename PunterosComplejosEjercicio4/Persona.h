#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona {
private:
    string nombre;
    int edad;

public:
    void establecerNombre(string nombre);
    void establecerEdad(int edad);

    string obtenerNombre();
    int obtenerEdad();
};

#endif