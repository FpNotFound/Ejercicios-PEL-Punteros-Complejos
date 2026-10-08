#ifndef RECTANGULO_H
#define RECTANGULO_H

class Rectangulo {
private:
    double longitud;
    double ancho;

public:
    Rectangulo(double longitud, double ancho);

    double calcularArea();
    double calcularPerimetro();
};

#endif