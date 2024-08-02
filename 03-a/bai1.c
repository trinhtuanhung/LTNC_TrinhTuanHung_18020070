#include <iostream>
#include <vector>
using namespace std;

vector<bool> sieve(int max) {
    vector<bool> isPrime(max + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= max; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= max; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int maxElement = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] > maxElement) {
            maxElement = a[i];
        }
    }

    vector<bool> isPrime = sieve(maxElement);

    for (int i = 0; i < n; ++i) {
        if (isPrime[a[i]]) {
            cout << a[i] << " ";
        }
    }

    return 0;
}
