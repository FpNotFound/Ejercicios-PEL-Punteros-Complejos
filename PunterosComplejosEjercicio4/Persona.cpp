#include "Persona.h"

void Persona::establecerNombre(string nombre) {
    this->nombre = nombre;
}

void Persona::establecerEdad(int edad) {
    this->edad = edad;
}

string Persona::obtenerNombre() {
    return nombre;
}

int Persona::obtenerEdad() {
    return edad;
}