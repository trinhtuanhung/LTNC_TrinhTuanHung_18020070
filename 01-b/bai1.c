#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;
    int number;

    std::cout << "Enter a sequence of integers (end with a negative number):" << std::endl;
    while (std::cin >> number && number >= 0) {
        numbers.push_back(number);
    }

    if (!numbers.empty()) {
        std::cout << "Distinct numbers:" << std::endl;
        int last = numbers[0];
        std::cout << last << " ";

        for (size_t i = 1; i < numbers.size(); ++i) {
            if (numbers[i] != last) {
                std::cout << numbers[i] << " ";
                last = numbers[i];
            }
        }
        std::cout << std::endl;
    } else {
        std::cout << "No valid numbers entered." << std::endl;
    }

    return 0;
}
