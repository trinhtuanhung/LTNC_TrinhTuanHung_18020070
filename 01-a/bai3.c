#include <iostream>

void canMeet(int x1, int v1, int x2, int v2) {

    if (v1 == v2) {
        if (x1 == x2) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    } else {

        if ((x1 - x2) % (v2 - v1) == 0 && (x1 - x2) / (v2 - v1) >= 0) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
}

int main() {
    int x1, v1, x2, v2;

    std::cout << "Nhap x1, v1, x2, v2:\n";
    std::cin >> x1 >> v1 >> x2 >> v2;

    canMeet(x1, v1, x2, v2);

    return 0;
}
