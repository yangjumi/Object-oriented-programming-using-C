#include <iostream>
#include <string>
using namespace std;

void change(string* str) {
	string s;
	cout << "input> ";
	cin >> s;

	str = &s;
	cout << "변환된 값 출력> " << *str;
}

int main() {
	string str = "This is default value";

	cout << "기본값 출력> " << str << endl;

	change(&str);

	return 0;
}