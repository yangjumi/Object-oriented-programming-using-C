#include <iostream>
using namespace std;

int gcd(int a, int b) {
	int q, r;
	q = a / b;
	r = a % b;
	if (r == 0)
		return b;
	gcd(b, r);
}

int main() {
	int a, b;
	cin >> a;
	cin >> b;
	cout << "gcd(" << a << "," << b << ") = " << gcd(a, b);
}