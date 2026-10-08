#include <iostream>
#include "Fraccion.h"

using namespace std;

int main() {
    Fraccion fraccion1(1, 2);
    Fraccion fraccion2(1, 4);

    Fraccion suma = fraccion1.sumar(fraccion2);
    Fraccion resta = fraccion1.restar(fraccion2);
    Fraccion multiplicacion = fraccion1.multiplicar(fraccion2);
    Fraccion division = fraccion1.dividir(fraccion2);

    cout << "Suma: ";
    suma.mostrar();
    cout << endl;

    cout << "Resta: ";
    resta.mostrar();
    cout << endl;

    cout << "Multiplicacion: ";
    multiplicacion.mostrar();
    cout << endl;

    cout << "Division: ";
    division.mostrar();
    cout << endl;

    return 0;
}