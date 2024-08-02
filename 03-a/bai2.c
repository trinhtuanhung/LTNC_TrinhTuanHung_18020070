#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool binary_search(const vector<int>& arr, int x) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            return true;
        } else if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    for (int i = 0; i < m; ++i) {
        if (binary_search(a, b[i])) {
            cout << "YES ";
        } else {
            cout << "NO ";
        }
    }

    return 0;
}
