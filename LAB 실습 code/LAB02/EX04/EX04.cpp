#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b;
	cout << "x 입력 : ";
	cin >> a;
	cout << "y 입력 : ";
	cin >> b;

	cout << sqrt(a) << endl;
	cout << exp(a) << endl;
	cout << log10(a) << endl;
	cout << cos(a) << endl;
	cout << pow(a,b) << endl;
	cout << fabs(a) << endl;

	return 0;
}