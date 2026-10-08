#include "Fraccion.h"
#include <iostream>

using namespace std;

Fraccion::Fraccion(int numerador, int denominador) {
    this->numerador = numerador;
    this->denominador = denominador;
}

Fraccion Fraccion::sumar(Fraccion otra) {
    int nuevoNumerador = numerador * otra.denominador
                       + otra.numerador * denominador;

    int nuevoDenominador = denominador * otra.denominador;

    return Fraccion(nuevoNumerador, nuevoDenominador);
}

Fraccion Fraccion::restar(Fraccion otra) {
    int nuevoNumerador = numerador * otra.denominador
                       - otra.numerador * denominador;

    int nuevoDenominador = denominador * otra.denominador;

    return Fraccion(nuevoNumerador, nuevoDenominador);
}

Fraccion Fraccion::multiplicar(Fraccion otra) {
    int nuevoNumerador = numerador * otra.numerador;
    int nuevoDenominador = denominador * otra.denominador;

    return Fraccion(nuevoNumerador, nuevoDenominador);
}

Fraccion Fraccion::dividir(Fraccion otra) {
    int nuevoNumerador = numerador * otra.denominador;
    int nuevoDenominador = denominador * otra.numerador;

    return Fraccion(nuevoNumerador, nuevoDenominador);
}

void Fraccion::mostrar() {
    cout << numerador << "/" << denominador;
}