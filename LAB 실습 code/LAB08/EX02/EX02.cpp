#include <iostream>
#include <cmath>
using namespace std;

class Polygon {
public:
	Polygon() {}
	Polygon(int point, float length) :mPoint(point), mLength(length) {}
	~Polygon() {}
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
	Rectangle(int point, float length) : Polygon(point, length) {}
	~Rectangle() {}
	void calcGirth() override {
		cout << "Girth: " << Polygon::mPoint * Polygon::mLength << endl;
	}
	void calcArea() override {
		cout << "Area: " << Polygon::mLength * Polygon::mLength << endl;
	}
};

class Triangle : public Polygon
{
public:
	Triangle() {}
	Triangle(int point, float length) : Polygon(point, length) {}
	~Triangle() {}
	void calcGirth() override {
		cout << "Girth: " << 3*Polygon::mLength << endl;
	}
	void calcArea() override {
		cout << "Area: " << sqrt(3) / 4 * Polygon::mLength * Polygon::mLength << endl;
	}
};

class Circle : public Polygon
{
public:
	Circle() {}
	Circle(int point, float length) : Polygon(point, length) {}
	~Circle() {}
	void calcGirth() override {
		cout << "Girth: " << 3.14*2*Polygon::mLength << endl;
	}
	void calcArea() override {
		cout << "Area: " << 3.14 * Polygon::mLength * Polygon::mLength << endl;
	}
};

int main()
{
	Triangle tri(3, 10);
	Rectangle rec(4, 10);
	Circle cir(0, 5);

	cout << "--- Triangle class ---" << endl;
	tri.calcGirth();
	tri.calcArea();
	cout << "--- Rectangle class ---" << endl;
	rec.calcGirth();
	rec.calcArea();
	cout << "--- Circle class ---" << endl;
	cir.calcGirth();
	cir.calcArea();

	return 0;
}
