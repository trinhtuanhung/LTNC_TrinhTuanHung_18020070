#include <iostream>
#include <string>
using namespace std;

// Hàm đếm số chữ số của I là ước của I
int countDivisibleDigits(int I) {
    string s = to_string(I);
    int count = 0;

    for (char c : s) {
        int digit = c - '0';
        if (digit != 0 && I % digit == 0) {
            count++;
        }
    }

    return count;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int I;
        cin >> I;
        cout << countDivisibleDigits(I) << endl;
    }

    return 0;
}
