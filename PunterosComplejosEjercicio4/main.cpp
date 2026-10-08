#include <iostream>
#include "Persona.h"

using namespace std;

int main() {
    Persona persona;

    persona.establecerNombre("Mora");
    persona.establecerEdad(20);

    cout << "Nombre: " << persona.obtenerNombre() << endl;
    cout << "Edad: " << persona.obtenerEdad() << endl;

    return 0;
}