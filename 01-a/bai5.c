#include <iostream>
#include <cmath>

void solveQuadraticEquation(double a, double b, double c) {

    if (a == 0) {
        std::cout << "The coefficient 'a' cannot be zero for a quadratic equation." << std::endl;
        return;
    }


    double delta = b * b - 4 * a * c;

    if (delta > 0) {

        double sqrtDelta = sqrt(delta);
        double x1 = (-b + sqrtDelta) / (2 * a);
        double x2 = (-b - sqrtDelta) / (2 * a);
        std::cout << "The roots are real and different:" << std::endl;
        std::cout << "x1 = " << x1 << std::endl;
        std::cout << "x2 = " << x2 << std::endl;
    } else if (delta == 0) {

        double x = -b / (2 * a);
        std::cout << "The root is real and the same:" << std::endl;
        std::cout << "x1 = x2 = " << x << std::endl;
    } else {

        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-delta) / (2 * a);
        std::cout << "The roots are complex and different:" << std::endl;
        std::cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
}

int main() {
    double a, b, c;

    std::cout << "Enter the coefficients a, b, and c of the quadratic equation:" << std::endl;
    std::cin >> a >> b >> c;

    solveQuadraticEquation(a, b, c);

    return 0;
}
