#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
	int a;

	while (true) {
		cout << "number : ";
		cin >> a;

		if (a % 2 == 0) {
			cout << a << "�� ¦���Դϴ�." << endl;
		}
		else if (a % 2 == 1) {
			cout << a << "�� Ȧ���Դϴ�." << endl;
		}
		else {
			break;
		}
	}
}