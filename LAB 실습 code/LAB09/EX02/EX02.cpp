#include <iostream>
#include <cmath>
using namespace std;

int anagram(const string& lhs, const string& rhs);

int main() {
	string s1, s2;
	cout << "두 단어를 입력해주세요 : ";
	cin >> s1 >> s2;
	cout << anagram(s1,s2) << endl;

	return 0;
}

int anagram(const string& lhs, const string& rhs) {
	int result = 0;

	// 알파벳 개수를 나타낼 수 있는 배열 2개
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
		// 2개의 배열에서 같은 인덱스를 비교
		if (arylhs[i] != 0 && aryrhs[i] != 0) {
			// 낮은 숫자가 공통 단어를 의미
			int common = (arylhs[i] > aryrhs[i]) ? aryrhs[i] : arylhs[i];
			result -= common * 2;
		}
	}

	return result;
}