#include <iostream>
#include <iomanip>

int main() {
    int scores[5];
    double average = 0.0;

    std::cout << "Enter the scores for 5 subjects: ";
    for (int i = 0; i < 5; ++i) {
        std::cin >> scores[i];
    }

    int total = 0;
    for (int i = 0; i < 5; ++i) {
        total += scores[i];
    }

    average = static_cast<double>(total) / 5;

    std::cout << std::fixed << std::setprecision(2) << average << std::endl;

    return 0;
}
