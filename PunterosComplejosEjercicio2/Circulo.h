#ifndef CIRCULO_H
#define CIRCULO_H

class Circulo {
private:
    double radio;

public:
    Circulo(double radio);

    double calcularArea();
    double calcularCircunferencia();
};

#endif