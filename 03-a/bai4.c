#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void generateBinaryStrings(int n, int m, string str, int zeroCount, int oneCount, vector<string> &result) {
    if (zeroCount == n && oneCount == m) {
        result.push_back(str);
        return;
    }

    if (zeroCount < n) {
        generateBinaryStrings(n, m, str + '0', zeroCount + 1, oneCount, result);
    }

    if (oneCount < m) {
        generateBinaryStrings(n, m, str + '1', zeroCount, oneCount + 1, result);
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> result;

    generateBinaryStrings(n, m, "", 0, 0, result);

    sort(result.begin(), result.end());

    for (const std::string &str : result) {
        cout << str << endl;
    }

    return 0;
}
