#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> list;
	// vector�� randomũ�⸸ŭ ä���
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
			cout << "���� list�� " << cnt << "�� ũ�⸦ ������ �ִ�";
			cout << endl;
			break;
		}
	}
	return 0;
}