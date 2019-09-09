#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double a;
	cout << "Please enter side a: ";
	cin >> a;
	
	double b;
	cout << "Please enter side b: ";
	cin >> b;

	double c = sqrt(pow(a,2) + pow(b,2));

	cout << "c = " << c << endl;

	return 0;
}