#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
	int x;
	int y;
public:
	Point(int, int);
	void setPoint(int, int);
	Point operator-(const Point& pt);
	Point operator*(const Point& pt);
	int getX();
	int getY();
};

Point::Point(int _x = 0, int _y = 0) : x(_x), y(_y) {}

void Point::setPoint(int _x, int _y) {
	this->x = _x;
	this->y = _y;
}

Point Point::operator-(const Point& pt) {
	Point result(this->x - pt.x, this->y - pt.y);
	return result;
}

Point Point::operator*(const Point& pt) {
	Point result(this->x * pt.x, this->y * pt.y);
	return result;
}

int Point::getX() {
	return this->x;
}
int Point::getY() {
	return this->y;
}

int main() {
	int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
	Point* pP1, * pP2, * pP3;

	cout << "첫번째 좌표[x1, y1]를 입력하세요 : ";
	cin >> x1 >> y1;

	cout << "두번째 좌표[x2, y2]를 입력하세요 : ";
	cin >> x2 >> y2;

	
	pP1 = new Point(x1, y1);
	pP2 = new Point(x2, y2);
	
	pP3 = new Point(); //x,y가 0으로 초기화

	/* 아래의 방식으로도 x, y값 설정이 가능해야합니다. */
	//pP1->setPoint(x1, y1);
	//pP2->setPoint(x2, y2);
	/***********************************************/

	*pP3 = (*pP1 - *pP2) * (*pP1 - *pP2);

	/* pP3을 활용하여 거리값을 구하세요 */
	cout << "두 좌표 사이의 길이는 " << sqrt(pP3->getX() + pP3->getY()) << "입니다" << endl;
	delete pP1, pP2, pP3;

	return 0;
}