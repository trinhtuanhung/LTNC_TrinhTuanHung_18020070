struct Rectangle {
    // your code goes here
    // Cac bien thanh vien
    int height, length;
    // your code goes here
    // Hai ham khoi tao
    Rectangle() {
        height = 0;
        length = 0;
    }
    Rectangle(int _h, int _l) {
        height = _h;
        length = _l;
    }
    int getPerimeter() {
        // your code goes here
        return 2*(height + length);
    }

    void print() {
        // your code goes here
        if (height == 0 || length == 0) {
            return;
        }
        for (int i = 0; i<height; i++) {
            for (int j = 0; j<length; j++) {
                if (i == 0 || i == height - 1 || j == 0 || j == length - 1) {
                    cout << '*';
                } else {
                    cout << ' ';
                }
            }
            cout << endl;
        }
    }
};

int compare(Rectangle a, Rectangle b) {
    // your code goes here
    int perimeterA = a.getPerimeter();
    int perimeterB = b.getPerimeter();

    if (perimeterA < perimeterB) return -1;
    if (perimeterA == perimeterB) return 0;
    return 1;
}
