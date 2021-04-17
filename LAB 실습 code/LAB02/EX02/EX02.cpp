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

int add_mult(int x, int y, int z) {
	return mult(sum(x, y), z);
}

float mult_div(int x, int y, int z) {
	return idiv(mult(x, y), z);
}

int add_mult_add(int x, int y, int z) {
	return mult(sum(x, y), sum(y,z));
}

float sub_div_sub(int x, int y, int z) {
	return idiv(sub(x, y), sub(x, z));
}

int main() {
	int a, b, c;
	cout << "x 입력 : ";
	cin >> a;
	cout << "y 입력 : ";
	cin >> b;
	cout << "z 입력 : ";
	cin >> c;

	cout << "(x + y) * z = " << add_mult(a, b, c) << endl;
	cout << "(x * y) / z = " << mult_div(a, b, c) << endl;
	cout << "(x + y) * (y + z) = " << add_mult_add(a, b, c) << endl;
	cout << "(x - y) / (x - z) = " << sub_div_sub(a, b, c) << endl;

	return 0;
}