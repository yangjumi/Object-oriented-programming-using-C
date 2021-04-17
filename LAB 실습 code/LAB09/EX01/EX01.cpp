#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name; //이름
	int id; //학번
	string department; //과
	int grade; //학년
	int credit; //이수학점
public:
	Student(string n = "default", unsigned int i = 0, string d = "default", int g = 0, int c = 0) 
		: name(n), id(i), department(d), grade(g), credit(c) {}
	/* Getter, Setter 함수를 구현해주세요 */
	// setter 함수 구현
	void Setter(string n, unsigned i, string d, int g, int c) {
		name = n;
		id = i;
		department = d;
		grade = g;
		credit = c;
	}
	// getter 함수 구현
	string Getter_name() { return name; }
	int Getter_id() { return id; }
	string Getter_department() { return department; }
	int Getter_grade() { return grade; }
	int Getter_credit() { return credit; }
	/* 또한 virtual을 활용해서 print함수를 만들어주세요 */
	virtual void print() { cout << "I'm a student" << endl << endl;}
};

class Graduate : public Student {
private:
	bool type;
	float rate;
public:
	Graduate(string n, unsigned int i, string d, int g, int c, bool t, float r)
		:Student(n,i,d,g,c), type(t), rate(r){}
	void print() override {
		cout << "==================================" << endl;
		cout << "이    름 : " << Getter_name() << endl;
		cout << "학    번 : " << Getter_id() << endl;
		cout << "소속학과 : " << Getter_department() << endl;
		cout << "학    년 : " << Getter_grade() << endl;
		cout << "이수학점 : " << Getter_credit() << endl;
		cout << "조교유형 : ";
		if (type == false) 
			cout << "연구조교" << endl;
		else 
			cout << "교육조교" << endl;
		cout << "장학비율 : " << rate << endl;
		cout << "===================================" << endl;
	}
};

class UnderGraduate : public Student {
private:
	string club;
public:
	UnderGraduate(string n, unsigned int i, string d, int g, int c, string cb)
		: Student(n,i,d,g,c), club(cb){}
	void print() override {
		cout << "===================================" << endl;
		cout << "이    름 : " << Getter_name() << endl;
		cout << "학    번 : " << Getter_id() << endl;
		cout << "소속학과 : " << Getter_department() << endl;
		cout << "학    년 : " << Getter_grade() << endl;
		cout << "이수학점 : " << Getter_credit() << endl;
		cout << "동아리명 : " << club << endl;
		cout << "===================================" << endl;
	}
};

int main(void)
{
	Student Std;
	Graduate Kang("강석원", 2018311025, "컴퓨터공학과", 1, 18, false, 0.5);
	UnderGraduate Hong("홍길동", 20141111, "컴퓨터공학과", 2, 80, "알고리즘동아리");
	
	Std.print();
	Kang.print();
	Hong.print();
	return 0;
}