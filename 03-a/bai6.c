#include <iostream>
using namespace std;

class Rectangle {
public:
    int height;
    int length;

    Rectangle() : height(0), length(0) {}

    Rectangle(int h, int l) : height(h), length(l) {}

    int getPerimeter() {
        return 2 * (height + length);
    }

    void print() {
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < length; j++) {
                if (i == 0 || i == height - 1 || j == 0 || j == length - 1) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
};

int compare(Rectangle a, Rectangle b) {
    int perimeterA = a.getPerimeter();
    int perimeterB = b.getPerimeter();

    if (perimeterA < perimeterB) {
        return -1;
    } else if (perimeterA == perimeterB) {
        return 0;
    } else {
        return 1;
    }
}
