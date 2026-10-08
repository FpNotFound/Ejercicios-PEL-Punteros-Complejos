#include "Circulo.h"

const double PI = 3.14159;

Circulo::Circulo(double radio) {
    this->radio = radio;
}

double Circulo::calcularArea() {
    return PI * radio * radio;
}

double Circulo::calcularCircunferencia() {
    return 2 * PI * radio;
}