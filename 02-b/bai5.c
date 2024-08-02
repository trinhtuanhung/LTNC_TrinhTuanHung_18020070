#include <iostream>
#include <string>
using namespace std;

// Hàm kiểm tra xâu đối xứng
bool isPalindrome(const string& str) {
    int len = str.length();
    for (int i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);

    if (isPalindrome(str)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
