/*

#include <iostream>

class Segment {
	double A, B;
public:
	Segment(double A, double B) : A(A), B(B) { }

	double get_A() const {
		return A;
	}

	double get_B() const {
		return B;
	}

	bool operator() (double);
};

Segment operator* (const double d, const Segment& a) {
	return Segment(a.get_A()*d, a.get_B()*d);
}

Segment operator* (const Segment& a, const double d) {
	return Segment(a.get_A()*d, a.get_B()*d);
}

Segment operator/ (const Segment& a, const double d) {
	return Segment(a.get_A()/d, a.get_B()/d);
}

Segment operator+ (const double d, const Segment& a) {
	return Segment(a.get_A()+d, a.get_B()+d);
}

Segment operator+ (const Segment& a, const double d) {
	return Segment(a.get_A()+d, a.get_B()+d);
}

Segment operator- (const Segment& a, const double d) {
	return Segment(a.get_A()-d, a.get_B()-d);
}

Segment operator+ (const Segment& a, const Segment& b) {
	if (a.get_A() < b.get_B()) {
		if (a.get_B() < b.get_B()) {
			return Segment(a.get_A(), b.get_B());
		}
		else
		{
			return Segment(a.get_A(), a.get_B());
		}
	}
	else
	{
		if (a.get_B() < b.get_B()) {
			return Segment(b.get_A(), b.get_B());
		}
		else
		{
			return Segment(b.get_A(), a.get_B());
		}
	}
}

bool Segment::operator() (const double d) {
	if (d > this->A && d < this->B)
		return true;
	else
		return false;
}

std::ostream& operator<<(std::ostream& str, const Segment& a) {
	return str << "[" << a.get_A() << "," << a.get_B() << "]";
}

int main() {
	using std::cout; using std::endl;
	Segment seg{2,3}, s = 1+2*((seg-2)/2+seg)/3;
	cout << s << endl << std::boolalpha;
	for (double x=0.5; x<4; x+=1)
		cout << "x=" << x << ": " << s(x) << endl;
}

*/


