#include <iostream>

void solveSystemOfEquations(double a1, double b1, double c1, double a2, double b2, double c2) {

    double D = a1 * b2 - a2 * b1;
    double Dx = c1 * b2 - c2 * b1;
    double Dy = a1 * c2 - a2 * c1;

    if (D != 0) {

        double x = Dx / D;
        double y = Dy / D;
        std::cout << "Nghiem duy nhat: x = " << x << ", y = " << y << std::endl;
    } else {
        if (b1 == 0 && b2 == 0) {

            if (a1 == 0 && a2 == 0) {
                if (c1 == 0 && c2 == 0) {
                    std::cout << "Hien tuong vo so nghiem" << std::endl;
                } else {
                    std::cout << "Invalid" << std::endl;
                }
            } else {
                if (c1 == (a1 / a2) * c2) {
                    std::cout << "Hien tuong vo so nghiem" << std::endl;
                } else {
                    std::cout << "Invalid" << std::endl;
                }
            }
        } else {

            if (a1 * b2 == a2 * b1 && a1 * c2 == a2 * c1 && b1 * c2 == b2 * c1) {
                std::cout << "Hien tuong vo so nghiem" << std::endl;
            } else {
                std::cout << "Invalid" << std::endl;
            }
        }
    }
}

int main() {
    double a1, b1, c1, a2, b2, c2;

    std::cout << "Nhap a1, b1, c1, a2, b2, c2:\n";
    std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

    solveSystemOfEquations(a1, b1, c1, a2, b2, c2);

    return 0;
}
