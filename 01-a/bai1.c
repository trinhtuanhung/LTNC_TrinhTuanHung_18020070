#include <iostream>
#include <cmath>

void checkTriangle(int a, int b, int c) {
    // Sắp xếp các cạnh sao cho a <= b <= c
    if (a > b) std::swap(a, b);
    if (b > c) std::swap(b, c);
    if (a > b) std::swap(a, b);

    if (a + b > c) {

        int perimeter = a + b + c;


        if (a == b && b == c) {
            std::cout << "Chu vi tam giác là: " << perimeter << "\n";
            std::cout << "Loai tam giác: deu\n";
        } else if (a == b || b == c) {
            std::cout << "Chu vi tam giác là: " << perimeter << "\n";
            std::cout << "Loai tam giác: can\n";
        } else {

            if (std::pow(a, 2) + std::pow(b, 2) == std::pow(c, 2)) {
                std::cout << "Chu vi tam giác là: " << perimeter << "\n";
                std::cout << "Loai tam giác: vuong\n";
            } else {
                std::cout << "Chu vi tam giác là: " << perimeter << "\n";
                std::cout << "Loai tam giác: thuong\n";
            }
        }
    } else {
        std::cout << "Invalid\n";
    }
}

int main() {
    int a, b, c;

    std::cout << "Nhap ba so nguyen:\n";
    std::cin >> a >> b >> c;

    checkTriangle(a, b, c);

    return 0;
}
