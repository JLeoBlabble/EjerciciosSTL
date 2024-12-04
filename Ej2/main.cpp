#include <iostream>
using namespace std;

namespace Geometria {
    double calcularAreaTri(double base, double altura);
    double calcularAreaCirc(double radio);
}

int main() {
    double a;
    double b;
    double r;

    cout << "Introduzca la base del triángulo: ";
    cin >> a;
    cout << "Introduzca la altura del triángulo: ";
    cin >> b;
    cout << "Introduzca el radio del círculo: ";
    cin >> r;

    cout << "El área del triángulo es: " << Geometria::calcularAreaTri(a, b) << endl;
    cout << "El área del círculo es: " << Geometria::calcularAreaCirc(r) << endl;

    return 0;
}