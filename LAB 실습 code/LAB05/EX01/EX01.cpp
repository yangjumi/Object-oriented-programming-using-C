#include <iostream>
using namespace std;

void square(int* n) {
	int result = *n * *n;
	cout << "������> " << result;
}

int main() {
	int a;
	cout << "input> ";
	cin >> a;

	square(&a);

	return 0;
}