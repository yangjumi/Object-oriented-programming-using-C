#include <iostream>
#include <string>
using namespace std;

int main() {
	string input = "";
	string changed_str = "";
	char tmp = NULL;

	while (true) {
		cout << "���ڿ� �ϳ��� �Է����ּ��� : ";
		cin >> input;
		if (input == "Q" || input == "q")
			break;
		changed_str = [](string str, char tmp)->string {
			for (int i = 0; i < str.length() / 2; i++) {
				tmp = str[i];
				str[i] = str[(str.length() - 1) - i];
				str[(str.length() - 1) - i] = tmp;;
			}
			return str;}(input, tmp);

			cout << "�Է��Ͻ� ���ڿ��� ���� : ";
			cout << changed_str << endl;

			if (input == changed_str) {
				cout << "�� ���ڴ� ȸ���Դϴ�." << endl;
			}
			else {
				cout << "�� ���ڴ� ȸ���� �ƴմϴ�." << endl;
			}
			cout << endl;
	}
	return 0;
}