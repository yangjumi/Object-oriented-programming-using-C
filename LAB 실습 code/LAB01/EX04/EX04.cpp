#include <iostream>
using namespace std;


void swap(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int a, b;
	cout << "Please enter two integer values: " << endl;
	cout << "A : ";
	cin >> a;
	cout << "B : ";
	cin >> b;
	swap(a, b);
	cout << "value of A is : " << a << endl;
	cout << "value of B is : " << b << endl;

	return 0;
}