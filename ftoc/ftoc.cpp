#include <iostream>
using namespace std;

int main() {

	double f;
	cout << "Enter a temerature in Fahrenheit: ";
	cin >> f;


	//double c = 5 / 9 * (f - 32);				// Does not work
	//double c = 5.0 / 9.0 * (f - 32);			// Works
	//double c = 5 * (f - 32) / 9;				// Works
	double c = (double)5 / double(9) * (f - 32);// Works

	cout << "The tempature in Celcius: " << c << endl;

	return 0;
}