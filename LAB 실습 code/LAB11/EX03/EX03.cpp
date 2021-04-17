#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int Number, MS[21][21] = { 0, }, i, j;
	int n;

	cout << "홀수 숫자를 하나 입력해 주세요 : ";
	cin >> n;

	Number = 1;
	i = 1;
	j = (n / 2) + 1;
	
	MS[i][j] = Number;
	Number++;

	while (Number <= n * n) {
		if ((Number - 1) % n == 0) {
			i++;
			MS[i][j] = Number;
			Number++;
		}
		else {
			if (i - 1 < 1) {
				i = n;
				j++;
				MS[i][j] = Number;
				Number++;
			}
			else if (j + 1 > n) {
				i--;
				j = 1;
				MS[i][j] = Number;
				Number++;
			}
			else {
				i--;
				j++;
				MS[i][j] = Number;
				Number++;
			}
		}
	}

	for (i = 1;i <= n;i++) {
		for (j = 1;j <= n;j++) {
			cout << std::setw(3);
			cout << MS[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}