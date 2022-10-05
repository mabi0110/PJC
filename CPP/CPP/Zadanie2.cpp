#include <iostream>
#include <string>

using namespace std;

double a, b, c, x1, x2, delta, re1, re2, im1, im2;
char signAB, signBC, signZ1, signZ2;

char checkSign(double x) {
	return (x > 0) ? '+' : '-';
}

string printQuadricEquation(double a, double b, double c, char signAB, char signBC) {
	return "Rownanie ma postac: " 
		+ to_string(a) + " x^2 " + signAB + " "
		+ to_string(b) + " x " + signBC + " "
		+ to_string(c);
}

string printLinearEquation(double b, double c, char signBC) {
	return "Rownanie ma postac: "
		+ to_string(b) + "x " + signBC + " "
		+ to_string(c);
}

void calculateLinearEqation(double b, double c) {
	if (b == 0) {
		string result = (c == 0) ? "Rownanie nieoznaczone: 0 = 0" : "Rownanie sprzeczne: " + to_string(c) + " = 0";
		cout << result << endl;
	}
	else {
		cout << printLinearEquation(b, c, signBC) << endl;
		cout << "Rozwiazanie rownania x = " << -c / b << endl;
	}
}

void calculateQuadricEqation(double a, double b, double c) {
	cout << printQuadricEquation(a, b, c, signAB, signBC) << endl;
	delta = b * b - 4 * a * c;
	if (delta > 0) {
		x1 = (-b - sqrt(delta)) / 2 * a;
		x2 = (-b + sqrt(delta)) / 2 * a;
		cout << "Rowanie ma 2 rozwiazania: x1 = " << x1 << ", x2 = " << x2 << endl;
	}
	else if (delta == 0) {
		cout << "Rowanie ma 1 rozwiazanie: x = " << -b / 2 * a << endl;
	}
	else {
		cout << "Rozwiazanie rownania w zbiorze liczb zespolonych" << endl;
		delta = (-1) * delta;
		re1 = -b / 2 * a;
		im1 = -(sqrt(delta)) / 2 * a;
		re2 = -b / 2 * a;
		im2 = sqrt(delta) / (2 * a);
		signZ1 = (im1 < 0) ? ' ' : checkSign(im1);
		signZ2 = (im2 < 0) ? ' ' : checkSign(im2);
		cout << "z1 = " << re1 << signZ1 << im1 << "i" << endl;
		cout << "z2 = " << re2 << signZ2 << im2 << "i" << endl;
	}
}
/*
int main() {
	cout << "Program rozwiazuje rownanie kwadratowe" << endl;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	cout << "Podaj c: ";
	cin >> c;

	signAB = checkSign(b);
	signBC = checkSign(c);

	if (a == 0) {
		calculateLinearEqation(b, c);
	}
	else {
		calculateQuadricEqation(a, b, c);
	}
}
*/