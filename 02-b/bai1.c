#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    int total_wait_time = 0;
    int current_wait_time = 0;

    for (int i = 0; i < N; i++) {
        total_wait_time += current_wait_time;
        current_wait_time += arr[i];
    }

    cout << total_wait_time << endl;
    return 0;
}
