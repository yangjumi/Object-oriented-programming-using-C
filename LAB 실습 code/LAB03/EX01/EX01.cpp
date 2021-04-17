#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
	int a;

	while (true) {
		cout << "number : ";
		cin >> a;

		if (a % 2 == 0) {
			cout << a << "은 짝수입니다." << endl;
		}
		else if (a % 2 == 1) {
			cout << a << "은 홀수입니다." << endl;
		}
		else {
			break;
		}
	}
}