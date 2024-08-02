#include <iostream>
#include <cmath>
using namespace std;

int UCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int tu, mau;
    cin >> tu >> mau;

    if (mau < 0) {
        tu = -tu;
        mau = -mau;
    }

    int ucln = UCLN(abs(tu), abs(mau));

    tu /= ucln;
    mau /= ucln;

    if (mau == 1) {
        cout << tu << endl;
    } else {
        cout << tu << "/" << mau;
    }
}
