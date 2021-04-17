#include <iostream>
#include <vector>
#include <string>
#include <list>
using namespace std;

template<class T>
void sort(vector<T>& t) {
	T temp;
	for (int i = 0; i < t.size(); i++) {
		for (int j = 0; j < t.size()-1; j++) {
			if (t[j] > t[j + 1]) {
				temp = t[j];
				t[j] = t[j + 1];
				t[j + 1] = temp;
			}
		}
	}
}

template<class Iter>
void print(vector<Iter> t) {
	for (auto iter = begin(t); iter != end(t); iter++) {
		cout << *iter << ", ";
	}
	cout << endl;
}

int main() {
	vector<int> int_list(5);
	int_list = { 10, 5, 8, 1, 3 };
	vector<double> double_list(5);
	double_list = { 10.1, 5.1, 8.1, 1.1, 3.1 };
	vector<string> string_list(5);
	string_list = { "�ϳ�", "��", "��", "��", "�ټ�" };

	//sort, print�Լ��� �Ű����� �����ε��� �ƴ� template�� Ȱ���Ͽ� ���弼��.
	//print�Լ��� iterator�� Ȱ���ϼ���
	sort(int_list);
	sort(double_list);
	sort(string_list);

	print(int_list);
	print(double_list);
	print(string_list);
}