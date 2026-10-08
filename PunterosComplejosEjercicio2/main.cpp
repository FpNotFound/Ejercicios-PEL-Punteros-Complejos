#include <iostream>
#include "Circulo.h"

using namespace std;

int main() {
    Circulo circulo(5);

    cout << "Area: " << circulo.calcularArea() << endl;
    cout << "Circunferencia: " << circulo.calcularCircunferencia() << endl;

    return 0;
}