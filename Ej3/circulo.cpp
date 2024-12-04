#define PI 3.14159265358979323846

namespace Geometria {
    double calcularArea(double radio) {
        return PI * radio * radio;
    }

    double calcularPerim(double radio) {
        return 2 * PI * radio;
    }
}