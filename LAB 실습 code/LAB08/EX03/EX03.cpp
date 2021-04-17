#include <iostream>
using namespace std;

class Train {
public:
	Train() {}
	Train(int people)
	{
		mPeople = people;
	}
	~Train() {}
	virtual int station(int takeOff, int takeOn) {
		return 0;
	}

protected:
	int mPeople; // 사람 수
};

class Ktx : public Train
{
public:
	Ktx() : Train(0) {}
	Ktx(int people) : Train(people) {}
	~Ktx() {}
	// 기차에 사람이 타고 내리는 함수
	int station(int takeOff, int takeOn) {
		mPeople -= takeOff;
		mPeople += takeOn;
		return 1;
	}
	int getPeople() {
		return mPeople;
	}
};


int main()
{
	Ktx k;
	int max = 0;

	int takeon, takeoff;
	for (int i = 1; i < 6; i++) {
		cout << i << "번역 : ";
		cin >> takeon >> takeoff;
		k.station(takeon, takeoff);
		if (k.getPeople() > 300) {
			cout << "정원초과입니다" << endl;
			break;
		}
		else if (k.getPeople() < 0) {
			cout << "정원미달입니다" << endl;
			break;
		}
		else if (max < k.getPeople())
			max = k.getPeople();
	}

	cout << "가장 많은 사람이 탑승 했을 때의 사람 수 = " << max << endl;

	return 0;
}
