#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int max_count = 1;
    for (int i = 0; i < n; ++i) {
        int count = 1;
        for (int j = i + 1; j < n; ++j) {
            if(abs(arr[j] - arr[i]) <= 1) {
                count++;
            } else {
                break;
            }
        }
        if (count > max_count) {
            max_count = count;
        }
    }
    cout << max_count << endl;

    return 0;
}
