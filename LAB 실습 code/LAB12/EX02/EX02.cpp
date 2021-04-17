#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> list;
	// vector를 random크기만큼 채운다
	int a = rand() % 101;
	for (int i = 0; i < a; i++) {
		list.push_back(i);
	}

	int cnt = -1;
	while (1)
	{
		cnt++;
		try {
			list.at(cnt);
		}
		catch (exception& e) {
			cout << "현재 list는 " << cnt << "의 크기를 가지고 있다";
			cout << endl;
			break;
		}
	}
	return 0;
}