#include <iostream>
using namespace std;

int fibonacci(int);

int main()
{
	int n;
	int* p;
	cout << "n : ";
	cin >> n;

	// *p를 n크기만큼 동적할당
	p = new int[n];
	int* begin = p;
	int* end = p + n;

	// 피보나치 수열을 계산하여 *p에 저장
	// *p에 저장된 피보나치 수열 출력
	int i = 0;
	for (int* curr = begin; curr < end; curr++) {
		*curr = fibonacci(i);
		cout << *curr << " ";
		i++;
	}

	// 사용이 끝난 *p를 동적해제
	delete[] p;

	return 0;
}

int fibonacci(int n) {
	if (n < 2)
		return n;
	return fibonacci(n - 1) + fibonacci(n - 2);
}