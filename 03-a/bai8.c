#include <iostream>
using namespace std;

void multiply(int* n, int k) {
    if (n != nullptr) {
        *n = (*n) * k;
    }
}
