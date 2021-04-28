#include <iostream>
#include <cmath>
using namespace std;
double value();
double value_2();
double angle_1();
struct ComplTrig {
	double r;
	double phi = angle_1();
};
struct number {
	double a = value();
	double b = value_2();
};
int main() {
	const double pi = 3.14;
	number trig;
	ComplTrig numeric;
	numeric.r = abs(sqrt(pow(trig.a, 2) + pow(trig.b, 2)));
	//double z;	//z = numeric.r *(cos(angle) + sin(angle));
	cout << "Your complex number :" << endl;
	cout << "z = " << numeric.r << " * ( cos(" << numeric.phi << ") + i * sin(" << numeric.phi << "))" << endl;
}
double value() {
	double number;
	while (true) {
		cout << "Enter number a: ";
		cin >> number;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Error, please enter again" << endl;
		}
		else return number;
	}
}
double value_2() {
	double number;
	while (true) {
		cout << "Enter number b: ";
		cin >> number;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Error, please enter again" << endl;
		}
		else return number;
	}
}
double angle_1() {
	double angle;
	while (true) {
		cout << "Enter angle a: ";
		cin >> angle;
		if (cin.fail() || angle < 0) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Error, please enter again" << endl;
		}
		else return angle;
	}
}