#include <iostream>
#include <string>
using namespace std;

int main() {
	string input = "";
	string changed_str = "";
	char tmp = NULL;

	while (true) {
		cout << "문자열 하나를 입력해주세요 : ";
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

			cout << "입력하신 문자열의 역순 : ";
			cout << changed_str << endl;

			if (input == changed_str) {
				cout << "이 문자는 회문입니다." << endl;
			}
			else {
				cout << "이 문자는 회문이 아닙니다." << endl;
			}
			cout << endl;
	}
	return 0;
}