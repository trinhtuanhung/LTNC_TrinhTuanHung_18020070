#include <iostream>
#include <vector>
#include <limits>

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 0) {
        std::cerr << "Number of elements must be positive." << std::endl;
        return 1;
    }

    std::vector<double> numbers(n);

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    double maxValue = std::numeric_limits<double>::lowest();
    double minValue = std::numeric_limits<double>::max();

    for (const double& num : numbers) {
        if (num > maxValue) {
            maxValue = num;
        }
        if (num < minValue) {
            minValue = num;
        }
    }

    std::cout << "Maximum value: " << maxValue << std::endl;
    std::cout << "Minimum value: " << minValue << std::endl;

    return 0;
}
