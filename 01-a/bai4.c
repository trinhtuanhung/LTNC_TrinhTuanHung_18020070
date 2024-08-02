#include <iostream>
#include <string>
#include <vector>


const std::vector<std::string> ones = {
    "Zero", "One", "Two", "Three", "Four", "Five",
    "Six", "Seven", "Eight", "Nine", "Ten",
    "Eleven", "Twelve", "Thirteen", "Fourteen",
    "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
};

const std::vector<std::string> tens = {
    "", "", "Twenty", "Thirty", "Forty", "Fifty",
    "Sixty", "Seventy", "Eighty", "Ninety"
};

const std::vector<std::string> thousands = {
    "", "Thousand", "Million", "Billion"
};


std::string convertLessThanThousand(int num) {
    std::string result;

    if (num >= 100) {
        result += ones[num / 100] + " Hundred";
        num %= 100;
        if (num > 0) result += " ";
    }

    if (num >= 20) {
        result += tens[num / 10];
        num %= 10;
        if (num > 0) result += "-";
    }

    if (num > 0) {
        result += ones[num];
    }

    return result;
}


std::string numberToWords(int num) {
    if (num == 0) return "Zero";

    std::string result;
    int chunkIndex = 0;

    while (num > 0) {
        if (num % 1000 != 0) {
            result = convertLessThanThousand(num % 1000) + " " + thousands[chunkIndex] + " " + result;
        }
        num /= 1000;
        chunkIndex++;
    }


    while (result.back() == ' ') {
        result.pop_back();
    }

    return result;
}

int main() {
    int number;

    std::cout << "Enter a number between -999,999,999 and 999,999,999: ";
    std::cin >> number;

    if (number < -999999999 || number > 999999999) {
        std::cout << "Number out of range." << std::endl;
        return 1;
    }

    std::string result;
    if (number < 0) {
        result = "Negative " + numberToWords(-number);
    } else {
        result = numberToWords(number);
    }

    std::cout << result << std::endl;

    return 0;
}
