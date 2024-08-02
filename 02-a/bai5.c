#include <iostream>
#include <cmath>
using namespace std;

int UCLN(int a, int b) {
    if(b==0){
        return a;
    } else {
        return UCLN(b, a%b);
    }
}

int BCNN(int a, int b) {
    if (a == 0 && b==0) {
        return 0;
    }
    return abs(a*b)/UCLN(a, b);
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << BCNN(a, b);
    return 0;
}
