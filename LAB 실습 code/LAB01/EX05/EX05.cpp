#include <iostream>
using namespace std;

float Celsius(int fah) {
	float cel;
	cel = 5.0 / 9.0 * (fah - 32);
	return cel;
}

int main() {
	float fah, cel;
	cout << "Please enter Fahrenheit value: ";
	cin >> fah;
	cel = Celsius(fah);
	cout << "Celsius value is " << cel;

	return 0;
}