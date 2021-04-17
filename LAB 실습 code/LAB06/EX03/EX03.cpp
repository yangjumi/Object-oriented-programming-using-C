#include <iostream>
using namespace std;

int fibonacci(int);

int main()
{
	int n;
	int* p;
	cout << "n : ";
	cin >> n;

	// *p�� nũ�⸸ŭ �����Ҵ�
	p = new int[n];
	int* begin = p;
	int* end = p + n;

	// �Ǻ���ġ ������ ����Ͽ� *p�� ����
	// *p�� ����� �Ǻ���ġ ���� ���
	int i = 0;
	for (int* curr = begin; curr < end; curr++) {
		*curr = fibonacci(i);
		cout << *curr << " ";
		i++;
	}

	// ����� ���� *p�� ��������
	delete[] p;

	return 0;
}

int fibonacci(int n) {
	if (n < 2)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}