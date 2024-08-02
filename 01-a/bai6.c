#include <iostream>
#include <cmath>

bool isPerfectSquare(int n) {
    if (n < 0) return false;

    int root = static_cast<int>(sqrt(n));

    return root * root == n;
}

int main() {
    int n;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    if (isPerfectSquare(n)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
