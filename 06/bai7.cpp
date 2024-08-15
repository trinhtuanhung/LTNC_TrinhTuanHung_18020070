int gcd(int a, int b)
{
    if (b == 0)
    {
        return abs(a);
    }
    return gcd(b, a % b);
}

class Fraction {
    int a, b;
public:
    Fraction()
    {
        a = 1; b = 1;
    }
    Fraction(int _a, int _b)
    {
        a = _a; b = _b;
    }
    friend ostream& operator<<(ostream& os, const Fraction& f)
    {
        if (f.b == 0)
        {
            os << "invalid";
        }
        else {
            Fraction c(f.a, f.b);
            c.simplify();
            os << c.a << "/" << c.b;
        }
        return os;
    }
    Fraction operator+(const Fraction& f) const
    {
        Fraction c(a * f.b + b * f.a, b * f.b);
        c.simplify();
        return c;
    }
    Fraction operator-(const Fraction& f) const
    {
        Fraction c(a * f.b - b * f.a, b * f.b);
        c.simplify();
        return c;
    }
    Fraction operator*(const Fraction& f) const
    {
        Fraction c(a * f.a, b * f.b);
        c.simplify();
        return c;
    }
    Fraction operator/(const Fraction& f) const
    {
        Fraction c(a * f.b, b * f.a);
        c.simplify();
        return c;
    }
    void simplify()
    {
        int g = gcd(a, b);
        if (b > 0) {
            a = a / g; b = b / g;
        }
        else
        {
            a = -a / g; b = -b / g;
        }
    }
    bool operator>(const Fraction& f) const
    {
        if (a * f.b - b * f.a > 0) return true;
        return false;
    }
    bool operator<(const Fraction& f) const
    {
        if (a * f.b - b * f.a < 0) return true;
        return false;
    }
};