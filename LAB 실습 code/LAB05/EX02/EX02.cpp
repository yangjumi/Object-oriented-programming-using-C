#include <iostream>
#include <string>
using namespace std;

void change(string* str) {
	string s;
	cout << "input> ";
	cin >> s;

	str = &s;
	cout << "��ȯ�� �� ���> " << *str;
}

int main() {
	string str = "This is default value";

	cout << "�⺻�� ���> " << str << endl;

	change(&str);

	return 0;
}