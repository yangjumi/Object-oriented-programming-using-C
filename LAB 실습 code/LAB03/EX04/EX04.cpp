#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;

	while (true) {
		cout << endl << "number : ";
		cin >> n;
		if (n >= 1 && n <= 9) {
			for (int i = 1; i <= 9; i++) {
				cout << n << "*" << i << " = " << n * i << setw(3);
			}
		}
		else {
			break;
		}
	}
}