#include <iostream>
using namespace std;

namespace Geometria {
    double calcularArea(double radio);
    double calcularPerim(double radio);
}

int main() {
    double r;

    cout << "Introduzca el radio del círculo: ";
    cin >> r;

    cout << "El área del círculo es: " << Geometria::calcularArea(r) << endl;
    cout << "El perímetro del círculo es: " << Geometria::calcularPerim(r) << endl;

    return 0;
}