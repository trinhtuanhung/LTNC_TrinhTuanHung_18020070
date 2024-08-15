#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int outp = arr[0];
    int count = 1;
    int tmp = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            tmp++;
        }
        else {
            if (tmp > count) {
                count = tmp;
                outp = arr[i - 1];
            }
            tmp = 1;
        }
    }

    if (tmp > count) {
        outp = arr[n - 1];
    }

    cout << outp << endl;

    return 0;
}