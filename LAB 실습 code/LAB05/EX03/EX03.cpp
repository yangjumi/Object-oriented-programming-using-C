#include <iostream>
#include <vector>
using namespace std;

void Reverse(vector<int>& vec) {
	for (int i = 0; i < vec.size() / 2; i++) {
		int temp = vec[i];
		vec[i] = vec[9 - i];
		vec[9 - i] = temp;
	}
}


int main() {
	vector<int> vec(10);

	for (int i = 0; i < 10; i++) {
		vec[i] = i+1;
	}

	cout << "기본 Vector 값 : " << endl << '\t';
	for (int i = 0; i < 10; i++) {
		cout << vec[i] << "  ";
	}

	cout << "\n함수 실행 후 Vector 값 : " << endl << '\t';
	Reverse(vec);
	for (int i = 0; i < 10; i++) {
		cout << vec[i] << "  ";
	}

	return 0;
}