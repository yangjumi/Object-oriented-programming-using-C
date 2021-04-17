#include <iostream>
#include <cmath>
using namespace std;

template<class type>
class Point {
private:
	type x1;
	type y1;
	type x2;
	type y2;
public:
	void setPointFromKeybord();
	void print();
};

template<class type>
void Point<type>::setPointFromKeybord() {
	cout << "ù��° x : ";
	cin >> x1;
	cout << "ù��° y : ";
	cin >> y1;
	cout << "�ι�° x : ";
	cin >> x2;
	cout << "�ι�° y : ";
	cin >> y2;
}

template<class type>
void Point<type>::print() {
	cout << endl << "���� ������ �Ÿ� = ";
	// type�� double�϶�
	//double a;

	// type�� int�϶�
	//int a;

	// type�� float�϶�
	float a; 

	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	cout << a;
}

int main() {
	// type���� int, double, float �� ��� ���̵� �� �� �ִ�
	//Point<double> p;
	//Point<int> p;
	Point<float> p;

	// �� ���� position�� �Է� �޴� �Լ�
	p.setPointFromKeybord();

	// �� �� ������ �Ÿ��� ����ϴ� �Լ�
	p.print();

	return 0;
}