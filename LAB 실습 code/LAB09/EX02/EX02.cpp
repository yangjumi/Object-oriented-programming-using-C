#include <iostream>
#include <cmath>
using namespace std;

int anagram(const string& lhs, const string& rhs);

int main() {
	string s1, s2;
	cout << "�� �ܾ �Է����ּ��� : ";
	cin >> s1 >> s2;
	cout << anagram(s1,s2) << endl;

	return 0;
}

int anagram(const string& lhs, const string& rhs) {
	int result = 0;

	// ���ĺ� ������ ��Ÿ�� �� �ִ� �迭 2��
	int arylhs[26] = {};
	int aryrhs[26] = {};

	for (int i = 0; i < lhs.size(); i++) {
		arylhs[lhs[i] - 'a']++;
		result++;
	}

	for (int i = 0; i < rhs.size(); i++) {
		aryrhs[rhs[i] - 'a']++;
		result++;
	}

	for (int i = 0; i < 26; i++) {
		// 2���� �迭���� ���� �ε����� ��
		if (arylhs[i] != 0 && aryrhs[i] != 0) {
			// ���� ���ڰ� ���� �ܾ �ǹ�
			int common = (arylhs[i] > aryrhs[i]) ? aryrhs[i] : arylhs[i];
			result -= common * 2;
		}
	}

	return result;
}