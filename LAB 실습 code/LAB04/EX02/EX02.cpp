#include <iostream>
using namespace std;

int main() {
	string s = "사랑, 프로그래밍, 의자, 사랑의바보, 영통역, 천년의사랑, 냉장고, 객체지향";
	string search;

	cout << "키워드 : ";
	cin >> search;

	for (int i = 0; i < s.size(); i++) {
		int index1 = s.find(",");
		int index2 = s.find(",", index1);
		for(int j = )
	}
	return 0;
}