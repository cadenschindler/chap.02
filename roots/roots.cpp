#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, c, x1, x2;

	cout << "Enter a: ";
	cin >> a;

	cout << "Enter b: ";
	cin >> b;
	
	cout << "Enter c: ";
	cin >> c;

	x1 = (-b) + sqrt(pow(b, 2) - 4 * a * c);
	x1 /= 2 * a;

	x2 = (-b) - sqrt(pow(b, 2) - 4 * a * c);
	x2 /= 2 * a;

	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;

	return 0;
}