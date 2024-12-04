#include <iostream>
using namespace std;

namespace Ciencia {
    namespace Fisica {
        extern const double c;
        double calcularEnergia(double masa);
    }
}

int main() {
    cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << endl;
    return 0;
}