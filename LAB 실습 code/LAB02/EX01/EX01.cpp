#include <iostream>
using namespace std;

int sum(int x, int y) {
	return x + y;
}

int sub(int x, int y) {
	return x - y;
}

int mult(int x, int y) {
	return x * y;
}

float idiv(int x, int y) {
	return float(x) / y;
}

int main() {
	int a, b;
	cout << "x 입력 : ";
	cin >> a;
	cout << "y 입력 : ";
	cin >> b;

	cout << "x + y = " << sum(a, b) << endl;
	cout << "x - y = " << sub(a, b) << endl;
	cout << "x * y = " << mult(a, b) << endl;
	cout << "x / y = " << idiv(a, b) << endl;
}