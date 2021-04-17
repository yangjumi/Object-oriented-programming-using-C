#include <iostream>
using namespace std;

void get_data(int& x, int& y) {
	cout << "x �Է� : ";
	cin >> x;
	cout << "y �Է� : ";
	cin >> y;
}

void swap_call_by_value(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void swap_call_by_reference(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

int main() {
	int a, b;
	get_data(a, b);
	cout << endl;

	cout << "swap_call_by_value �Լ� ��� ��" << endl;
	cout << "x = " << a << ", " << "y = " << b << endl;
	swap_call_by_value(a, b);
	cout << "swap_call_by_value �Լ� ��� ��" << endl;
	cout << "x = " << a << ", " << "y = " << b << endl;
	cout << endl;

	cout << "swap_call_by_reference �Լ� ��� ��" << endl;
	cout << "x = " << a << ", " << "y = " << b << endl;
	swap_call_by_reference(a, b);
	cout << "swap_call_by_reference �Լ� ��� ��" << endl;
	cout << "x = " << a << ", " << "y = " << b << endl;
	cout << endl;

	return 0;
}