#include <iostream>
#include <string>
using namespace std;

class CStudent {
private:
	int number;
	string name;
	string major;
public:
	CStudent(int _num = 2018000000, string _name = "홍길동", string _major = "컴퓨터공학과")
		: number(_num), name(_name), major(_major) {}
	void Display() {
		cout << "학번 :" << number << endl;
		cout << "이름 :" << name << endl;
		cout << "전공 :" << major << endl << endl;
	}
	void setNumber(int _num) {
		number = _num;
	}
	void setName(string _name) {
		name = _name;
	}
	void setMajor(string _major) {
		major = _major;
	}
	int getNumber() {
		return number;
	}
	string getName() {
		return name;
	}
	string getMajor() {
		return major;
	}
};

int main()
{
	CStudent s[3]; // 3명의 학생정보를 저장할 class 배열
	int inputNumber; // 키보드로 학번을 입력 받을 변수
	string inputName, inputMajor; // 키보드로 이름,전공을 입력 받을 변수
	int length = 0; // 현재 입력된 학생의 수

	while (1)
	{
		cout << length + 1 << " 번째 학생 입력" << endl;
		cout << "학번 : ";
		cin >> inputNumber;
		s[length].setNumber(inputNumber);
		cout << "이름 : ";
		cin >> inputName;
		s[length].setName(inputName);
		cout << "전공 : ";
		cin >> inputMajor;
		s[length].setMajor(inputMajor);

		if (length == 0) {
			cout << "※입력 완료" << endl << endl;
		}
		else if (length == 1) {
			if (s[0].getNumber() == s[1].getNumber()) {
				cout << "※중복된 학번이 존재합니다." << endl << endl;
				length--;
			}
			else {
				cout << "※입력 완료" << endl << endl;
			}
		}
		else if (length == 2) {
			if (s[0].getNumber() == s[2].getNumber() || s[1].getNumber() == s[2].getNumber()) {
				cout << "※중복된 학번이 존재합니다." << endl << endl;
				length--;
			}
			else {
				cout << "※입력 완료" << endl << endl;
			}
		}

		length++;

		if (length == 3) {
			cout << "----모든입력이 완료되었습니다----" << endl;
			for (int length = 0; length < 3; length++) {
				cout << length + 1 << "학생정보" << endl;
				s[length].Display();
			}
			break;
		}
	}

	return 0;
}