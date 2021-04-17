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
	// problem A
	CStudent s1;
	s1.Display();

	// problem B
	CStudent s2(1999000000, "공지철", "연극영화과");
	s2.Display();

	// problem C
	s1.setNumber(2006000000);
	s1.setName("민경훈");
	s1.setMajor("포스트모던");
	cout << "학번 :" << s1.getNumber() << endl;
	cout << "이름 :" << s1.getName() << endl;
	cout << "전공 :" << s1.getMajor() << endl;

	return 0;
}