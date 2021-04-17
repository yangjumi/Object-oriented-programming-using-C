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
	int mPeople; // ��� ��
};

class Ktx : public Train
{
public:
	Ktx() : Train(0) {}
	Ktx(int people) : Train(people) {}
	~Ktx() {}
	// ������ ����� Ÿ�� ������ �Լ�
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
		cout << i << "���� : ";
		cin >> takeon >> takeoff;
		k.station(takeon, takeoff);
		if (k.getPeople() > 300) {
			cout << "�����ʰ��Դϴ�" << endl;
			break;
		}
		else if (k.getPeople() < 0) {
			cout << "�����̴��Դϴ�" << endl;
			break;
		}
		else if (max < k.getPeople())
			max = k.getPeople();
	}

	cout << "���� ���� ����� ž�� ���� ���� ��� �� = " << max << endl;

	return 0;
}
