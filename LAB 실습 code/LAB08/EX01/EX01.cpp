#include <iostream>
using namespace std;

class Polygon {
public:
	Polygon(){}
	Polygon(int point, float length):mPoint(point),mLength(length){}
	~Polygon(){}
	virtual void calcGirth() {
		cout << "Girth: empty" << endl;
	}
	virtual void calcArea() {
		cout << "Area: empty" << endl;
	}

protected:
	int mPoint; // 꼭지점 갯수
	double mLength; // 한 변의 길이
};

class Rectangle : public Polygon
{
public:
	Rectangle() {}
	Rectangle(int point, float length) : Polygon(point, length){}
	~Rectangle() {}
	void calcGirth() override {
		cout << "Girth: " << Polygon::mPoint * Polygon::mLength << endl;
	}
	void calcArea() override {
		cout << "Area: " << Polygon::mLength * Polygon::mLength << endl;
	}
};




int main()
{
	Polygon pol;
	Rectangle rec(4, 10);

	cout << "--- Polygon class ---" << endl;
	pol.calcGirth();
	pol.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();

	return 0;
}
