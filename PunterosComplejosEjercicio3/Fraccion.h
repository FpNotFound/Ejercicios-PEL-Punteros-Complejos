#ifndef FRACCION_H
#define FRACCION_H

class Fraccion {
private:
    int numerador;
    int denominador;

public:
    Fraccion(int numerador, int denominador);

    Fraccion sumar(Fraccion otra);
    Fraccion restar(Fraccion otra);
    Fraccion multiplicar(Fraccion otra);
    Fraccion dividir(Fraccion otra);

    void mostrar();
};

#endif