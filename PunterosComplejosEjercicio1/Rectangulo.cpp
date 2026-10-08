#include "Rectangulo.h"

Rectangulo::Rectangulo(double longitud, double ancho) {
    this->longitud = longitud;
    this->ancho = ancho;
}

double Rectangulo::calcularArea() {
    return longitud * ancho;
}

double Rectangulo::calcularPerimetro() {
    return 2 * (longitud + ancho);
}