#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

class CStudent
{
public:
	CStudent() {}
	~CStudent() {}

	void setName(string n) { m_Name = n; }
	string getName() { return m_Name; }
	void setNumber(int n) { m_Number = n; }
	int getNumber() { return m_Number; }
	void setMajor(string n) { m_Major = n; }
	string getMajor() { return m_Major; }

	void setAll(string name, int number, string major)
	{
		m_Name = name;
		m_Number = number;
		m_Major = major;
	}

	void Display()
	{
		cout << "이름 : " << m_Name << "\n";
		cout << "학번 : " << m_Number << "\n";
		cout << "전공 : " << m_Major << "\n\n";
	}
private:
	string m_Name;
	int m_Number;
	string m_Major;
};


class FileNotFoundException : public exception {
	string message; // Identifies the exception and filename
public:
	FileNotFoundException(const string& fname) :
		message("File \"" + fname + "\" not found") {}

	virtual const char* what() const throw () {
		return message.c_str();
	}
};

vector<CStudent> read_file(string& filename) {
	int num;
	string name;
	int number;
	string major;
	vector<CStudent> v;

	fstream fin;
	fin.open(filename);
	if (!fin)
		throw FileNotFoundException(filename);

	CStudent* tmp = new CStudent;
	for (int i = 0; i < 3; i++) {
		fin >> name;
		fin >> number;
		fin >> major;
		tmp->setAll(name, number, major);
		v.push_back(*tmp);
	}
	return v;
}


int main() {
	string str;
	cout << "파일 이름 : ";
	cin >> str;
	try {
		vector<CStudent> numbers = read_file(str);
		for (CStudent value : numbers)
			value.Display();
	}
	catch (std::exception& e) {
		cout << e.what() << '\n';
	}
	return 0;
}