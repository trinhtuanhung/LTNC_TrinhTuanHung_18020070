#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << "Array must contain at least two elements." << std::endl;
        return 1;
    }

    std::vector<int> numbers(n);

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> numbers[i];
    }

    std::sort(numbers.begin(), numbers.end());

    int minDifference = std::abs(numbers[1] - numbers[0]);

    for (int i = 1; i < n - 1; ++i) {
        int difference = std::abs(numbers[i + 1] - numbers[i]);
        if (difference < minDifference) {
            minDifference = difference;
        }
    }

    std::cout << "The smallest absolute difference is: " << minDifference << std::endl;

    return 0;
}
