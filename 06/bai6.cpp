#include <iostream>
#include <vector>

using namespace std;

void generateWords(int N, int K, string current, vector<bool>& used) {
    int l = current.length();
    if (l == K) {
        cout << current << endl;
        return;
    }

    for (int i = 0; i < N; i++) {
        if (!used[i]) {
            used[i] = true;
            generateWords(N, K, current + char('a' + i), used);
            used[i] = false;
        }
    }
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<bool> A(N, false);
    generateWords(N, K, "", A);

    return 0;
}