#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSubset(vector<int>& a1, vector<int>& a2) {
    sort(a1.begin(), a1.end());

    for (int num : a2) {
        if (!binary_search(a1.begin(), a1.end(), num)) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;

    vector<int> a1(m);
    for (int i = 0; i < m; i++) {
        cin >> a1[i];
    }

    vector<int> a2(n);
    for (int i = 0; i < n; i++) {
        cin >> a2[i];
    }

    if (isSubset(a1, a2)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}