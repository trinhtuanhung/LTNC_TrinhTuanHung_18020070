#include <iomanip>

struct Time {
    // your code goes here
    // Cac bien thanh vien
    int h, m, s;
    // your code goes here
    // Hai ham khoi tao
    Time() {
        h = 0;
        m = 0;
        s = 0;
    }

    Time(int _h, int _m, int _s) {
        h = _h;
        m = _m;
        s = _s;
    }
    int second() {
        // your code goes here
        return h * 3600 + m * 60 + s;
    }

    void print() {
        // your code goes here
        cout << setfill('0') << setw(2) << h << ":"
             << setfill('0') << setw(2) << m << ":"
             << setfill('0') << setw(2) << s << endl;    }
};

Time normalize(int h, int m, int s) {
    // your code goes here
    m += s / 60;
    s = s % 60;

    h += m / 60;
    m = m % 60;

    h = h % 24;

    return Time(h, m, s);
}
