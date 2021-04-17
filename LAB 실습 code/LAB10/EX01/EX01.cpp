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
	cout << "첫번째 x : ";
	cin >> x1;
	cout << "첫번째 y : ";
	cin >> y1;
	cout << "두번째 x : ";
	cin >> x2;
	cout << "두번째 y : ";
	cin >> y2;
}

template<class type>
void Point<type>::print() {
	cout << endl << "두점 사이의 거리 = ";
	// type이 double일때
	//double a;

	// type이 int일때
	//int a;

	// type이 float일때
	float a; 

	a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	cout << a;
}

int main() {
	// type에는 int, double, float 중 어느 것이든 들어갈 수 있다
	//Point<double> p;
	//Point<int> p;
	Point<float> p;

	// 두 점의 position을 입력 받는 함수
	p.setPointFromKeybord();

	// 두 점 사이의 거리를 출력하는 함수
	p.print();

	return 0;
}