#define _USE_MATH_DEFINES		// Microsoft Only
#include <iostream>
#include <cmath>
using namespace std;

int main() {

	double r;
	cout << "Raduis: ";
	cin >> r;

	//double a = M_PI * pow(r, 2);
	double a = M_PI * r * r;
	
	cout << "Area = " << a << endl;
	
	return 0;
}