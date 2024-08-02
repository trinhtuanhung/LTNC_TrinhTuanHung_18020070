#include <iostream>
#include <iomanip>

using namespace std;

struct Time {
    int h, m, s;

    Time() : h(0), m(0), s(0) {}
    Time(int hh, int mm, int ss) : h(hh), m(mm), s(ss) {}

    int second() const {
        return h * 3600 + m * 60 + s;
    }

    void print() const {
        cout << setfill('0') << setw(2) << h << ":"
             << setfill('0') << setw(2) << m << ":"
             << setfill('0') << setw(2) << s << endl;
    }
};

Time normalize(int h, int m, int s) {
    if (s >= 60) {
        m += s / 60;
        s %= 60;
    }
    if (m >= 60) {
        h += m / 60;
        m %= 60;
    }
    return Time(h, m, s);
}
