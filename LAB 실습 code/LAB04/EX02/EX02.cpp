#include <iostream>
using namespace std;

int main() {
	string s = "���, ���α׷���, ����, ����ǹٺ�, ���뿪, õ���ǻ��, �����, ��ü����";
	string search;

	cout << "Ű���� : ";
	cin >> search;

	for (int i = 0; i < s.size(); i++) {
		int index1 = s.find(",");
		int index2 = s.find(",", index1);
		for(int j = )
	}
	return 0;
}