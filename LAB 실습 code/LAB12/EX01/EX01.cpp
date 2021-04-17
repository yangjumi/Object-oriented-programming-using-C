#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main() {
	vector<int> list{ 10, 20, 30, 40, 50 };
	int num; // ����� list�� ��
	while (1) {
		cout << "��� �� ������ �� : ";
		cin >> num;

		try {
			for (int i = 0; i < num; i++) {
				cout << list.at(i) << " ";
			}
			cout << endl;
		}
		catch (exception& e) {
			cout << endl << e.what() << ". Please try again.";
			cout << endl;
		}
	}

	return 0;
}