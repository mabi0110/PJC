#include <iostream>
#include <cmath>
using namespace std;

class Segment {
    double A, B;
public:
    Segment(double A, double B) : A(A), B(B) {}

    double getA() const {return A;}

    double getB() const { return B;}

    bool operator() (double);
};

ostream& operator<<(ostream& str, const Segment& seg) {
    return str << "[" << seg.getA() << "," << seg.getB() << "]";
}

Segment operator* (const double d, const Segment& seg) {
    return Segment(seg.getA() * d, seg.getB() * d);
}

Segment operator* (const Segment& seg, const double d) {
    return Segment(seg.getA() * d, seg.getB() * d);
}

Segment operator/ (const Segment& seg, const double d) {
    return Segment(seg.getA() / d, seg.getB() / d);
}

Segment operator+ (const double d, const Segment& seg) {
    return Segment(seg.getA() + d, seg.getB() + d);
}

Segment operator+ (const Segment& seg, const double d) {
    return Segment(seg.getA() + d, seg.getB() + d);
}

Segment operator- (const Segment& seg, const double d) {
    return Segment(seg.getA() - d, seg.getB() - d);
}

Segment operator+ (const Segment& seg1, const Segment& seg2) {
	if (seg1.getA() < seg2.getB()) {
		return (seg1.getB() < seg2.getB()) ? Segment(seg1.getA(), seg2.getB()) : Segment(seg1.getA(), seg1.getB());
	}
	else {
		return (seg1.getB() < seg2.getB()) ? Segment(seg2.getA(), seg2.getB()) : Segment(seg2.getA(), seg1.getB());
	}
}

bool Segment::operator() (const double d) {
    return (d > this->A && d < this->B) ? true : false;
}

int main() {
    using std::cout; using std::endl;
    Segment seg{ 2,3 }, s = 1 + 2 * ((seg - 2) / 2 + seg) / 3;
    cout << s << endl << std::boolalpha;
    for (double x = 0.5; x < 4; x += 1)
        cout << "x=" << x << ": " << s(x) << endl;
}

