#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double V, S, r, h;

	cout << "Enter a radius: ";
	cin >> r;

	cout << "Enter a height: ";
	cin >> h;

	V = ((double)1 / (double)3) * M_PI * pow(r, 2) * h;
	S = (M_PI * r) * sqrt(pow(r, 2) + pow(h, 2)) + (M_PI * pow(r, 2));

	cout << "Volume = " << V << endl;
	cout << "Surface Area = " << S << endl;

	return 0;
}