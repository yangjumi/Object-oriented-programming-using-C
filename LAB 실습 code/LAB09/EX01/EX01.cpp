#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name; //�̸�
	int id; //�й�
	string department; //��
	int grade; //�г�
	int credit; //�̼�����
public:
	Student(string n = "default", unsigned int i = 0, string d = "default", int g = 0, int c = 0) 
		: name(n), id(i), department(d), grade(g), credit(c) {}
	/* Getter, Setter �Լ��� �������ּ��� */
	// setter �Լ� ����
	void Setter(string n, unsigned i, string d, int g, int c) {
		name = n;
		id = i;
		department = d;
		grade = g;
		credit = c;
	}
	// getter �Լ� ����
	string Getter_name() { return name; }
	int Getter_id() { return id; }
	string Getter_department() { return department; }
	int Getter_grade() { return grade; }
	int Getter_credit() { return credit; }
	/* ���� virtual�� Ȱ���ؼ� print�Լ��� ������ּ��� */
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
		cout << "��    �� : " << Getter_name() << endl;
		cout << "��    �� : " << Getter_id() << endl;
		cout << "�Ҽ��а� : " << Getter_department() << endl;
		cout << "��    �� : " << Getter_grade() << endl;
		cout << "�̼����� : " << Getter_credit() << endl;
		cout << "�������� : ";
		if (type == false) 
			cout << "��������" << endl;
		else 
			cout << "��������" << endl;
		cout << "���к��� : " << rate << endl;
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
		cout << "��    �� : " << Getter_name() << endl;
		cout << "��    �� : " << Getter_id() << endl;
		cout << "�Ҽ��а� : " << Getter_department() << endl;
		cout << "��    �� : " << Getter_grade() << endl;
		cout << "�̼����� : " << Getter_credit() << endl;
		cout << "���Ƹ��� : " << club << endl;
		cout << "===================================" << endl;
	}
};

int main(void)
{
	Student Std;
	Graduate Kang("������", 2018311025, "��ǻ�Ͱ��а�", 1, 18, false, 0.5);
	UnderGraduate Hong("ȫ�浿", 20141111, "��ǻ�Ͱ��а�", 2, 80, "�˰��򵿾Ƹ�");
	
	Std.print();
	Kang.print();
	Hong.print();
	return 0;
}