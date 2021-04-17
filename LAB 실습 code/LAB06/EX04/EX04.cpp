#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Student {
private:
	string name;
	int number;
	string major;
	vector<string> subject;
	vector<char> grade;
public:
	Student(string, int, string);
	void setName(string);
	void setID(int);
	void setdept(string);
	void print();
	void addGrade(string, char);
	void printGrades();
	float getGPA();
	void getYear(int);
};

Student::Student(string _name = "default", int _num = 0, string _major = "depart")
: name(_name), number(_num), major(_major){}

void Student::setName(string _name) {
	name = _name;
}

void Student::setID(int _num) {
	number = _num;
}

void Student::setdept(string _major) {
	major = _major;
}

void Student::print() {
	cout << name << " " << number << " " << major << endl;
}

void Student::addGrade(string _sub, char _grade) {
	subject.push_back(_sub);
	grade.push_back(_grade);
}

void Student::printGrades() {
	for (int i = 0; i < subject.size(); i++) {
		cout << subject[i] << " " << grade[i] << endl;
	}
	
	cout << "GPA : " << getGPA();
}

float Student::getGPA() {
	float result = 0;
	float num = 0;
	for (char elem : grade) {
		if (elem == 'A') {
			num = 4;
			result += num;
		}
		else if (elem == 'B') {
			num = 3;
			result += num;
		}
		else if (elem == 'C') {
			num = 2;
			result += num;
		}
		else if (elem == 'D') {
			elem = 1;
			result += num;
		}
		else if (elem = 'F') {
			elem = 0;
			result += num;
		}
	}

	return result / grade.size();
}

void Student::getYear(int _year) {
	int a = _year - (number / 1000000) + 1;
	if (a == 1) {
		cout << "Freshmen(1학년) " << endl;
	}
	else if (a == 2) {
		cout << "Sophomore(2학년) " << endl;
	}
	else if (a == 3) {
		cout << "Junior(3학년) " << endl;
	}
	else if (a == 4) {
		cout << "Senior(4학년) " << endl;
	}
	else {
		cout << "About to graduate(5학년 이상)" << endl;
	}
}

int main() {
	Student Harry("Harry", 2017310973, "CS");
	Harry.print();
	Harry.getYear(2019);
	Harry.addGrade("programmin", 'A');
	Harry.addGrade("Basic Circuit", 'B');
	Harry.printGrades();
	cout << "\n\n";

	Student ron;
	ron.print();
	cout << "\n";
	ron.setName("Ron");
	ron.setID(2014103959);
	ron.setdept("EE");
	ron.print();
	ron.getYear(2019);
	ron.addGrade("Computer Architecture", 'B');
	ron.addGrade("Maching Learning", 'B');
	ron.addGrade("Computer Vision", 'C');
	ron.printGrades();

	return 0;
}