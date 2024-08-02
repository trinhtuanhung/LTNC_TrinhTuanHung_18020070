#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void generateBinaryStrings(int n, vector<string> &result) {
    int total = pow(2, n);
    for (int i = 0; i < total; ++i) {
        string binary = "";
        for (int j = n - 1; j >= 0; --j) {
            binary += ((i >> j) & 1) ? '1' : '0';
        }
        result.push_back(binary);
    }
}

int main() {
    int n;
    cin >> n;
    vector<string> result;
    generateBinaryStrings(n, result);
    for (const string &binary : result) {
        cout << binary << endl;
    }
    return 0;
}
