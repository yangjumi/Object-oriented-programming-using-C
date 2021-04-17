#include <iostream>
#include <string>
using namespace std;

class CStudent {
private:
	int number;
	string name;
	string major;
public:
	CStudent(int _num = 2018000000, string _name = "ȫ�浿", string _major = "��ǻ�Ͱ��а�")
		: number(_num), name(_name), major(_major) {}
	void Display() {
		cout << "�й� :" << number << endl;
		cout << "�̸� :" << name << endl;
		cout << "���� :" << major << endl << endl;
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
	CStudent s[3]; // 3���� �л������� ������ class �迭
	int inputNumber; // Ű����� �й��� �Է� ���� ����
	string inputName, inputMajor; // Ű����� �̸�,������ �Է� ���� ����
	int length = 0; // ���� �Էµ� �л��� ��

	while (1)
	{
		cout << length + 1 << " ��° �л� �Է�" << endl;
		cout << "�й� : ";
		cin >> inputNumber;
		s[length].setNumber(inputNumber);
		cout << "�̸� : ";
		cin >> inputName;
		s[length].setName(inputName);
		cout << "���� : ";
		cin >> inputMajor;
		s[length].setMajor(inputMajor);

		if (length == 0) {
			cout << "���Է� �Ϸ�" << endl << endl;
		}
		else if (length == 1) {
			if (s[0].getNumber() == s[1].getNumber()) {
				cout << "���ߺ��� �й��� �����մϴ�." << endl << endl;
				length--;
			}
			else {
				cout << "���Է� �Ϸ�" << endl << endl;
			}
		}
		else if (length == 2) {
			if (s[0].getNumber() == s[2].getNumber() || s[1].getNumber() == s[2].getNumber()) {
				cout << "���ߺ��� �й��� �����մϴ�." << endl << endl;
				length--;
			}
			else {
				cout << "���Է� �Ϸ�" << endl << endl;
			}
		}

		length++;

		if (length == 3) {
			cout << "----����Է��� �Ϸ�Ǿ����ϴ�----" << endl;
			for (int length = 0; length < 3; length++) {
				cout << length + 1 << "�л�����" << endl;
				s[length].Display();
			}
			break;
		}
	}

	return 0;
}