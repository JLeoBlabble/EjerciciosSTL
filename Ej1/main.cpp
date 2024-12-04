#include <iostream>
using namespace std;

namespace Matematicas {
    int suma (int a, int b) {
        return a + b;
    }

    int resta (int a, int b) {
        return a - b;
    }
}

int main() {
    int a;
    int b;

    cout << "Introduzca el primer valor: ";
    cin >> a;
    cout << "Introduzca el segundo valor: ";
    cin >> b;

    cout << "La suma de los dos valores es: " << Matematicas::suma(a, b) << endl;
    cout << "La resta de los dos valores es: " << Matematicas::resta(a, b) << endl;

}