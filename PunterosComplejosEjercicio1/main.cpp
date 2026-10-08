#include <iostream>
#include "Rectangulo.h"

using namespace std;

int main() {
    Rectangulo rectangulo(10, 5);

    cout << "Area: " << rectangulo.calcularArea() << endl;
    cout << "Perimetro: " << rectangulo.calcularPerimetro() << endl;

    return 0;
}
