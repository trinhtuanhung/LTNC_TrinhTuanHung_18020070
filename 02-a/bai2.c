#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Tạo và in ma trận
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << (i + j) % n + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}
