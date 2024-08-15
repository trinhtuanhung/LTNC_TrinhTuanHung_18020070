Point::Point() {
    x = 0;
    y = 0;
}

Point::Point(double _x, double _y) {
    x = _x;
    y = _y;
}

Point::Point(const Point& p) {
    x = p.x;
    y = p.y;
}

Triangle::Triangle(const Point& a, const Point& b, const Point& c) {
    p1 = a;
    p2 = b;
    p3 = c;
}

double Triangle::getPerimeter() const {
    double c1 = sqrt(pow(p2.x - p1.x,2) + pow(p2.y - p1.y, 2));
    double c2 = sqrt(pow(p3.x - p2.x,2) + pow(p3.y - p2.y, 2));
    double c3 = sqrt(pow(p1.x - p3.x,2) + pow(p1.y - p3.y, 2));
    return c1 + c2 + c3;
}

double Triangle::getArea() const{
    double c1 = sqrt(pow(p2.x - p1.x,2) + pow(p2.y - p1.y, 2));
    double c2 = sqrt(pow(p3.x - p2.x,2) + pow(p3.y - p2.y, 2));
    double c3 = sqrt(pow(p1.x - p3.x,2) + pow(p1.y - p3.y, 2));
    double s = (c1 + c2 + c3)/2;
    return sqrt(s * (s - c1) * (s - c2) * (s - c3));
}
