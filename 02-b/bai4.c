#include <iostream>
#include <string>
using namespace std;

int soDoiGuong(int a, int b) {
    int count = 0;
    for (int i = a; i<=b; i++) {
        string str = to_string(i);
        bool coHayKo = true;
        int len = str.length();
        for (int i = 0; i < len / 2; ++i) {
            if (str[i] != str[len - 1 - i]) {
                coHayKo = false;
                break;
            }
        }
        if (coHayKo) {
            count++;
        }
    }
    return count;
}
int main() {
    int n;
    cin >> n;

    while(n--) {
        int a, b;
        cin >> a >> b;
        if (a==b) {
            cout << "1" << endl;
        } else {
            cout << soDoiGuong(a, b) << endl;
        }
    }
}
