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
	// problem A
	CStudent s1;
	s1.Display();

	// problem B
	CStudent s2(1999000000, "����ö", "���ؿ�ȭ��");
	s2.Display();

	// problem C
	s1.setNumber(2006000000);
	s1.setName("�ΰ���");
	s1.setMajor("����Ʈ���");
	cout << "�й� :" << s1.getNumber() << endl;
	cout << "�̸� :" << s1.getName() << endl;
	cout << "���� :" << s1.getMajor() << endl;

	return 0;
}